

#include <stdio.h>


namespace ly
{
#define LOG(M, ...) printf(M "\n", ##__VA_ARGS__)

}