#include<iostream>
using namespace std;


 void merge(int *arr,int s,int e){
     int mid=s + (e - s) / 2;

     int len1=mid-s+1;
     int len2=e-mid;
     int *first=new int(len1);
     int *second=new int(len2);

     int k=s;

     for (int  i = 0; i < len1; i++)
     {
         first[i]=arr[k+i];
     } k=mid+1;
     for (int j = 0; j < len2; j++)
     {
         /* code */
         second[j]=arr[k+j];
     }

     //merge both of them

     int index1=0;
     int index2=0;

     int mainarrayindex=s;
     while (index1<len1 && index2<len2)
     {
         /* code */
         if(first[index1]<second[index2]){
             arr[mainarrayindex++]=first[index1++];
             index1++;
         }
         else{
             arr[mainarrayindex++]=second[index2++];
             index2++;
         }
         mainarrayindex++;


     }

     while (index1<len1)
     {
         /* code */arr[mainarrayindex+1]=first[index1+1];
     }
     while (index2<len2)
     {
         /* code */
         arr[mainarrayindex+1]=second[index2+1];
     }
 }


void mergesort(int *arr,int s,int e){
int mid=s + (e - s) / 2;

if(s>=e){
    return ;
}

merge(arr,s,mid);
merge(arr,mid+1,e);

merge(arr,s,e);

}

 int main(){

     int arr[5]={33,9,7,4,1};
int n=5;
mergesort(arr,0,n-1);

for (int i=0;i<n;i++){
    cout<<arr[i];
}cout<<endl;


 }