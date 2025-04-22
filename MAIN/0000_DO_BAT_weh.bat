@echo off 

rem   damit die variablen in der For schleife aktualisiert werden
rem   und nicht nur einmal beim Verlassend der Schleife
setlocal enabledelayedexpansion

cls 

echo.
echo ***************************************
echo  0000_DO_BAT_weh.bat     for  TM4C
echo  Werner Haberer          10.02.2025
echo ***************************************
echo.


      
SET "index=0"
SET "source=0"
SET "dest=0"

rem ************
rem SET propfad=U:\WORK\0_TM4C\tm4c1294-hw-demo\WORK\MAIN
SET propfad=%C_WORK_DIR%\MAIN
SET propfad_INC=%C_WORK_DIR%\INC
rem ************

echo.
echo.

rem NEW !!!!!!!!!! sed jetzt anders !!!!

ECHO =================================================
echo ********************* viele INC T0 Files
rem ;* INC T0 Files

echo ********************* PRE *** N00 bis (brauch ich nicht daher nur 5)
rem KLAPPE 0
rem For all :
rem DOKU: nach dem wird gesucht
SET search=ORIGINAL
rem DOKU: in dem File
rem old SET source=INC_T0_ORIGINAL.c
rem old SET source=at_T0INT_ORIGINAL.c
SET source=afg_T0INT_ORIGINAL.c

rem DOKU: Anfang und Ende des Filenamens
SET "name_anf=afg_T0INT_"
SET "name_end=.c"

rem DOKU: Funktionsaufruf und ORIGINAL wird ersetzt durch den Parameter = Mittelteil des Filenamens

rem ;*
FOR /L %%V IN (1,1,5) DO (

IF %%V LSS 10 SET index=N0%%V
IF %%V GEQ 10 SET index=N%%V

rem jetzt N ganz aus ! call:do_INC !index!
)
rem *****************
rem KLAPPE 1

rem SET search     und   SET source     von oben !!!
rem SET name_anf   und   SET name_end   von oben !!!

echo ********************* PRE *** P00 bis P12
rem KLAPPE 0
FOR /L %%V IN (1,1,12) DO (

IF %%V LSS 10 SET index=P0%%V
IF %%V GEQ 10 SET index=P%%V

call:do_INC !index!
)
rem *****************
rem KLAPPE 1

echo ********************* PRE *** P00A00 bis A40
rem KLAPPE 0
FOR /L %%V IN (1,1,40) DO (

IF %%V LSS 10 SET index=P00A0%%V
IF %%V GEQ 10 SET index=P00A%%V

call:do_INC !index!
)
rem *****************
rem KLAPPE 1

echo ********************* PRE *** P00A00B00 bis B05
rem KLAPPE 0
FOR /L %%V IN (1,1,5) DO (

IF %%V LSS 10 SET index=P00A00B0%%V
IF %%V GEQ 10 SET index=P00A00B%%V

call:do_INC !index!
)
rem *****************
rem KLAPPE 1

echo ********************* PRE *** P00A00B00C00 bis C04
rem KLAPPE 0
FOR /L %%V IN (1,1,4) DO (

IF %%V LSS 10 SET index=P00A00B00C0%%V
IF %%V GEQ 10 SET index=P00A00B00C%%V

call:do_INC !index!
)
rem *****************
rem KLAPPE 1

echo ********************* PRE *** P00A00B00C00D00 bis D05
rem KLAPPE 0
FOR /L %%V IN (1,1,5) DO (

IF %%V LSS 10 SET index=P00A00B00C00D0%%V
IF %%V GEQ 10 SET index=P00A00B00C00D%%V

call:do_INC !index!
)
rem *****************
rem KLAPPE 1

echo ********************* PRE *** P00A00B00C00D00E00 bis E20
rem KLAPPE 0
FOR /L %%V IN (1,1,20) DO (

IF %%V LSS 10 SET index=P00A00B00C00D00E0%%V
IF %%V GEQ 10 SET index=P00A00B00C00D00E%%V

call:do_INC !index!
)
rem *****************
rem KLAPPE 1

