// multi-dimensional array to represent a small game of Battleship:

#include<iostream>
using namespace std;

int main(){
     bool ships[4][4] = {
    { 0, 1, 1, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 1, 0 },
    { 0, 0, 1, 0 }
  };
  int hits=0;
  int numberofturns=0;
  


  while (hits<4)
  {
      /* code */
      int row=0;
      int col=0;
      cout<<"enter the row ";
      cin>>row;

      cout<<"enter the col";
      cin>>col;

      if (ships[row][col])
      {
          ships[row][col]=0;
          cout<<"!hitt"<<(4-hits)<<"\nremaining\n";
          hits++;
      }
      else{
          cout<<"\n miss bruh";
      }
      numberofturns++;
      
  }
  cout<<"\nvictory";
  cout<<"\n victory in "<<numberofturns<<"\nturns\n";
  return 0;
}