#include<iostream>
using namespace std;
int main(){

int year;
cin>>year;


int julianYearNonLeap[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int julianYearLeap[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

int Year1918[13]={0,31,15,31,30,31,30,31,31,30,31,30,31};

int GeogYearNonLeap[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int GeogYearLeap[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

if(year>=1700 && year<=1917){
cout<<"\n entered <1917";
//leap year
if(year%4==0){
    cout<<"\n entered leap loop ";
 int sum=0;
int check=256;
int i=1;
int index=0;
int day;
int month;
while(check-sum<=31){

sum=sum+julianYearLeap[i];
index=i;
i++;
}
if(check-sum<=31){
day=check-sum;
month=index;
cout<<"\n date is "<<day;
cout<<"\n month is "<<month;
}

}

else{

}


}
else if(year>=1919 && year<=2700){

//leap year
if((year%400==0) || (year%4==0 && year%100!=0)){

}

else{
    
}

}
else if(year==1918){

}




    return 0;
}