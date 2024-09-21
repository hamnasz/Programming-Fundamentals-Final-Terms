#include<iostream>
using namespace std;
int main(){
 float profit,costprice,sellprice;
 cout<<"Enter costprice: ";
 cin>>costprice;
 cout<<"Enter sellprice: ";
 cin>>sellprice;
 if(costprice<sellprice){
 cout<<"Seller made profit"<<endl;
 profit= sellprice-costprice;
 cout<<"seller made "<<profit<<"rs";}
 else{cout<<"Seller did not make profit"<<endl;
 profit= costprice-sellprice;
 cout<<"seller lost "<<profit<<" rs";}}