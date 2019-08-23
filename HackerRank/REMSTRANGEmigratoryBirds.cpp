#include<iostream>
using namespace std;
int main(){

unsigned long int len;
cin>>len;

int arr[len];
for(unsigned long int i=0;i<len;i++){
cin>>arr[i];
}
/*
int swap=0;
for(unsigned long int i=0;i<len;i++){
    for(unsigned long int j=0;j<len-1;j++){
        if(arr[i]>arr[i+1]){
            swap=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=swap;
        }
    }
}
*/
int count[5];
for(int i=0;i<5;i++){
    count[i]=0;
}
for(unsigned long int i=0;i<len;i++){
    if(arr[i]==1){
       count[0]++;
       }
    else if(arr[i]==2){
        count[1]++;
    }
    else if(arr[i]==3){
        count[2]++;
    }    

    else if(arr[i]==4){
        count[3]++;
    }    

    else if(arr[i]==5){
        count[4]++;
    }    
}
  cout<<"\n count of 1 is "<<count[0];
       cout<<"\n count of 2 is "<<count[1];
       cout<<"\n count of 3 is "<<count[2];
       cout<<"\n count of 4 is "<<count[3];
       cout<<"\n count of 5 is "<<count[4];
     


cout<<"\n\n printing count array";
for(int i=0;i<5;i++){
    cout<<" "<<count[i];
}




// somehow favorung index no 4 maximnum if in count
//LLOOKL lATER and RESOLVVE
//now bypass using if loop and less limit

long int max=count[0],indexfound=0;
for(long int i=0;i<4;i++){
if(count[i]<count[i+1]){
    max=count[i+1];
    cout<<"\n previose cout is "<<count[i-1];
    cout<<"\n max coun till now is "<<max;
    indexfound=i+1;
    cout<<"\n index found is  "<<indexfound;
}
else{
    continue;
}
}
long int tmp=0;

cout<<"\n***************";
if(indexfound==3){
 for(long int i=0;i<2;i++){
if(count[i]<count[i+1]){
    max=count[i+1];
    cout<<"\n previose cout is "<<count[i-1];
    cout<<"\n max coun till now is "<<max;
    indexfound=i+1;
    cout<<"\n index found is  "<<indexfound;
}   
}
}
cout<<"\n\n";
cout<<++indexfound;

cout<<"\n\n";
    return 0;
}