echo ********************* CG_pre *** Grund (in MAIN)
rem KLAPPE 0

rem create File
SET index=CG
call:do_MAIN !index!

rem *****************
rem KLAPPE 1



ECHO ================================================= 
echo ********************* INC_T0_STATES_xx 6 FILES werden estellt P A B C D E

rem For all :
rem DOKU: nach dem wird gesucht
SET search=ORIGINAL
rem DOKU: in dem File
SET source=INC_T0_STATES_ORIGINAL.c

rem DOKU: Anfang und Ende des Filenamens
SET "name_anf=INC_T0_STATES_"
SET "name_end=.c"

rem DOKU: Funktionsaufruf und ORIGINAL wird ersetzt durch den Parameter = Mittelteil des Filenamens

call:do_INC P
call:do_INC P00A
call:do_INC P00A00B
call:do_INC P00A00B00C
call:do_INC P00A00B00C00D
call:do_INC P00A00B00C00D00E


ECHO ================================================= 
echo ********************* CHECK_T0INT_xx 6 FILES werden estellt P A B C D E

rem For all :
rem DOKU: nach dem wird gesucht
SET search=ORIGINAL
rem DOKU: in dem File
SET source=afg_CHECK_T0INT_ORIGINAL.c

rem DOKU: Anfang und Ende des Filenamens
SET "name_anf=afg_CHECK_T0INT_"
SET "name_end=.c"

rem DOKU: Funktionsaufruf und ORIGINAL wird ersetzt durch den Parameter = Mittelteil des Filenamens

call:do_INC P
call:do_INC P00A
call:do_INC P00A00B
call:do_INC P00A00B00C
call:do_INC P00A00B00C00D
call:do_INC P00A00B00C00D00E


ECHO ================================================= 
echo ********************* INC_T0_ECHO_xx 6 FILES werden estellt P A B C D E

rem For all :
rem DOKU: nach dem wird gesucht
SET search=ORIGINAL
rem DOKU: in dem File
SET source=INC_T0_ECHO_ORIGINAL.c

rem DOKU: Anfang und Ende des Filenamens
SET "name_anf=INC_T0_ECHO_"
SET "name_end=.c"

rem DOKU: Funktionsaufruf und ORIGINAL wird ersetzt durch den Parameter = Mittelteil des Filenamens

call:do_INC P
call:do_INC P00A
call:do_INC P00A00B
call:do_INC P00A00B00C
call:do_INC P00A00B00C00D
call:do_INC P00A00B00C00D00E



ECHO =================================================
echo ********************* viele INC_FILES_x Files mit allen Projekten
rem ;* INC_FILES_p          p_OUTPUT_0  1 2 3 4 5 6
rem KLAPPE 0
SET search=ORIGINAL
SET source=INC_FILES_ORIGINAL.c

rem DOKU: Anfang und Ende des Filenamens
SET name_anf=INC_FILES_
SET name_end=.c

rem ;*
FOR /L %%V IN (0,1,3) DO (

rem IF %%V LSS 10 SET "index=0%%V"
rem IF %%V GEQ 10 SET "index=%%V"

rem brauch ich jetzt noch nicht !!!! call:do_MAIN !index!
)
rem *****************

rem SET search     und   SET source     von oben !!!
rem SET name_anf   und   SET name_end   von oben !!!

rem nicht mehr !!!
rem  P_ALL_B.c     P_project.c     P_ALL_E.c
rem call:do_INC P
rem *****************

rem nicht mehr !!!
rem  AFG_ALL_B.c   AFG_project.c   AFG_ALL_E.c
rem call:do_INC AFG
rem *****************

rem nicht mehr !!!
rem  fa_ALL_B.c   fa_projects.c    fa_ALL_E.c
rem call:do_INC fa
rem *****************


call:do_MAIN A_P

