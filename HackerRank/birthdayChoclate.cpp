#include<iostream>
using namespace std;
int main(){

int size;
cin>>size;
unsigned int square[size];
for(int i=0;i<size;i++){
    cin>>square[i];
}
int day;
cin>>day;
int month;
cin>>month;
cout<<"\n\n";
for(int i=0;i<size;i++){
    cout<<" "<<square[i];
}
cout<<"\n";
int sum=0;
int countres=0;
int start=0;
cout<<"\n\n";
for(int i=0;i<size;i++){

// again facing the same problem in handling the last index
// going out of index at last index since forming pair 4,5 which fail at 5
//          hence garbage value

if(start<size){

    for(int j=start;j<start+month;j++){
     
        cout<<"\n\n start is "<<start;
        cout<<"\n summing loop emntered ";
        if(j>=size){
            break;
        }
         sum=sum+square[j];
   
    }
        cout<<"\n sum is "<<sum;
    
    if(sum==day){
        countres++;
     //   sum=0;
    }
    
//cout<<"\n\n start incremnedted "<<start;
   
}
sum=0; 
start++;
}


cout<<countres;



    return 0;
}