@echo off
cd build
cmake ..
make
..\bin\main.exe > ..\image\%1

cd ..

echo Build and run completed.
