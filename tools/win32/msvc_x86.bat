@echo off
call make_envars.bat

set VCBUILDTOOLS=x86
set BUILD_ARCH=x86

set LIB_BIN_ROOT=%ROOT_DIR%\3rd\%BUILD_ARCH%

REM set ROOT=c:\Users\hernad\x86
REM set PSQL_VER=10.11-1

REM set HB_HAS_POSTGRESQL=%ROOT%\postgresql-%PSQL_VER%\pgsql\include

set PATH=c:\windows;c:\windows\system32
set PATH=%PATH%;C:\Program Files\Git\cmd
set PATH=%PATH%;C:\Users\hernad\AppData\Local\Programs\Microsoft VS Code\bin
set WINSDK_VER=10.0.18362.0

REM set HB_INSTALL_PREFIX=c:\users\hernad\harbour-hernad\harbour
set HB_INSTALL_PREFIX=%ROOT_DIR%\build\%BUILD_ARCH%\harbour


call %VCBUILDTOOLS_PATH% %VCBUILDTOOLS%

set PATH=%PATH%;C:\Program Files (x86)\Windows Kits\10\bin\%WINSDK_VER%\%BUILD_ARCH%

cd %ROOT_DIR%

echo ROOT dir: %ROOT_DIR%\
echo HB_INSTALL_PREFIX=%HB_INSTALL_PREFIX%

echo SET PATH to harbour binaries with this command:
echo set PATH=%%HB_INSTALL_PREFIX%%\bin;%%PATH%%
