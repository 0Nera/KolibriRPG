::���ઠ
::���砫� ��� ������(����॥ ��� ������ ����������)
cls
@Echo off
title Build

echo .
echo ��������� ��� Kolibri
kos32-tcc main.c modules.c -o KolibriRpg -lck


echo .
echo ��������� ��� Win32
gcc main.c modules.c -o KolibriRpg.exe -Os

echo .
echo ���⨥ � ������� kpack
kpack KolibriRpg KolibriRpg.kex

echo .
echo ���⨥ � ������� upx
del KolibriRpgPacked.exe
upx KolibriRpg.exe -o KolibriRpgPacked.exe

timeout.exe /t 20
build.bat