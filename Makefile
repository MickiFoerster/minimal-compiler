CXX=g++
CXXFLAGS=-ggdb3 -O0
FLEXOUTPUT=scanner.cpp
BISONOUTPUT=parser.tab.cpp
BISONHEADER=parser.tab.hpp

compiler : $(BISONOUTPUT) $(FLEXOUTPUT) sigma.o
	$(CXX) $(CXXFLAGS) -o $@ $^ 

$(BISONOUTPUT) : parser.ypp
	bison -d $<


$(FLEXOUTPUT) : scanner.lpp
	flex -o $(FLEXOUTPUT) $<

sigma.o : sigma.cc
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(BISONHEADER) $(FLEXOUTPUT) $(BISONOUTPUT) compiler *.o

.PHONY: clean

