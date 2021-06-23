CXX = g++ 
# CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized -std=c++11 $(EXTRA_CXXFLAGS)

BINARIES=submissionTest

all: ${BINARIES}

tests: ${BINARIES}
	./submissionTest

submissionTest: submission.o submissionTest.o tddFuncs.o
	$(CXX) $(CXXFLAGS)  $^ -o $@ $(LDFLAGS)

clean:
	/bin/rm -f ${BINARIES} *.o
