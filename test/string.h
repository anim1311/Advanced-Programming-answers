
#ifndef string_h
#define string_h

#include <stdlib.h>
#include <stdbool.h>

typedef struct string string;

string* STRING_CREATE(const char* str);

void STRING_FREE(string* s);

char* STRING_AT(string* s);

const char* STRING_GET(string* s);

void STRING_ADD(string* s, char c);

void STRING_REMOVE(string* s, size_t pos, size_t len);

void STRING_INSERT(string* s, size_t pos, const char* str);

void STRING_REPLACE(string*s, size_t pos, size_t len, const char* str);

size_t STRING_SIZE(string* s);

size_t STRING_GET_ALLOC(string* s);
 
#endif /* string_h */