call:do_MAIN fr0
call:do_MAIN fr1

call:do_MAIN p_SYS_LED_WORK
call:do_MAIN p_SYS_LED_ERROR
call:do_MAIN p_SYS_LED_USER
call:do_MAIN p_SYS_SPEAKER_0
call:do_MAIN p_SYS_SPEAKER_1

call:do_MAIN p_BLINK_INT
call:do_MAIN p_BLINK_MAIN

call:do_MAIN am

call:do_MAIN p_UART_USER
call:do_MAIN p_UART_USER_BUFFER_TX 
call:do_MAIN p_MONITOR_0

call:do_MAIN p_TEXTE

call:do_MAIN p_DOPULSE_0
call:do_MAIN p_DOPULSE_1
call:do_MAIN p_DOPULSE_MCP3428_ADC_0_CH_3

call:do_MAIN p_I2C_MAS_0 

call:do_MAIN p_PCA9535D_PIO_0
call:do_MAIN p_MCP3428_ADC_0

rem KLAPPE 1


ECHO =================================================
echo ********************* viele T0F_x Files
rem ;* T0F_DOPULSE  0 1 2 3
rem KLAPPE 0
SET search=ORIGINAL
SET source=T0F_DOPULSE_ORIGINAL_DOTI_BIT.c

rem DOKU: Anfang und Ende des Filenamens
SET name_anf=T0F_DOPULSE_
SET name_end=_DOTI_BIT.c

rem ;*
FOR /L %%V IN (0,1,3) DO (

rem IF %%V LSS 10 SET "index=0%%V"
rem IF %%V GEQ 10 SET "index=%%V"
SET index=%%V

call:do_MAIN !index!
)

rem KLAPPE 1



ECHO ================================================= 
echo ********************* col_P_FILES ist das grosse File mit allen P Files
echo ***                   die erzeuge ich hier noch nicht !!!

ECHO ================================================= 
echo ********************* afg_SYS_xxx Files with fuctions INIT ON OFF CPL
rem ;* afg_SYS_LED_xxx.c   afg_SYS_SPEAKER_xxx.c
rem KLAPPE 0

rem DOKU: copiert die 4 afg Funktionen für LED oder Port Lines
rem For all :
SET search=ORIGINAL
SET source=afg_SYS_ORIGINAL.c

rem DOKU: Anfang und Ende des Filenamens
SET "name_anf=afg_SYS_"
SET "name_end=.c"

rem DOKU: Funktionsaufruf und ORIGINAL wird ersetzt durch den Parameter = Mittelteil des Filenamens

call:do_MAIN LED_WORK
call:do_MAIN LED_ERROR
call:do_MAIN LED_USER
call:do_MAIN SPEAKER_0
call:do_MAIN SPEAKER_1

rem KLAPPE 1


rem ****************************** end      ********************************
goto END

rem ;* Functions do_INC do_MAIN
rem ****************************** function ********************************
rem KLAPPE 0

rem DOKU: SET "name_anf=inc_COL_"
rem DOKU: SET "name_end=_FILES.c"   SET "name_end=_FILES.asm"
rem DOKU: Funktionsaufruf und ORIGINAL wird ersetzt durch den Parameter = Mittelteil des Filenamens
rem DOKU: call:do_INC A_P

rem ;* X Do Function : File to INC Folder
:do_INC
SET "dest=!name_anf!%*!name_end!"
echo create : %propfad_INC%\!dest!
sed "s/%search%/%*/g" %propfad%\%source% > %propfad_INC%\!dest!
EXIT /B 0

rem ;* X Do Function : File to MAIN Folder
:do_MAIN
SET "dest=!name_anf!%*!name_end!"
echo create : %propfad%\!dest!
sed "s/%search%/%*/g" %propfad%\%source% > %propfad%\!dest!
EXIT /B 0



:END
ECHO =================================================
echo ... ready
rem ************************************************************
pause
rem KLAPPE 1
rem ****************************** end      ********************************
@echo on
