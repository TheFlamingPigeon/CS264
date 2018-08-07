@echo off

set /p filename="Enter the name of the file to create: "
copy TEMPLATE.cpp %filename%.cpp

"C:\Program Files (x86)\Notepad++\notepad++.exe" %filename%.cpp

