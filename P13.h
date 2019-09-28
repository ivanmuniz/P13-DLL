#pragma once

#define P13_API __declspec(dllexport)

extern "C" P13_API int asciiBinaryToInt(char* s);

extern "C" P13_API int asciiHEXToInt(char* s);

extern "C" P13_API int asciiOCTToInt(char* s);