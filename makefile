zang_gum : main.o zang_gum.o
	g++ main.o zang_gum.o -o zang_gum
main.o : main.cpp head.hpp
	g++ -c main.cpp  -o main.o	
zang_gum.o : zang_gum.cpp head.hpp
	g++ -c zang_gum.cpp -o zang_gum.o
clean:
	rm *.o zang_gum
	
