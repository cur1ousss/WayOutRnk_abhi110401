#include<iostream>
using namespace std;

//LOOk later below [problem ] // for now psudo send
// unable to complete due to not know vector an d
// and how to return array from ficntino??????w

int main(){

int alicerating[3];
for(int i=0;i<3;i++){
    cin>>alicerating[i];
}
int bobrating[3];
for(int i=0;i<3;i++){
    cin>>bobrating[i];
}
int totalAlice=0;
int totalBob=0;
for(int i=0;i<3;i++){
    if(alicerating[i]>bobrating[i]){
        totalAlice++;
    }
    else if(bobrating[i]>alicerating[i])
        totalBob++;
    else if(alicerating[i]==bobrating[i]){
        continue;
    }

}
cout<<totalAlice<<endl;
cout<<totalBob;
    return 0;
}