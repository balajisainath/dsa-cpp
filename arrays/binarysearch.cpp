// C++ program to implement recursive Binary Search
#include<iostream>
using namespace std;


int binarysearch(int arrb[],int x,int low,int high)
{

    int mid=low+(high-low)/2;
    if (arrb[mid]==x)
    {
return mid;
    }
    else if (arrb[mid]<x)
    {
        low=mid+1;
    }
    else{
        high=mid-1;
    }
    return -1;
    
    
}
int main(void)
{
   int arrb[]={1,4,55,667,87,9,0,55,4,0};
   int x=87;
   int n=sizeof(arrb)/sizeof(arrb[0]);
   int result=binarysearch(arrb,x,0,n-1);
   if (result==-1)
   {
       cout<<"not found";
   }
   else{
       cout<<result;
   }
   return 0;

}