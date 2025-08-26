#include <iostream>

using namespace std;

int main()
{

int num;
cout<<"Enter number: ";
cin >>num;

int arr[num];

  for(int i = 0;i <num;i++){
        cout<<"enter number: ";
  cin >>arr[i];
  }

  int first =INT_MIN,second=INT_MIN,third = INT_MIN;
   for(int i = 0;i <num;i++){
    if(arr[i] > first){
        third = second;
        second = first;
        first = arr[i];
    }else if(arr[i] < first && arr[i] > second){
        third = second;
        second = arr[i];
    }
    else if(arr[i] > third && arr[i] < second){
        third = arr[i];
    }
   }
   cout<<second<<endl;
   cout<<third<<endl;

    int lowfirst =INT_MAX,lowsecond=INT_MAX,lowthird = INT_MAX;
   for(int j = 0;j <num;j++){
    if(arr[j] < lowfirst){
        lowthird = lowsecond;
        lowsecond = lowfirst;
        lowfirst = arr[j];
    }else if(arr[j] > lowfirst && arr[j] < lowsecond){
        lowthird = lowsecond;
        lowsecond = arr[j];
    }
    else if(arr[j] > lowfirst && arr[j] < lowsecond){
        lowthird = arr[j];
    }
   }
   cout<<lowsecond;
   cout<<lowthird;











    return 0;
}
