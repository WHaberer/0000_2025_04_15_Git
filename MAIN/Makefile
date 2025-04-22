
#******************************************************************************
# Makefile weh
#******************************************************************************

# Parts from 
# Auth: M. Fras, Electronics Division, MPI for Physics, Munich
# Mod.: M. Fras, Electronics Division, MPI for Physics, Munich
# Date: 07 Fab 2020
# Rev.: 13 Mar 2024

# Defines

OUT_CLEAR = FALSE
#define OUT_CLEAR
#endef
OUT_VERBOSE = TRUE


# ********** Program parameters. **********

# kommt normal von der Umgebungsvariablen ?!
COMPILER           = gcc

PROJECT            = GRUND

PROJECT_LIB_P      = ../0_lib_weh

SOURCE_FILES       = GRUND.c

# for the Linker
SOURCE_FILES_PL    =
#hw/GPIO_LED/afg_GPIO_LED.c
#hw/gpio/gpio_led.c              \
                     hw/gpio/gpio.c

#***
#HEADER_FILES      = GRUND.h                           \
                     $(PROJECT_LIBS)/gpio/gpio_led.h   \
                     $(PROJECT_LIBS)/gpio/gpio.h       \

HEADER_FILES       = $(SOURCE_FILES:.c=.h)
HEADER_FILES_PL    = $(SOURCE_FILES_PL:.c=.h)


#

#EXTRA_SOURCES      = $(PROJECT)_startup_$(COMPILER).c
#herausgenommen Ist jetzt in Grund.c
EXTRA_SOURCES      = 


# ********** TivaWare configuration. **********
# Defines the part type that this project uses.
PART               = TM4C1294NCPDT

# The base directory for TivaWare.
# weh Ich hab meines dem angepasst
TIVAWARE           = ../TivaWare/SW-TM4C-2.2.0.295

# Where to find source files that do not live in this directory.
# wird anscheinend nicht benutzt (wenn er alle sourcen findet)
VPATH              = $(PROJECT_LIB_P)

# ********** Includes **********

# Include the common make definitions.
include $(TIVAWARE)/makedefs

# Where to find header files that do not live in the source directory.
# IPATH ist der pfad wo er die include Files sucht !!!
# wird direkt dem compiler übergeben
# wird jetzt nicht mehr benutzt um die folder zu erzeugen
IPATH    = $(TIVAWARE)
IPATH   += $(PROJECT_LIB_P)

#jetzt path zum erzeugen der folder
# das sind die Ziel folder
#wenn einer nicht existiert dann gibt es eine Fehlermeldung
#fatal error: opening dependency file gcc/hw/gpio/gpio_led.d: No such file or directory
MPATH    = ../hw
#MPATH   += ../hw/gpio
#MPATH   += ../hw/GPIO_LED

