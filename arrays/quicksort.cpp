#include<iostream>
using namespace std;

void swap(int arrqs[],int i,int j){

    int temp=arrqs[i];
    arrqs[i]=arrqs[j];
    arrqs[j]=temp;
}

int partition(int arrqs[],int s,int e){
//pi= pivot
int pi=arrqs[e];

int i=s-1;
for (int j = s; j < e; j++)
{
if (arrqs[j]<pi)
{
i++;
swap(arrqs,i,j);
}


}
swap(arrqs,i+1,e); 
return i+1;


}


void quicksort(int arrqs[],int s,int e){

    if(s<e){

    int pivot=partition(arrqs,s,e);
   quicksort(arrqs,s,pivot-1);

   quicksort(arrqs,pivot+1,e);
    }

}

int main(){

    int arrqs[5]={33,56,8,9,1};
    int n=5;
//array before sort
cout<<"array before merge sort"<<endl;
for (int i = 0; i < n; i++)
{
    /* code */
    cout<<arrqs[i]<<",";
}

quicksort(arrqs,0,n-1);

cout<<"after sort array is"<<endl;
for (int x = 0; x < n; x++)
{
    /* code */
    cout<<arrqs[x]<<",";
}

return 0;







}