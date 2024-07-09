CXX = g++

all: clear linked_list/bin

linked_list/bin:
	$(CXX) linked_list/bin.cc linked_list/linked_list.cc -o linked_list/bin

clear:
	rm -rf **/bin

