#ifdef WIN64
#define EXPORT __declspec(dllexport)
#else
#define EXPORT extern "C" __attribute__((visibility("default"))) __attribute__((used))
#endif

#include <cstring>

static char buffer[1024];

EXPORT
int add(int a, int b)
{
    return a + b;
}

EXPORT
char* capitalize(char *str) {
    strcpy(buffer, str);
    buffer[0] = 'X';
    return buffer;
}