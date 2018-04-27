@echo off
echo %cd%
set VSCMD_START_DIR=%cd%
call "C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Auxiliary\Build\vcvarsall.bat" x64
set compilerflags=/Od /Zi /EHsc
set linkerflags=/OUT:"main.exe"
echo %cd%
cl.exe %compilerflags% ^
./src/main.cpp ^
./src/00HelloWorld/HelloWorld.cpp ^
./src/04CompoundTypes/ArrayTest.cpp ^
./src/04CompoundTypes/StringTest.cpp ^
./src/04CompoundTypes/StructTest.cpp ^
/link %linkerflags%
