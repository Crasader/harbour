ROOT := ../../

include $(TOP)$(ROOT)config/global.mk

PRG_SOURCES := \
   hbmk2.prg \

RC_SOURCES := harbour.rc

PRG_MAIN := hbmk2.prg
LIBS = $(HB_LIBS_MT_RDD)
HB_RCFLAGS += -D_HB_INCLUDE_ICON

HB_PRGFLAGS += -u -i$(TOP)
# Not possible to override default entry
# function cleanly when using plain GNU Make
# to build, so we're using _APPMAIN(), which
# is better than Main()
HB_PRGFLAGS += -DHBMK_USE_APPMAIN
HB_PRGFLAGS += -DHBMK_WITH_BUILTIN_HEADERS_ALL

#ifeq ($(HB_PLATFORM),win)
   # $(info REF_FIX: https://stackoverflow.com/questions/46585662/windows-linking-to-libcurl-a-lib)
   #HB_LDFLAGS += /NODEFAULTLIB:LIBCMT
#endif

HB_CFLAGS += -DHB_WITH_ZLIB $(QUOTE)-I$(HB_HAS_ZLIB)$(QUOTE)
ifneq ($(HB_HAS_ZLIB),)
   HB_CFLAGS += -DHB_HAS_CURL $(QUOTE)-I$(HB_HAS_CURL)$(QUOTE)
endif

include $(TOP)$(ROOT)config/bin.mk

$(info ".....LIBS=$(LIBS).....................")
ifneq ($(filter $(HB_COMPILER),gcc mingw mingw64 clang clang64),)
   HB_USER_CFLAGS := $(filter-out -flto,$(HB_USER_CFLAGS))
   HB_LDFLAGS += -fno-lto
endif

