#include<stdio.h>
#include<stdlib.h>
int n,m;
int create(int *arr,int n);
int display(int *arr,int n);
int sum(int *arr,int *arr1);
   
int create(int *arr,int n)
    {
    int i=0;
   printf("\nEnter the degrees and coefficients:\n");
   for (i=0;i<2*n;i=i+2)
   {
       printf("ENTER DEGREE:- ");
       scanf("%d",&arr[i]);
       printf("Enter Coefficients:-");
       scanf("%d",&arr[i+1]);
    }
    return 0;
    
}
int display(int *arr,int n)
{
    printf("\npolynomial  is:");
    int k1=0;
    if(arr[k1+1]==1)
    printf("x^%d",arr[k1]);
    else
    printf("%dx^%d",arr[k1+1],arr[k1]);
    k1+=2;
    while(k1<2*n)
    {
      printf("+%dx^%d", arr[k1+1],arr[k1]);
      k1+=2;
    }
	return 0;
}
int sum(int *arr,int *arr1)
{
int i=0,j=0,k=0;
int sum[20];
while (m>0&&n>0)
{
if (arr[i]==arr1[j])
{
sum[k+1]=arr[i+1]+arr1[j+1];
sum[k]=arr[i];
m--;
n--;
i+=2;
j+=2;
}
else if (arr[i]>arr1[j])
{
sum[k+1]=arr[i+1];
sum[k]=arr[i];
m--;
i+=2;
}
else
{
sum[k+1]=arr[j+1];
sum[k]=arr1[j];
n--;
j+=2;
}
k+=2;
}
while (m>0)
{
sum[k+1]=sum[i+1];
sum[k]=arr[i];
k+=2;
i+=2;
m--;
}
while (n>0)
{
sum[k+1]=arr1[j+1];
sum[k]=arr1[j];
k+=2;
j+=2;
n--;
}
printf("\n\nSum of the two polynomials is:");
int k1=0;
if (sum[k1+1]==1)
printf("x^%d",sum[k1]);
else
printf("%dx^%d", sum[k1+1],sum[k1]);
k1+=2;
while (k1<k)
{
if (sum[k1+1]==1)
printf("+x^%d",sum[k1]);
else
printf("+%dx^%d",sum[k1+1],sum[k1]);
k1+=2;
}
return 0;
}
int main()
{
	int i;
	printf("Enter the value of 'n' for Polynomial 1:");
	scanf("%d",&n);
    printf("\nEnter the value of 'n' for Polynomial 2 :");
    scanf("%d",&m);
	int *a=(int*)malloc(n*sizeof(int));
    int *b=(int*)malloc(m*sizeof(int));
    printf("Enter the polynomial 1: \n");
	create(a,n);
 	printf("Displaying the polynomial 1: \n");
 	display(a,n);
    printf("Enter polynomial 2 : \n");
    create(b,m);
    printf("Displaying the polynomial 2: \n");
    display(b,m);
    sum(a,b);
 	return 0;
}