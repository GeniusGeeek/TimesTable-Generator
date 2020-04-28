/* A program to give you the timestable of the number inputed till infinity*/


#include <iostream>

using namespace std;
int main(){
int i=1;
int timestable;
int tablelimit;
int result;
cout<<"chose a timestable"<<endl;
cin>>timestable;
cout<<"chose the table limit"<<endl;
cin>>tablelimit;
while(i<=tablelimit){
i=++i;
result=i*timestable;
cout<<timestable<<"x"<<i<<"="<<result<<endl;
}
    return 0;
}
