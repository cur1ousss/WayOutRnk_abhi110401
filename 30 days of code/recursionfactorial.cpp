#include<iostream>
using namespace std;

unsigned int fact(unsigned int num){
    cout<<"\n befire ans declariotn ";
int ans=1;
/*  here above declaration of int ans did not fuck up below ans 
    although traverse through this statem,ent

*/
cout<<"\n call before recursion to check if traverse thirugjh if starttemt";
if(num>0){
    //cout<<"\n ans at each step "<<ans;
    ans=num*fact(num-1);
}
return ans;

}


int main(){

unsigned int num;
cin>>num;
cout<<"\n\n";
cout<<"\n priting final answer "<<fact(num);

cout<<"\n\n";

    return 0;
}
/* // ANOTHER WAY TO DO THE SAME 
int fac(int num){
   // cout<<"\nfirst time num"<<num;
    if(num==0){
        return 1;
    }
	if(num>0){
		return num*fac(num-1);
 
	}
}
int main() {
	int num;
	cin>>num;
	cout<<"\n final answer is "<<fac(num);
	return 0;
}
*/