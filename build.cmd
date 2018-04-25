@echo off
call "C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Auxiliary\Build\vcvarsall.bat" x64
set compilerflags=/Od /Zi /EHsc
set linkerflags=/OUT:"main.exe"
cl.exe %compilerflags% ^
./src/main.cpp ^
./src/00HelloWorld/HelloWorld.cpp ^
./src/04CompoundTypes/ArrayTest.cpp ^
./src/04CompoundTypes/StringTest.cpp ^
/link %linkerflags%
