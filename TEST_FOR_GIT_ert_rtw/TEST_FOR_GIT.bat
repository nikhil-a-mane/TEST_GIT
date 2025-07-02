
call "setup_mingw.bat"

cd .

if "%1"=="" ("%MINGW_ROOT%\mingw32-make.exe"  -j 2 -l 10 -Oline -f TEST_FOR_GIT.mk all) else ("%MINGW_ROOT%\mingw32-make.exe"  -j 2 -l 10 -Oline -f TEST_FOR_GIT.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1