all: Libsys2

Libsys2: book.o faculty.o librarian.o libraryDatabase.o magzines.o member.o novels.o students.o textbooks.o User.o main.o
	g++ book.o faculty.o librarian.o libraryDatabase.o magzines.o member.o novels.o students.o textbooks.o User.o main.o -o Libsys2

book.o: book.cpp
	g++ -c book.cpp

librarian.o: librarian.cpp
	g++ -c librarian.cpp

faculty.o: faculty.cpp
	g++ -c faculty.cpp

libraryDatabase.o: libraryDatabase.cpp
	g++ -c libraryDatabase.cpp

magzines.o: magzines.cpp
	g++ -c magzines.cpp

main.o: main.cpp
	g++ -c main.cpp

member.o: member.cpp
	g++ -c member.cpp

novels.o: novels.cpp
	g++ -c novels.cpp

students.o: students.cpp
	g++ -c students.cpp

textbooks.o: textbooks.cpp
	g++ -c textbooks.cpp

User.o: User.cpp
	g++ -c User.cpp

clean: rm *.o Libsys2