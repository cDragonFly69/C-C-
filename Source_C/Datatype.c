#include <stdio.h>
#include <limits.h>
#include <float.h>
 
int main()
{
   printf("int 存储大小 : %llu \n", sizeof(int));
   printf("long 存储大小: %llu \n", sizeof(long));
   printf("char 存储大小 : %llu \n", sizeof(char));
   printf("double 存储大小 : %llu \n", sizeof(double));
   printf("float 存储大小 : %llu \n", sizeof(float));
   printf("float 最大值为 : %E\n", FLT_MAX);//需要使用float.h的头文件
   return 0;
}
