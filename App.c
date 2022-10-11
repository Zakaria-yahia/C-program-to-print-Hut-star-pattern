#include <stdio.h>
int main()
{
    unsigned char rows=5,x=0, star_num=0;
    x = rows;
   for(unsigned char y=1;y<=rows;y++)
   {
       for(unsigned char z=1;z<=x-1;z++)
       {
           printf(" ");
       }
       for(star_num=1;star_num<=2*y-1;star_num++)
       {
         printf("*");
       }
       x--;

      printf("\n");
    }
    for(unsigned char y=1;y<=star_num/3;y++)
    {
        for(unsigned char z=1;z<=star_num/3;z++)
        {
            printf("*");
        }
        for(unsigned char b=1;b<=star_num/3;b++)
        {
            printf(" ");
        }
        for(unsigned char a=1;a<=star_num/3;a++)
        {
            printf("*");
        }
        printf("\n");
    }
}