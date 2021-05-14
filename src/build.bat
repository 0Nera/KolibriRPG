::���ઠ
::���砫� ��� ������(����॥ ��� ������ ����������)
cls
@Echo off
title Build

echo .
echo ��������� ��� Kolibri
kos32-tcc main.c modules.c -o KosBuild -lck -I ../libc/include


echo .
echo ��������� ��� Win32
gcc -O3 -flto -Wall main.c modules.c -o WinBuild.exe

echo .
echo ���⨥ � ������� kpack
kpack KosBuild KolibriRpg.kex

echo .
echo ���⨥ � ������� upx
del KolibriRpg.exe
upx WinBuild.exe -o KolibriRpg.exe

del KosBuild
del WinBuild.exe
timeout.exe /t 20
build.bat