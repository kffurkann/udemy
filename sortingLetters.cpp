#include <iostream>
using namespace std;
int main() {
  char array_[40];//string
  int counter=0;

  cout<<"Enter a word = ";
  cin>>array_;
  cout<<endl;

  while(array_[counter]!='\0'){
    counter++;
  }
  cout<<counter<<endl;

//string
//counter=array_.length();
  
  int i=0,j=0;
  int temp;
  while(i<counter-1){
    j=i+1;
      while(j<counter){
          if(array_[i]>array_[j]){
              temp=array_[i];
              array_[i]=array_[j];
              array_[j]=temp;
          }
        j++;
      }
    i++;
  }
  cout<<array_;
}
