#include<stdio.h>
void main()
{
 char str[20];
 scanf("%s",str);
 for(int i=0;str[i]!='\0';i++)
 {
   if(str[i]=='*')
    count++;
   if(str[i]=='#')
    count--;
 }
 if(count<0)
   printf("The number of hashes are more by %d",count);
 else
   printf("The number of asterisks are more by %d",count);
 return 0;
}
