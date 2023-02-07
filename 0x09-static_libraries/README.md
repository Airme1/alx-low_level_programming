ALX Static Library
Static Library is a compiled object file that contains all the needed symbols for the main program to operate. Static library are added to a compiled program just before the linking stage.
To create a static library
1. All relevant files need to be in one directory. Header files inclusive
2. all the source files needs to be compiled to create an  object file .o for each of the source file (.c file)
3. All objects file needs to be archived. Remember the library contains all objects file, things needed within, symbols etc. use code:
	ar -rc libFILEname.a *.o

This code  above takes all object file and creastes a library for the program

