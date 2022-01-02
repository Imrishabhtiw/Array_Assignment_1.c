#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
    int a[n];
	printf("Enter the elements in the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elemets in array are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}



#include <stdio.h>
int main()
{
    int n, i, j = 0, k = 0;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n], e[n], o[n];
    printf("Enter the elements in array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            e[j] = a[i];
            j++;
        }
        else
        {
            o[k] = a[i];
            k++;
        }
    }
    printf("\nEven elements in an array :\n");
    for (i = 0; i < j; i++)
    {
        printf("%d\t", e[i]);
    }
    printf("\nOdd elements in array :\n");
    for (i = 0; i < k; i++)
    {
        printf("%d\t", o[i]);
    }
    return 0;
}



#include <stdio.h>
#include <math.h>

void main()
{
  float Price[50];
  int  i, Number;
  float Mean, Variance, SD, Sum=0, Differ, Varsum=0;

  printf("\nPlease Enter the N Value\n"); //Enter the number for how much we want to calculate Standard Deviation
  scanf("%d", &Number);

  printf("\nPlease Enter %d real numbers\n",Number);
  for(i=0; i<Number; i++)
   {
     scanf("%f", &Price[i]);
   }

  for(i=0; i<Number; i++)
   {
     Sum = Sum + Price[i]; //Calculating Sum
   }
  
  Mean = Sum /(float)Number; //Calculating Mean

  for(i=0; i<Number; i++)
   {
     Differ = Price[i] - Mean;
     Varsum = Varsum + pow(Differ,2);
   }
  
  Variance = Varsum / (float)Number;
  SD = sqrt(Variance); //Calculating Standard Deviation
  
  printf("Mean               = %.2f\n", Mean);
  printf("Varience           = %.2f\n", Variance);
  printf("Standard deviation = %.2f\n", SD);
}


#include<stdio.h>
int main()
{
    int t[10],b[10],i,st=0,ct=0,sb=0,cb=0;
    printf("Enter the votes of trump:\n");
    for(i=0;i<10;i++)
    {
        printf("State %d-",i+1);
        scanf("%d",&t[i]);
        st+=t[i];
    }
    printf("Enter the votes of biden:\n");
    for(i=0;i<10;i++)
    {
        printf("State %d-",i+1);
        scanf("%d",&b[i]);
        sb+=b[i];
    }
    for(i=0;i<10;i++)
    {
        if(b[i]<t[i])
        {
            printf("trump won in state %d\n",i+1);
            ct++;
        }
        else if(b[i]>t[i])
        {
            printf("Biden won in state %d\n",i+1);
            cb++;
        }
        else
        printf("Tie in state %d\n",i+1);
    }
    if(ct>cb)
    printf("Overall trump won\n");
    else if(ct<cb)
    printf("Overall biden won\n");
    else
    {
        if(sb>st)
        printf("Overall biden won\n");
        else if(sb<st)
        printf("Overall trump won\n");
        else
        printf("Overall tie\n");
    }
    return 0;
}



#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in array");
    for (i = 0; i < n; i++)
    {
        printf("Elements %d-", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > a[0])
            a[0] = a[i];
    }
    printf("Largest element = %d\n", a[0]);
    return 0;
}


#include<stdio.h>
int main()
{
    int n,i,pos=0,neg=0,zero=0;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in an array:");
    for(i=0;i<n;i++)
    {
        printf("Elements ",i);
        scanf("%d",&a[i]);
        if(a[i]>0)
        pos++;
        else if(a[i]<0)
        neg++;
        else
        zero++;
    }
    printf("Positive number count = %d\n",pos);
    printf("Negative number count = %d\n",neg);
    printf("Zero number count = %d",zero);
    return 0;
}


#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in array");
    for (i = 0; i < n; i++)
    {
        printf("Elements %d-", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < a[0])
            a[0] = a[i];
    }
    printf("Smallest element = %d\n", a[0]);
    return 0;
}



#include <stdio.h>
int main()
{
    int n, i,b,c,temp,min,max;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Elements %d-", i + 1);
        scanf("%d", &a[i]);
    }
    max = min = a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
        else if(min>a[i])
        min=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(max==a[i])
        c=i;
        else if(min==a[i])
        b=i;
    }
    temp=a[c];
    a[c]=a[b];
    a[b]=temp;
    printf("Updated array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}    



#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                    //Array Declaration
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)         //Sorting Array
    {
        int temp;
        for(int j=i+1; j<n ;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The second smallest element is %d",a[n-2]);   //Accessing the smallest element
    printf("\n");
    printf("The second largest element is %d",a[1]);      //Accessing the largest element
    return 0;
}



#include <stdio.h>
int main()
{
    int n, i,search,c=0;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Elements %d-", i + 1);
        scanf("%d", &a[i]);      
    }
    printf("Enter the element to search :");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        printf("Found at position %d\n",i);
        else
        c++;
    }
    if(c==n)
    printf("Not found");
    return 0;
}    


