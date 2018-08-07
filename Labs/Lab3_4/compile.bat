@echo off

set /p filename="Enter the name of the file to compile: "
g++ -o %filename%.exe %filename%.cpp

%~DP0%filename%.exe

pause