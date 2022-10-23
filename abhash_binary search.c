#include<stdio.h>
#include<conio.h>
int main()
{
int arr[500],i,n,x,flag =0,first,last,mid;
printf("Enter Size of array \n");
scanf("%d", &n);
printf("In Enter array element (ascending order) \n");
for(i=0; i<n; ++i)
scanf("%d", & arr[i]);
printf("\nEnter the element to Searech\n");
scanf("%d", &x);
first =0;
last = n-1;
while(first <= last)
{
  mid = (first + last)/2;
  if(x == arr[mid])
     {
        flag = 1;
        break;
     }

else
if(x >arr[mid+1])
first = mid + 1;
else
last = mid-1;
}
 if(flag == 1)
printf(" \n Element found at Position %d.", mid+1);
else
printf("\n Element not found");

return 0;
}
