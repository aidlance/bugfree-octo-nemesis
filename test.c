#include "vector.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    Vector3f temp = {1.0f, 1.0f, 1.0f};
    for (int i = 0; i < 3; ++i) { printf("%f ", temp[i]); } 
    return 0;
}
