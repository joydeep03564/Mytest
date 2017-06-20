#include<stdio.h>

 int main()
{
 int i,n,a[20],sum=0;
 float av;
 
printf("Enter number of subject: \n");
scanf("%d",&n);

printf("Enter the each subject's marks\n");
 for(i=0;i<n;i++)
{
 
scanf("%d",&a[i]);

}

for(i=0;i<n;i++)
{
 
printf("The marks of % d th subjects is %d\n",i,a[i]);

sum=sum+a[i];
}

printf("The total marks obtained % d\n", sum);

av= sum/(float)n;
printf("the average value of the marks %f\n",av);
return(0);

}
