CXX = g++
CXXFLAGS = -Wall -ggdb
RM = rm -f

test_intstack : test_intstack.o
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o : %.cpp; $(CXX) $(CXXFLAGS) -o $@ -c $<
test_intstack.o : test_intstack.cpp intstack.h

clean :
	$(RM) test_intstack.o test_intstack intstack.h