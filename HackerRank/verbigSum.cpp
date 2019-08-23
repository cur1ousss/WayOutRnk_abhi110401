#include<iostream>
using namespace std;


//currently tackling problem of return array by directly pritning
// that is in th eformat that the artifical checkr wants
//

void aVeryBigSum(int size,long long int arr[]){
long long int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
            }

cout<<sum;
}

int main(){

int size;
cin>>size;
long long int arr[size];

for(int i=0;i<size;i++){
    cin>>arr[i];
}

aVeryBigSum(size,arr);

    return 0;
}