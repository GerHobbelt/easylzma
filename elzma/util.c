#include "util.h"

#ifdef _WIN32
#include <stdio.h>
#define unlink _unlink
#else
#include <unistd.h>
#endif

int
deleteFile(const char * path)
{
    return unlink(path);
}
