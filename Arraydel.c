#include<stdio.h>

int main()
{

int a[20], i, n,loc;

printf("Enter size of the array\n");
scanf("%d", &n);

for(i=0; i<n;i++)
{
printf("Enter the array element \n");
scanf("%d",&a[i] );
}

for(i=0; i<n;i++)
{

printf("The Value element %d is % d \n",i,a[i]);

}


printf("Enter the location of deletion\n");
scanf("%d", & loc);

for(i=loc-1;i<n-1;i++)
{
  a[i]=a[i+1];

 printf("The resultant array \n");

 for(i=0; i<n-1;i++)
{
 printf("The printed array is %d\n ", a[i]);
}

 
}

return 0;

}
