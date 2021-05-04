::Сборка
::Сначала под Колибри(быстрее под колибри компилирует)
cls
@Echo off
title Build

echo .
echo Компиляция под Kolibri
kos32-tcc main.c modules.c -o KolibriRpg -lck


echo .
echo Компиляция под Win32
gcc main.c modules.c -o KolibriRpg.exe -Os

echo .
echo Сжатие с помощью kpack
kpack KolibriRpg KolibriRpg.kex

echo .
echo Сжатие с помощью upx
del KolibriRpgPacked.exe
upx KolibriRpg.exe -o KolibriRpgPacked.exe

timeout.exe /t 20
build.bat