#include <stdio.h>
#include <inttypes.h>

int main()
{
    int32_t x, z, y, a;
    x  = 1 << 31;
    for(int32_t i = 0; i < 30; i++) {
        x |= 1 << i;
    }

    z  = 0 << 31;
    for(int32_t i = 0; i < 30; i++) {
        z |= 1 << i;
    }

    y = -2147483648;
    a =  2147483647;
    
    printf("x = %+" PRId32 "\tsize = %d\t%X\n", x, sizeof(x), x);
    printf("z = %+d\tsize = %d\t%X\n", z, sizeof(z), z);
    printf("y = %+" PRId32 "\tsize = %d\t%X\n", y, sizeof(y), y);
    printf("a = %+d\tsize = %d\t%X\n", a, sizeof(a), a);

    return 0;
}