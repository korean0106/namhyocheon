#include <stdio.h>
#define TEST 5

#define likely(x)     __builtin_expect((x),1)
#define unlikely(x)   __builtin_expect((x),0)

int main(void)
{
const int x=3;
int y = (unlikely(__builtin_constant_p (x)) ? (x) : -1);
int z = (likely(__builtin_constant_p (TEST) ? (TEST) : -1);
char buf[256];
sprintf(buf,"test : %d\n", y);
puts(buf);
sprintf(buf,"test2 : %d\n", z);
puts (buf);
return 0;
}
