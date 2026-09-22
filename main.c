#include<stdio.h>
int main(){
int N;
printf("Enter N number: ");
if (scanf("%d",&N)!=1){
    printf("Error enter valid integer \n");
        return 1;
}
if (N<=0){
   printf("Error : please enter positive number\n");
return 1;
}
for (int i=1;i<=N;i++)
{
  for (int j=1;j<=i;j++)
   {
           printf("*");
   }
printf("\n");
}
return 0;
}

