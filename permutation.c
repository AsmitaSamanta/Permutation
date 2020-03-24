#include<stdio.h>  
#include<stdlib.h>

void swap(int *x,int *y) 
{ 
int t; 
t=*x; 
*x=*y; 
*y=t; 
} 

void permute(int *a,int l,int r,int n) 
{ 
int i; 
if(l==r)
{ 
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n");	
}
else
{ 
	for(i=l;i<=r;i++) 
	{ 
		swap(&a[l],&a[i]); 
		permute(a,l+1,r,n); 
		swap(&a[l],&a[i]); 
	} 
} 
} 

int main() 
{ 
int *a;
int n,i;
printf("Please enter number of data :");
scanf("%d",&n);
a=(int *)malloc(n*(sizeof(int)));
printf("Please enter all the data one by one :\n");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
permute(a,0,n-1,n);  
} 

