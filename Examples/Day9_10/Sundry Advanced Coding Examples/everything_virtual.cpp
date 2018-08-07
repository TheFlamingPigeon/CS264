#include <iostream>

/*
Some notes on virtual by Rob Kelly, December 2017

Informally "virtual" says - "If someone inherits from class A (say B) and we have an A pointer to some object (again, say B) then
we check, at runtime, if the class we're pointing to has overridden any of our methods marked virtual."

In the example below B inherits from A and overwrites "foo" but not "bar". The reason is that when overridding you must get the 
method signature completely correct and in this case it's not correct (it's missing the const).

The class that's inheriting and overridding methods does not need to delcare their methods as virtual to override them. Virtual 
is only used when pointing to a derived class through a base class pointer and not needed when overridding (see B's methods).

"Pure virtual" is when a method on a class is not only marked as virtual but also has no implementation. If a class has a pure virtual 
method then one cannot instantiate a class of that type. The coder must inherit from that class and implement the method if they want
to instantiate it. You CAN inherit from a class with a pure virtual method and NOT override it - HOWEVER the same rules apply to that 
class too and it cannot be instantiated either. See class D, E, F.

*/

class A {
public:
  
  A(){
    std::cout << "Constructing A" << std::endl;    
  }
  
  // If you want inheriting classes to act polymophically then you need a virtual destructor for deletion.
  virtual ~A(){
    std::cout << "Destructing A" << std::endl;  
  }
  
  virtual void foo() {
    std::cout << "A's foo" << std::endl; 
  }
  
  virtual void bar() const {
    std::cout << "A's bar" << std::endl;
  }
};


class B : public A {
public:
  B(){
    std::cout << "Constructing B" << std::endl;
  }
  ~B(){
    std::cout << "Destructing B" << std::endl;
  }
  
  void foo(){
    std::cout << "B's foo" << std::endl;
  }
  
  void bar(){
    std::cout << "B's bar - missing const" << std::endl;
  }

};

class C : public B {
public:
  C(){std::cout << "Constructing C" << std::endl;}
  ~C(){std::cout << "Destructing C" << std::endl;}
  void foo(){
    std::cout << "C's foo" << std::endl;
  }
  
  void bar() const {
    std::cout << "C's bar" << std::endl;
  }
};

class D {
public:
  
  D(){
    std::cout << "Constructing D" << std::endl;    
  }
  
  // If you want inheriting classes to act polymophically then you need a virtual destructor for deletion.
  virtual ~D(){
    std::cout << "Destructing D" << std::endl;  
  }
  
  // A pure virtual method, no implementation.
  virtual void foo() = 0;
  
  // A virtual method who takes an argument and returns something too, there's nothing special about it, I just wanted to change the signature.
  virtual float bar(int x) {
    std::cout << "D's bar" << std::endl;
    return 0.f;
  }
};

class E : public D {
public:
  
  E(){
    std::cout << "Constructing E" << std::endl;    
  }
  
 
  ~E(){
    std::cout << "Destructing E" << std::endl;  
  }
  
  // Notice we only override bar and not foo. Hence E contains a pure virtual method.
  // We could declare another "virtual void baz() = 0;" and we would contain two pure virtual methods,
  // one from D and the other from ourselves E.
  
  // A virtual method who takes an argument and returns something too, there's nothing special about it, I just wanted to change the signature.
  float bar(int x) {
    std::cout << "E's bar" << std::endl;
    return 1.f;
  }
};


class F : public E {
public:
  
  F(){
    std::cout << "Constructing F" << std::endl;    
  }
  
 
  ~F(){
    std::cout << "Destructing F" << std::endl;  
  }
  
  // In this class we only implement foo. We leave the bar to E. This will be some funky print outs...
  void foo() {
    std::cout << "F's foo!" << std::endl;
  }
};

int main(int argc, char * argv[])
{
  A a; // We can instantiate A since A has no pure virtual methods.
  A * A_pointer_to_B = new B;
  A_pointer_to_B->foo();
  A_pointer_to_B->bar(); // Will call A's bar since B is missing the "const".
  delete A_pointer_to_B;
  std::cout << std::string(20, '*') << std::endl;
  
 
  A * A_pointer_to_C = new C;
  A_pointer_to_C->foo(); // C's foo
  A_pointer_to_C->bar(); // C's bar, this is kinda freaky but C is the first class in the hierarchy to override bar correctly (that is, it uses const).
  delete A_pointer_to_C;
  std::cout << std::string(20, '*') << std::endl;
  
  // B's methods are not virtual, won't call any of C's.
  B * B_pointer_to_C = new B;
  B_pointer_to_C->foo(); // B's foo
  B_pointer_to_C->bar(); // B's bar
  // BROKEN! Check destructor print out. B's destructor isn't virtual and so doesn't check for C's and so it's not called.
  delete B_pointer_to_C; // This is a huge bug. C's destructor is never called. What if C had dynamic memory it needed to have cleaned up? Even worse the allocator (the boy behind new and delete) only reclaims sizeof(B) bytes and not sizeof(C) bytes. Very bad. This would be a very standard interview question (I was asked it 3 times by Bloomberg, IBM, and Rational Poker Group).
  std::cout << std::string(20, '*') << std::endl;
  
  // D d; // Won't work! Try it...
  // E e; // Won't work either, still contains a "filthy" (humour) pure virtual method.
  
  D * D_pointer_to_F = new F;
  D_pointer_to_F->foo(); // Should be F's foo
  D_pointer_to_F->bar(5); // Will be E's bar
  delete D_pointer_to_F;
  std::cout << std::string(20, '*') << std::endl;
  
  
	return 0;
}
