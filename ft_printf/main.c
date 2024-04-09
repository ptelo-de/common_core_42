#include <stdio.h>

int ft_printf(const char *format, ...);


int main(void)
{
    char d[]="aa";
    ft_printf("char:%c\n%%\nString:%s\nINT d:%d\nINT u:%u\nHex x:%x\nHex X:%X\nPointer:%p\n", 'd', "teste teste fff", 123, -123, -2, 1000, d);
    

   /*printf("%ld\n",(long unsigned int)(d));
   printf("%ld\n",(long unsigned int)(&d));*/
   printf("%p\n",d);
   printf("%x\n",13345);
}