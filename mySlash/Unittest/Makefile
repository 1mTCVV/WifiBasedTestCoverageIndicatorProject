ifndef SILENCE
	SILENCE = @
endif

COMPONENT_NAME = slashTest
CPPUTEST_HOME = /cygdrive/c/cpputest
CPPUTEST_LDFLAGS = -lgcov --coverage
CPPUTEST_CXXFLAGS += -fprofile-arcs -ftest-coverage

CPPUTEST_USE_EXTENSIONS = Y
CPP_PLATFORM = g++

# This line is overriding the default new macros.  This is helpful
# when using std library includes like <list> and other containers
# so that memory leak detection does not conflict with stl.
#CPPUTEST_MEMLEAK_DETECTOR_NEW_MACRO_FILE = -include ApplicationLib/ExamplesNewOverrides.h
SRC_DIRS = \
	..

TEST_SRC_DIRS = \
	. 

INCLUDE_DIRS =\
  .. \
  $(CPPUTEST_HOME)/include

include $(CPPUTEST_HOME)/build/MakefileWorker.mk