#include<iostream>
using namespace std;
int main(){

int dist1;
cin>>dist1;
int vel1;
cin>>vel1;

int dist2;
cin>>dist2;
int vel2;
cin>>vel2;

//float check=dist2/(abs(vel1-vel2));
//float tmp=(check*10)%10;
//cout<<"\n printing chjecl "<<check;
//int tmp1=check*10;
//cout<<"\npriting tmp1 "<<tmp1;
//float tmp2=tmp1%10;
//cout<<"\n priting tmp2 "<<tmp2;
if((dist2>=dist1 && vel2>vel1)|| (dist2<=dist1 && vel2<vel1)){
    cout<<"NO";
}
else if( vel2!=vel1 && ((dist1-dist2))%((vel2-vel1))==0){
    cout<<"YES";
}
else{
    cout<<"NO";
}

    return 0;
}