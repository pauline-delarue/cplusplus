CXX=g++
CXXFLAGS=-Wall -ggdb
RM=rm -f

intlist : test_intlist.o
  $(CXX) $(CXXFLAGS) $^ -o $@

test_intlist.o : intlist.h

%.o: %.cpp; $(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
  $(RM) test_intlist.o intlist