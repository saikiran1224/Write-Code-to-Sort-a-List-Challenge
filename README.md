# Write-Code-to-Sort-a-List-Challenge
This is a repository containing Code for Bubble, Selection and Insertion Sorting Techniques

## Bubble Sort Technique
```c 
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
```

## Selection Sort Technique
```c
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
```

## Insertion Sort Technique
```c
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

```
