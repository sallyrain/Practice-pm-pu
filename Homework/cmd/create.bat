@echo off
chcp 65001 > nul
SET /p pset="Enter dir - "
md %pset%
md %pset%\"Алгебра и геометрия"
echo Погожев Сергей Владимирович > %pset%\"Алгебра и геометрия"\readme.txt
echo Начало занятий: %date% >> %pset%\"Алгебра и геометрия"\readme.txt
md %pset%\"Мат анализ"
echo Платонов Алексей Виткторович > %pset%\"Мат анализ"\readme.txt
echo Начало занятий: %date% >> %pset%\"Мат анализ"\readme.txt
md %pset%\"Основы программирования"
echo Погожев Сергей Владимирович > %pset%\"Основы программирования"\readme.txt
echo Начало занятий: %date% >> %pset%\"Основы программирования"\readme.txt
md %pset%\"Дискретная математика"
echo Погожев Сергей Владимирович > %pset%\"Дискретная математика"\readme.txt
echo Начало занятий: %date% >> %pset%\"Дискретная математика"\readme.txt

copy op.bat %pset%
copy algem.bat %pset%