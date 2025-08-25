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

int even=0,odd=0;
for(int i = 0;i < num;i++){
   if(arr[i] % 2 ==0){
    even++;
   }else{
   odd++;
   }
}
 cout<<"Even = "<<even<<endl;
   cout<<"Odd  = "<<odd;


    return 0;
}
