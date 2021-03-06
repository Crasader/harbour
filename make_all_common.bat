call tools\win32\git_clean_repos.bat

IF NOT exist tools\win32\Strawberry\perl\bin\perl.exe goto strawberry
:strawberry_end

cd %ROOT_DIR%

set BUILD_EXTERNAL=
IF NOT exist 3rd\%BUILD_ARCH%\postgresql\bin\postgres.exe  SET BUILD_EXTERNAL=1

IF DEFINED BUILD_EXTERNAL cd 3rd
IF [%BUILD_ARCH%] EQU [x64] (IF DEFINED BUILD_EXTERNAL call msvc_x64.bat)
IF [%BUILD_ARCH%] EQU [x86] (IF DEFINED BUILD_EXTERNAL call msvc_x86.bat)
IF DEFINED BUILD_EXTERNAL cd ..

cd %ROOT_DIR%
IF NOT EXIST 3rd\%BUILD_ARCH%\postgresql\bin\postgres.exe (echo postgresql.exe not exists ? & goto end)

IF NOT DEFINED HARBOUR_BUILD set INCLUDE=
IF NOT DEFINED HARBOUR_BUILD set LIBPATH=
IF NOT DEFINED HARBOUR_BUILD set PATH=c:\windows;c:\windows\system32

IF NOT DEFINED HARBOUR_BUILD call %VCBUILDTOOLS_PATH% %VCBUILDTOOLS%
IF NOT DEFINED HARBOUR_BUILD set PATH=%PATH%;C:\Program Files\Git\cmd
IF NOT DEFINED HARBOUR_BUILD set PATH=%PATH%;C:\Users\%USERNAME%\AppData\Local\Programs\Microsoft VS Code\bin
IF NOT DEFINED HARBOUR_BUILD set PATH=%PATH%;C:\Program Files (x86)\Windows Kits\10\bin\%WINSDK_VER%\%BUILD_ARCH%

IF NOT DEFINED HARBOUR_BUILD set PATH=%PATH%;%PERL_BIN_PATH%
IF NOT DEFINED HARBOUR_BUILD set PATH=%PATH%;%PERL_SITE_BIN_PATH%

cd %ROOT_DIR%

set HARBOUR_BUILD=1

set LIB_BIN_ROOT=%ROOT_DIR%\3rd\%BUILD_ARCH%
echo Libraries binary root=%LIB_BIN_ROOT%

set HB_INSTALL_PREFIX=%ROOT_DIR%\build\%BUILD_ARCH%\harbour
echo HB_INSTALL_PREFIX=%HB_INSTALL_PREFIX%

set HB_HAS_ZLIB=%LIB_BIN_ROOT%\zlib\include
set HB_HAS_POSTGRESQL=%LIB_BIN_ROOT%\postgresql\include

set HB_WITH_OPENSSL=%LIB_BIN_ROOT%\openssl\include

REM echo lib\win\msvc
REM mkdir lib\win\msvc

tools\win32\win-make.exe clean install

GOTO end

:strawberry
mkdir tools\win32\Strawberry 
cd tools\win32\Strawberry 
..\7z x ..\Strawberry.7z
cd ..\..\..\
goto strawberry_end

:end
echo END ...
