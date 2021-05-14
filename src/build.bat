::Сборка
::Сначала под Колибри(быстрее под колибри компилирует)
cls
@Echo off
title Build

echo .
echo Компиляция под Kolibri
kos32-tcc main.c modules.c -o KosBuild -lck -I ../libc/include


echo .
echo Компиляция под Win32
gcc -O3 -flto -Wall main.c modules.c -o WinBuild.exe

echo .
echo Сжатие с помощью kpack
kpack KosBuild KolibriRpg.kex

echo .
echo Сжатие с помощью upx
del KolibriRpg.exe
upx WinBuild.exe -o KolibriRpg.exe

del KosBuild
del WinBuild.exe
timeout.exe /t 20
build.bat