#include <stdio.h>
#include <limits.h>
#include <float.h>
 
int main()
{
   printf("int �洢��С : %llu \n", sizeof(int));
   printf("long �洢��С: %llu \n", sizeof(long));
   printf("char �洢��С : %llu \n", sizeof(char));
   printf("double �洢��С : %llu \n", sizeof(double));
   printf("float �洢��С : %llu \n", sizeof(float));
   printf("float ���ֵΪ : %E\n", FLT_MAX);//��Ҫʹ��float.h��ͷ�ļ�
   return 0;
}
