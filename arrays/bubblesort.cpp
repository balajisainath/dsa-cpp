#include<iostream>
using namespace std;

void bubblesort(int arrbs[],int n){

    for (int step = 0; step < n; ++step)
    {
        /* code */
        for (int i = 0; i < n-step; ++i)
        {
            /* code */
            if (arrbs[i]>arrbs[i+1])
            {
                /* code */
                int temp=arrbs[i];
                arrbs[i]=arrbs[i+1];
                arrbs[i+1]=temp;
            }
            
        }
        
    }
 
    
}

void printarray(int arrbs[],int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arrbs[i]<<"\n";
    }
}

int main(){
int arrbs[]={8,9,1,5,2,7,3,0};
int n=sizeof(arrbs)/sizeof(arrbs[0]);

bubblesort(arrbs,n);
cout<<"array in sorting order";
printarray(arrbs,n);



}