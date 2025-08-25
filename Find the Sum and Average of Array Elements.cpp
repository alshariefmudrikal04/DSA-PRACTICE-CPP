#include <iostream>

using namespace std;

int main()
{


int num;

cout<<"Enter How many number: ";
cin>>num;

int arr[num];

for(int i = 0;i < num;i++){
    cout<<"Enter number "<<i+1<<" :";
    cin>>arr[i];
}
int total = 0;
for(int i = 0;i < num;i++){
total += arr[i];
arr[i] = total;
}
   cout <<"total: "<<total<<endl;

  int average = total/num;
  cout<<"Average: " <<average;







    return 0;
}
