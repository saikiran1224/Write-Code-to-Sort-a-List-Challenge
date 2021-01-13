#include<stdio.h>
#include<conio.h>
int temp,a[10],i,j,n;
void bubblesort(int[],int);
void selectionsort(int[],int);
void insertionsort(int[],int);
void swap(int*,int*);
void main()
{
    int opt;
    clrscr();
    printf("Enter how Many elements :\n");
    scanf("%d",&n);
    printf("Enter the elements in the array :");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  do
  {
    printf("\nChoose your Sorting :\n");
    printf("                        1.Bubblesorting\n");
    printf("                        2.Selectionsorting\n");
    printf("                        3.Insertionsorting\n");
    printf("                        4.Exit\n");
    printf("\nEnter your choice :\n");
    scanf("%d",&opt);
    switch(opt)
    {
       case 1 : bubblesort(a,n);
break;
       case 2 : selectionsort(a,n);
break;
       case 3 : insertionsort(a,n);
break;
       case 4 : exit(0);
       default : printf("Invalid");
    }
  }while(1);
}
void swap(int *a,int *b)
{
  temp=*a;
  *a=*b;
  *b=temp;
}
void bubblesort(int a[],int n)
{
   for(i=0;i<n-1;i++)
   {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      swap(&a[j],&a[j+1]);
    }
   }
   printf("After Bubble Sorting: ");
   for(i=0;i<n;i++)
   printf("%d ",a[i]);
}
void selectionsort(int a[],int n)
{
    int min,k;
    for(i=0;i<n-1;i++)
    {
      min=a[i];
      for(j=i+1;j<n;j++)
      {
if(a[j]<min)
{
  min=a[j];
  k=j;
  swap(&a[i],&a[k]);
}
      }
    }
    printf("\nAfter Selection Sorting :\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
void insertionsort(int a[],int n)
{
   int v;
   for(i=1;i<n;i++)
   {
       j=i;
       v=a[i];
       while((j>0) && (a[j-1]>v))
       {
 swap(&a[j-1],&a[j]);
 j--;
       }
       a[j]=v;
   }
   printf("After insertionsorting :");
   for(i=0;i<n;i++)
   printf("%d ",a[i]);
}
