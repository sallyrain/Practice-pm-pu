@echo off

set /a number=400

:loop
set /a number+=1

set /a numdersquared=%number%*%number%

set /a ost=%numdersquared%%%1000000

if %ost%==269696 goto end

goto loop

:end

echo %number%
pause