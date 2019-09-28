# P13-DLL
DLL of P11. Base conversions and binary ops

The DLL has 3 functions  
int asciiBinaryToInt(char* s);  
int asciiHEXToInt(char* s);  
int asciiOCTToInt(char* s);  
  
All the function receive a pointer of type char that captures a string of 9 digits.  
If the function returns -1 there was a problem converting the char stream. This is mostly because the program found an invalid character that cannot be converted.  
Else it returns an integer with the value of the conversion.  
  
To run your code use:  
g++ -o "exeFileName" "cppFileName.cpp" -L. -l"dllFileName"  
Example:  
g++ -o main Prueba.cpp -L. -lP13  
  
Self-note:  
To make DLL:  
First:  
gcc -c P13.cpp  
Second:  
gcc -shared -o prueba.dll -Wl,--out-implib,libtstdll.a P13.o
