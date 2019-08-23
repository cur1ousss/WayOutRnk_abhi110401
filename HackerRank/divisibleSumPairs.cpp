#include<iostream>
using namespace std;
int main(){

int size;
cin>>size;
int term;
cin>>term;

int num[size];
for(int i=0;i<size;i++){
    cin>>num[i];
}

cout<<"\n\n priting array ";
for(int i=0;i<size;i++){
cout<<" "<<num[i];
}
int sum=0;
int totalcount=0;
for(int i=0;i<size;i++){

    for(int j=1;j<size;j++){
        if(j>i){
        sum=num[i]+num[j];
        cout<<"\n i is "<<i<<" j is "<<j;
        }
        if(sum%term==0 && sum!=0){
           cout<<"\n divisivle at sum when "<<sum;
           totalcount++; 
        }
        sum=0;
    }
    sum=0;
}

cout<<"\n\n "<<totalcount;


    return 0;
}