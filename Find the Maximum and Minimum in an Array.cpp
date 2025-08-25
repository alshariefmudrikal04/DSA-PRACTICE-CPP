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

int high,low;
high = arr[0];
low = arr[0];


for(int i = 0;i < num;i++){
    if(arr[i] < low){
         low = arr[i];
    }
}
 cout<<"low "<<low<<endl;

for(int i = 0;i < num;i++){
    if(arr[i] > high){
         high = arr[i];
    }
}
 cout<<"high "<<high;




    return 0;
}
