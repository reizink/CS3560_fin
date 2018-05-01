Final3560.o: Final3560.cc
	g++ -c Final3560.cc

clean:
	-rm *.o
	-rm -rf html latex

doc: Final3560.cc
	doxygen -g doc.conf
	doxygen doc.conf

count:
	$(CXX) $(CXXFLAGS) -o Final3560.o