# ********** Additional settings. **********
RM_FILES_CLEAN     = core *.o $(COMPILER)/*.axf $(COMPILER)/*.bin $(COMPILER)/*.d $(COMPILER)/*.o
RM_FILES_REALCLEAN = $(RM_FILES_CLEAN) $(COMPILER) *.bak *~ \
                     $(addsuffix ~, $(SOURCE_FILES)) \
                     $(addsuffix ~, $(HEADER_FILES))

# ********** Auxiliary programs, **********
BZIP2           = bzip2
CD              = cd
CLEAR           = clear
CP              = cp -a
CVS             = cvs
DATE            = date
DATE_BACKUP     = $(DATE) +"%Y-%m-%d_%H-%M-%S"
ECHO            = echo
ECHO_ERR        = $(ECHO) "**ERROR:"
#EDIT            = gvim
EDIT            = kate
EXIT            = exit
EXPORT          = export
FALSE           = false
GIT             = git
GREP            = grep
GZIP            = gzip
LM4FLASH        = lm4flash
SUDOLM4FLASH    = sudo lm4flash
LN              = ln -s
LS              = ls
LS_MORE         = ls -l
MAKE            = make
MKDIR           = mkdir
MSGVIEW         = msgview
MV              = mv
SLEEP           = sleep
SH              = sh -c
RM              = rm
TAIL            = tail -n 5
TAR             = tar
TCL             = tclsh
TEE             = tee
TOUCH           = touch
TRUE            = 1
WISH            = wish

# ********** Generate object files variable. **********
#in die OBJS compiliert er die .o files
# die obs werden benutzt um die .o zu erzeugen und dann auch vom linker um die .o zu verweden
#die sind aber in einem unterschiedlichen verzeichnis !
#OBJS := $(addprefix $(COMPILER)/,$(SOURCE_FILES:.c=.o))
#OBJS += $(addprefix $(COMPILER)/, $(SOURCE_FILES_PL:.c=.o))
#OBJS += $(addprefix $(COMPILER)/, $(EXTRA_SOURCES:.c=.o))
# er muss zuerst die libs machen und dann erst die source !!!!!!!!
OBJS := $(addprefix $(COMPILER)/, $(SOURCE_FILES_PL:.c=.o))
OBJS += $(addprefix $(COMPILER)/, $(EXTRA_SOURCES:.c=.o))
OBJS += $(addprefix $(COMPILER)/,$(SOURCE_FILES:.c=.o))


# ********** Generate libraries variable. **********
# this is necessary
LIBS  = $(TIVAWARE)/driverlib/$(COMPILER)/libdriver.a


# ********** Compiler configuration. **********
CPP      = $(CC) -E    this is not used here

#CFLAGS wird direkt vom compiler benutzt
#CFLAGS   += -O2 -Wall
#CFLAGS   += -O2 -Wall -E (E für preprocessor geht hier nicht)
#CFLAGS   += -O2 -Wall
# jetzt mit -Wunknown-pragmas  oder Wno-...
#CFLAGS   += -O2 -Wall -Wno-unknown-pragmas
# jetzt mit -Wunused-label
CFLAGS   += -O2 -Wall -Wno-unknown-pragmas -Wno-unused-label
# jetzt mit -funwind-tables nach Upgrade von Kubuntu Geht auch nicht ! Mehr fehlermeldungen
#CFLAGS   += -O2 -Wall -Wno-unknown-pragmas -Wno-unused-label -funwind-tables
# jetzt mit -no-funwind-tables Gleiche Fehlermeldung wie beim benutzten !
#CFLAGS   += -O2 -Wall -Wno-unknown-pragmas -Wno-unused-label -fno-unwind-tables

CXXFLAGS += -O2 -Wall     this is not used here
LDFLAGS  +=
INCLUDES += -I.    this is not used here
LDLIBS   += -L.    this is not used here

#    gcc  -E  -fdirectives-only  -o MySrc.lst  MySrc.cpp

#**********************************************************************
# weh : PHONY: These special targets are called phony and you can
# weh : a phony target is simply a target that is always out-of-date -> always run without
# weh : checking if a file is there !
# explicitly tell Make they're not associated with files

# old .PHONY: all exec edit flash install clean real_clean mrproper mk_backup mk_backup_src $(COMPILER)
#.PHONY: all exec edit flash install install_o clean real_clean mrproper mk_backup mk_backup_src help weh $(COMPILER)
.PHONY: all exec edit flash install install_o clean real_clean mrproper mk_backup mk_backup_src help show $(COMPILER)


#**********************************************************************


all:: $(COMPILER)
ifeq ($(OUT_CLEAR),TRUE)
	@$(CLEAR)
endif
ifeq ($(OUT_VERBOSE),TRUE)
	@$(ECHO) "************************"
	@$(ECHO) "* weh ... ALL "
	@$(ECHO) "************************"
	@$(ECHO)
	@$(ECHO) "echo ... PROJECT_LIBS : $(PROJECT_LIBS) " # weh
	@$(ECHO) "echo ... COMPILER : $(COMPILER) " # weh
	@$(ECHO) "echo ... TIVAWARE : $(TIVAWARE) " # weh
	@$(ECHO) "echo ... OBJS     : $(OBJS) " # weh
	@$(ECHO) "echo ... LIBS     : $(LIBS) " # weh
	@$(ECHO) "echo ... IPATH    : $(IPATH) " # weh
	@$(ECHO) "echo ... MPATH    : $(MPATH) " # weh
	@$(ECHO) "echo ... VPATH    : $(VPATH) " # weh
	@$(ECHO)
else
	@$(ECHO) "* weh ... MAKE ALL ... "
endif

ifeq ($(OUT_VERBOSE),TRUE)
all::
	@$(ECHO) "... do ... " # weh
endif

all::	$(COMPILER) $(COMPILER)/$(PROJECT).axf
#	@$(ECHO)

all::
	@$(ECHO) "... ready" # weh


#
# The rule to create the target directory.
#

$(COMPILER):
	@$(MKDIR) -p $(COMPILER)
	@$(ECHO)
	@$(ECHO) "did ... MKDIR -p $(COMPILER) in actual Dir .... OK " # weh


# Output was :
# did ... MKDIR -p gcc/. gcc/.. gcc/hw gcc/hw/gpio gcc/hw/uart gcc/utils in actual Dir .... OK 

# splitted with description
# did ... MKDIR -p 
# gcc/.
# gcc/..
# gcc/hw
# gcc/hw/gpio
# gcc/hw/uart
# gcc/utils
# in actual Dir .... OK 



#	@$(MKDIR) -p $(addprefix $(COMPILER)/, $(subst ../,,$(filter-out $(TIVAWARE), $(IPATH))))
#	@$(MKDIR) -p $(addprefix $(COMPILER)/, $(subst $(PROJECT_LIB_P),,$(filter-out $(TIVAWARE), $(IPATH))))
	@$(MKDIR) -p $(addprefix $(COMPILER)/, $(subst ../,,$(filter-out $(TIVAWARE), $(MPATH))))

	@$(ECHO)

#	@$(ECHO) "did ... MKDIR -p $(addprefix $(COMPILER)/, $(subst ../,,$(filter-out $(TIVAWARE), $(IPATH)))) in actual Dir .... OK " # weh
#	@$(ECHO) "did ... MKDIR -p $(addprefix $(COMPILER)/, $(subst $(PROJECT_LIB_P),,$(filter-out $(TIVAWARE), $(IPATH)))) in actual Dir .... OK " # weh
	@$(ECHO) "did ... MKDIR -p $(addprefix $(COMPILER)/, $(subst ../,,$(filter-out $(TIVAWARE), $(MPATH)))) in actual Dir .... OK " # weh



#
# Rules for building the blinky example.
#
# was blinky ${COMPILER}/blinky.axf: ${COMPILER}/blinky.o
# was boot_loader $(COMPILER)/$(PROJECT).axf: $(OBJS) $(LIBS)
#$(COMPILER)/$(PROJECT).axf: ${COMPILER}/$(PROJECT).o
#$(COMPILER)/$(PROJECT).axf: $(OBJS)
$(COMPILER)/$(PROJECT).axf: $(OBJS) $(LIBS)

#folgendes compiliert die libs zuerst macht aber komische Fehlermeldungen
#$(COMPILER)/$(PROJECT).axf: $(LIBS) $(OBJS)


#${COMPILER}/blinky.axf: ${COMPILER}/startup_${COMPILER}.o
#${COMPILER}/$(PROJECT).axf: ${COMPILER}/startup_${COMPILER}.o

#${COMPILER}/blinky.axf: ${TIVAWARE}/driverlib/${COMPILER}/libdriver.a
#${COMPILER}/$(PROJECT).axf: ${TIVAWARE}/driverlib/${COMPILER}/libdriver.a


$(OBJS): $(SOURCE_FILES) $(HEADER_FILES)

$(LIBS): $(TIVAWARE)
	@$(CD) $(TIVAWARE) && $(MAKE)



# Rules for building the project.
# ******** Linker

# war in blinky
#${COMPILER}/t3_weh.axf: t3_weh.ld
#${COMPILER}/$(PROJECT).axf: $(PROJECT).ld
#$(COMPILER)/$(PROJECT).axf: $(PROJECT).ld
# hab ich jetzt abgeschaltet

# Rules for building the project.
#SCATTERgcc_blinky=blinky.ld
#SCATTERgcc_$(PROJECT)=$(PROJECT).ld
SCATTERgcc_$(PROJECT)=$(PROJECT).ld

#ENTRY_t3_weh=ResetISR
ENTRY_$(PROJECT)=ResetISR

# blinky
# CFLAGSgcc=-DTARGET_IS_TM4C129_RA1
# MAF
#CFLAGSgcc=-DTARGET_IS_TM4C129_RA2
# list File erzeugen
#CFLAGSgcc=-DTARGET_IS_TM4C129_RA2-E  -fdirectives-only  -o MySrc.lst  MySrc.cpp
#CFLAGSgcc=-DTARGET_IS_TM4C129_RA2 -E -fdirectives-only  -o MySrc.lst  $(PROJECT).c
#CFLAGSgcc=-DTARGET_IS_TM4C129_RA2 -E -fdirectives-only  -o MySrc.lst  t2_weh.c
CFLAGSgcc=-DTARGET_IS_TM4C129_RA2

#   gcc --h
#   -E                       Preprocess only; do not compile, assemble or link.
#   -o <file>                Place the output into <file>.
#   -print-search-dirs

#    gcc  -E  -fdirectives-only  -o MySrc.lst  MySrc.cpp



#**********************************************************************
edit: $(SOURCE_FILES) $(HEADER_FILES)
	@$(CLEAR)
	@$(ECHO) "************************"
	@$(ECHO) "* weh ... EDIT "
	@$(ECHO) "************************"
	@$(ECHO)
	@$(EDIT) $(SOURCE_FILES) $(HEADER_FILES)


#**********************************************************************
# The rule to clean out all the build products.
#clean:
#	@rm -rf ${COMPILER} ${wildcard *~}

clean:
ifeq ($(OUT_CLEAR),TRUE)
	@$(CLEAR)
endif
ifeq ($(OUT_VERBOSE),TRUE)
	@$(ECHO) "************************"
	@$(ECHO) "* weh ... CLEAN "
	@$(ECHO) "************************"
	@$(ECHO)
endif

#	@$(SH) 'RM_FILES="$(RM_FILES_CLEAN)"; \
#		$(EXPORT) RM_FILES; \
#		$(ECHO) "Removing files: \"$$RM_FILES\""; \
#		$(RM) -r $$RM_FILES 2> /dev/null; \
#		$(ECHO) -n'

#delete the gcc dir and all ~bac files in actual Dir ...
	@$(ECHO) "... do ... rm -rf ${COMPILER} ${wildcard *~} delete the gcc dir and all ~bac files in actual Dir ..."
	@rm -rf ${COMPILER} ${wildcard *~}
	@$(ECHO) "... done ... OK "


	@$(ECHO)
	@$(ECHO) "check $(COMPILER) directory"
#	@$(LS) ./$(COMPILER)/
#	@$(LS_MORE) ./$(COMPILER)/
	@$(LS) ./
	@$(ECHO)
	@$(ECHO) "... ready"
	@$(ECHO)

#**********************************************************************
# The rule to clean out all the build products.


# Output was :
#Removing files: "core *.o gcc/*.axf gcc/*.bin gcc/*.d gcc/*.o gcc *.bak *~ t2_weh.c~ hw/gpio/gpio_led.c~ hw/gpio/gpio.c~ hw/gpio/gpio_led.h~ hw/gpio/gpio.h~"

# splitted with description
# Removing files:
# "
# core                   alle core dump files ?
# *.o
# gcc/*.axf
# gcc/*.bin
# gcc/*.d
# gcc/*.o
# gcc *.bak
# *~                    backup files von einigen Text Edioren !? Macht das Sainn ?
# t2_weh.c~
# hw/gpio/gpio_led.c~
# hw/gpio/gpio.c~
# hw/gpio/gpio_led.h~
# hw/gpio/gpio.h~
# "


real_clean:
ifeq ($(OUT_CLEAR),TRUE)
	@$(CLEAR)
endif
ifeq ($(OUT_VERBOSE),TRUE)
	@$(ECHO) "************************"
	@$(ECHO) "* weh ... REAL_CLEAN "
	@$(ECHO) "************************"
	@$(ECHO)
endif
	@$(SH) 'RM_FILES="$(RM_FILES_REALCLEAN)"; \
		$(EXPORT) RM_FILES; \
		$(ECHO) "Removing files: \"$$RM_FILES\""; \
		$(RM) -r $$RM_FILES 2> /dev/null; \
		$(ECHO) -n'
	@$(ECHO)
	@$(ECHO) "check $(COMPILER) directory"
#	@$(LS) ./$(COMPILER)/
	@$(LS_MORE) ./$(COMPILER)/
	@$(ECHO)
	@$(ECHO) "... ready"
	@$(ECHO)

#**********************************************************************
# remove the libdriver.a File from TivaWare
# wichtig wenn die globale x.c geändert wird
#er compiliert das aber dann nicht neu
# -> durch löschen compiliert er es neu
# weh 23.04.2024

del_libdriver:
ifeq ($(OUT_CLEAR),TRUE)
	@$(CLEAR)
endif
ifeq ($(OUT_VERBOSE),TRUE)
	@$(ECHO) "************************"
	@$(ECHO) "* weh ... DEL libdriver "
	@$(ECHO) "************************"
	@$(ECHO)
endif

#LIBS  = $(TIVAWARE)/driverlib/$(COMPILER)/libdriver.a


	@$(SH) 'for source_file in $(LIBS); do \
		if [ -e $$source_file ]; then \
			$(ECHO) "... HERE (OK) :" $$source_file; \
			$(ECHO) "delete (RM) :" $$source_file ; \
			$(RM) $$source_file; \
			$(ECHO) "... done ... OK"; \
		else \
			$(ECHO) "... File not Here :" $$source_file; \
		fi; \
	done'

	@$(ECHO)
	@$(ECHO) "... ready"
	@$(ECHO)


#**********************************************************************
show:
ifeq ($(OUT_CLEAR),TRUE)
	@$(CLEAR)
endif
ifeq ($(OUT_VERBOSE),TRUE)
	@$(ECHO) "************************"
	@$(ECHO) "* weh ... SHOW "
	@$(ECHO) "************************"
	@$(ECHO)
endif
	@$(ECHO) "check $(COMPILER) directory"
#	@$(LS) ./$(COMPILER)/
	@$(LS_MORE) ./$(COMPILER)/
	@$(ECHO)
	@$(ECHO) "... ready"
	@$(ECHO)

#**********************************************************************
install:: all

install::
	@$(ECHO) "... MAKE ready"
	@$(ECHO) "OUT_CLEAR = $(OUT_CLEAR)"

#install::
#er führt das auch aus wenn install nicht aufgerufen wird !
#OUT_CLEAR = FALSE
#das führt er nur im target aus. Macht aber Fehlermeldung
#	OUT_CLEAR = FALSE

install:: install_o
	@$(ECHO) "... INSTALL_O ready"

#**********************************************************************
install_o: $(COMPILER)/$(PROJECT).bin

ifeq ($(OUT_CLEAR),TRUE)
	@$(CLEAR)
endif
ifeq ($(OUT_VERBOSE),TRUE)
	@$(ECHO) "************************"
	@$(ECHO) "* weh ... INSTALL_O "
	@$(ECHO) "************************"
	@$(ECHO)
endif
	@$(ECHO) "ECHO start : LM4FLASH -E -S 0x0 $(COMPILER)/$(PROJECT).bin"
	#@$(LM4FLASH) -E -S 0x0 $(COMPILER)/$(PROJECT).bin
	# now with sudo
	@$(SUDOLM4FLASH) -E -S 0x0 $(COMPILER)/$(PROJECT).bin

#**********************************************************************
# Check if all necessary files and dirctories are here
# von MAF $(SOURCE_FILES) $(HEADER_FILES):
check:
ifeq ($(OUT_CLEAR),TRUE)
	@$(CLEAR)
endif
ifeq ($(OUT_VERBOSE),TRUE)
	@$(ECHO) "************************"
	@$(ECHO) "* weh ... CHECK "
	@$(ECHO) "************************"
	@$(ECHO)
endif
	@$(ECHO) "Check if some source files are missing ... "
	@$(ECHO) "Check ... "
	@$(ECHO)
	@$(SH) 'for source_file in $(SOURCE_FILES) $(HEADER_FILES) $(EXTRA_SOURCES); do \
		if [ ! -e $$source_file ]; then \
			$(ECHO) "... Missing   :" $$source_file; \
		else \
			$(ECHO) "... Here (OK) :" $$source_file; \
		fi; \
	done'
	@$(ECHO)
	@$(ECHO) "... ready"
#	@$(FALSE)

#**********************************************************************
help:
ifeq ($(OUT_CLEAR),TRUE)
	@$(CLEAR)
endif
	@$(ECHO) "************************"
	@$(ECHO) "* weh ... HELP "
	@$(ECHO) "************************"
	@$(ECHO)
	@$(ECHO) "* make install_o       :     Program the target (with no dependency) just program the Flash."
	@$(ECHO) "* make check           :     Check source Files"
	@$(ECHO)



#**********************************************************************


#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
