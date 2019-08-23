#include<iostream>
using namespace std;
int main(){


/*
    index ke sath khel hain mid ka
    aur value find karne ke liye looping till mid and shit using actual values
*/








int arr[5]={1,2,3,4,5};

int numtoSearch;
cin>>numtoSearch;
int start=0;
int end=5-1;
int mid=0;
int count=1;

cout<<"\n numver to search is "<<numtoSearch;
int found=0;
int flag=0;


// psudo binary search in the sense that does not recursively split into mid 
///     until minimum limit reached 

while(count!=0){


//cout<<"\n entered while loop";
mid=(start+end)/2;
if(numtoSearch>=arr[mid]){
  //  cout<<"\n enetered >mid";
    start=mid;
    for(int i=start;i<=end;i++){
        if(numtoSearch==arr[i])
        {
            cout<<"\n founf at index "<<i;
           count--;
           found++; 
        }
    }
    if(found>0){
       break;// continue;
    }

    else{
        flag=1;
        break;}
    
}
else if(numtoSearch<arr[mid]){
    end=mid;
cout<<"\n entered <mid";
    for(int i=start;i<=end;i++){
        if(numtoSearch==arr[i])
        {
            cout<<"\n founf at index "<<i;
            count--;
            found++;
        }
    }
    if(found>0){
       
        break;//continue;
    }

    else{
         flag=1;
        break;}
} 

}
if(flag==1){

    cout<<"\n\n not found number ";
}

cout<<"\n\n";
    return 0;
}