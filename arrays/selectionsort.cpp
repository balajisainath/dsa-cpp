
// slelction sort...algotithm

#include<iostream>
using namespace std;





int main()
{
    int n;
    int arrss[n];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arrss[i];
    }

    for (int i=0;i<n-1;i++){
    for (int   j = i+1; j<n ; j++){

        if (arrss[j]<arrss[i])
        {
            /* code */
            int temp=arrss[j];
            arrss[j]=arrss[i];
            arrss[i]=temp;
        }
    }   
}
 for (int i=0;i<n;i++){
        cout<<arrss[i];
    }
  
    
}