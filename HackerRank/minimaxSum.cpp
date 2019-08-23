#include<iostream>
using namespace std;
// ???????? was failig on testcase when big nu,bers emntered 
/// refere images for  captured// temo siolytiu was to cobnvert all 
// to unsgined integers

void miniMaxSum(unsigned long int arr[]){
    unsigned long int swap;
 
for(int step=0;step<5;step++){
    for(int term=0;term<4;term++){

        if(arr[term]>arr[term+1]){
            swap=arr[term];
            arr[term]=arr[term+1];
            arr[term+1]=swap;
        }

    }

}
int minsum=0;
for(int i=0;i<4;i++){
    minsum+=arr[i];
}
//cout<<minsum;


int maxsum=0;
for(int i=1;i<5;i++){
    maxsum+=arr[i];
}

    cout<<minsum<<" "<<maxsum;

}

int main(){


unsigned long int arr[5];

for(int i=0;i<5;i++){
cin>>arr[i];

}//care abiyt the edge cases dont go over the edge

//cout<<" "<<maxsum;
miniMaxSum(arr);
    return 0;
}
