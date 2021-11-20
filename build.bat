::Сборка
::Сначала под Колибри(быстрее под колибри компилирует)
cls
@Echo off
title Build

echo Компиляция под Kolibri
kos32-tcc src/main.c src/modules.c libc/include/libck.a -o bin/KosBuild -I libc/include  -lck 


echo Компиляция под Win32
tcc -flto -Wall src/main.c src/modules.c -o bin/WinBuild.exe

cd bin

echo Сжатие с помощью kpack
kpack KosBuild KolibriRpg.kex

echo Сжатие с помощью upx

del KolibriRpg.exe
upx WinBuild.exe -o KolibriRpg.exe

del WinBuild.exe
del KolibriRpg.kex

timeout.exe /t 20
build.bat