#include <stdio.h>
int main()
{
    int n, i,search,c=0;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Elements %d-", i + 1);
        scanf("%d", &a[i]);      
    }
    printf("Enter the element to search :");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        printf("Found at position %d\n",i);
        else
        c++;
    }
    if(c==n)
    printf("Not found");
    return 0;
}    


#include <stdio.h>
int main()
{
    int n, i,j,temp;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Elements %d-", i + 1);
        scanf("%d", &a[i]);      
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array in ascending order :\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}    



#include <stdio.h>
int main()
{
    int n, i,j,temp;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Elements %d-", i + 1);
        scanf("%d", &a[i]);      
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array in descending order :\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}   



#include <stdio.h>
 
int main()
{
   int position, c, n, value;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
   int array[n];
 
   printf("Enter %d elements\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &position);
 
   printf("Enter the value to insert\n");
   scanf("%d", &value);
 
   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];
 
   array[position-1] = value;
 
   printf("Resultant array is\n");
 
   for (c = 0; c <= n; c++)
      printf("%d\n", array[c]);
 
   return 0;
}



#include <stdio.h>
int main()
{
    int n, i,j,r,temp;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Elements %d-", i + 1);
        scanf("%d", &a[i]);      
    }
    printf("Enter number of left rotations :");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        temp=a[0];
        for(j=0;j<n;j++)
        a[j]=a[j+1];
        a[n-1]=temp;
    }
    printf("The array after rotation is :\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}  


#include <stdio.h>
int main()
{
    int n, i,j,r,temp;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Elements %d-", i + 1);
        scanf("%d", &a[i]);      
    }
    printf("Enter number of left rotations :");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        temp=a[n-1];
        for(j=n-1;j>0;j--)
        a[j]=a[j-1];
        a[0]=temp;
    }
    printf("The array after rotation is :\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
} 


#include <stdio.h>
int main()
{
    int n, i,r,c=0;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Elements %d-", i + 1);
        scanf("%d", &a[i]);      
    }
    printf("Enter number of find frequency :");
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        if(a[i]==r)
        c++;
    }
    printf("Frequency of%d is %d\n",r,c);
    return 0;
}    



#include <stdio.h>
int main()
{
    int n, i,c,j;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n],freq[n];
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Elements %d-", i + 1);
        scanf("%d", &a[i]);
        freq[i]=-1;      
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        freq[i]=c;
    }
    printf("Frequency of inputted elments :");
    for(i=0;i<n;i++)
    {
        if(freq[i]!=0)
        printf("%d occurs %d times\n",a[i],freq[i]);
    }
    return 0;
}    



// APPLYING LINEAR SEARCH TO SEARCH ELEMENT 78 ON THIS ARRAY.

// arr[7] = {19,45,67,78,89,56}
// Comparing 78 from each element of the array
// Not matched with 0 index
// Not matched with 1 index
// Not matched with 2 index
// Matched with 3 index

// We compare the searched elemt with each element of the array and we get the seached element at index 3
// Therefore we break the loop

// Hence we find at position - (index+1) that is at 4



#include<stdio.h>
int main(){
  int arr[5];
  arr[0] = 5;
  arr[2] = -10;
  arr[3/2] = 2;
  arr[3] = arr[0];
  printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
  return 0;
}



#include<stdio.h>
int main(){
int arr[2] = {10, 20, 30, 40, 50};
printf("%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[-1]);
return 0;
}

// 10 and 20 will come as output of arr[0] and arr[1] respectively and for arr[2] and arr[3] garbadge value will come as output and for arr[-1] 0 will come as output



#include<stdio.h>
 int main(){
int arr[10] = {1,2,3};
printf("%d %d %d  %d",arr[0],arr[2],arr[4],arr[6]);
return 0;
}
// 1 3 0 0 will come as output



int main(void) {
int i;
int a[5]={1,2,3,4,5};
for(i=5;i>=2;i--)
a[i-1]=a[i-2];
for(i=0;i<5;i++)
printf("%d ",a[i]);
return 0;}


#include<stdio.h>

int main()
{
 float a[100], sum=0, avg;
 int i, n;
 
 printf("Enter size: ");
 scanf("%d", &n);
 
 /* Reading array */
 printf("Enter numbers:\n");
 for(i=0; i< n; i++)
 {
  printf("a[%d] = ", i);
  scanf("%f", &a[i]);
 }
 
 /* Finding sum */
 for(i=0; i< n; i++)
 {
  sum = sum + a[i];
 }
 
 /* Calculating average */
 avg = sum/n;
 
 /* Displaying Result */
 printf("Sum is %f\n", sum);
 printf("Average is %f", avg);
 
 return 0;
}