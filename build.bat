::���ઠ
::���砫� ��� ������(����॥ ��� ������ ����������)
cls
@Echo off
title Build

echo ��������� ��� Kolibri
kos32-tcc src/main.c src/modules.c libc/include/libck.a -o bin/KosBuild -I libc/include  -lck 


echo ��������� ��� Win32
tcc -flto -Wall src/main.c src/modules.c -o bin/WinBuild.exe

cd bin

echo ���⨥ � ������� kpack
kpack KosBuild KolibriRpg.kex

echo ���⨥ � ������� upx

del KolibriRpg.exe
upx WinBuild.exe -o KolibriRpg.exe

del WinBuild.exe
del KolibriRpg.kex

timeout.exe /t 20
build.bat