#include <iostream>
#include <chrono>
#include <thread>
#include <string>
using namespace std;
string colors[7]={
"\033[30m"    , 
 "\033[31m"     , 
"\033[32m"      ,
 "\033[33m"   , 
"\033[34m"      ,
 "\033[35m"      ,
"\033[36m" };


void line (int space , int chars , char x)
{for(int n=1; n<=space ; n++){cout << " ";}
for(int n=1; n<=chars ; n++){cout << x;}
}

void drawtrang(int rows, int offsit , int t , char x){
	if (t==1){
		int n;
		if(offsit !=0) n=offsit; else n=0;
	for(n ; n<rows ; n++){
line(rows-n,n,x); line(0,n,x); cout <<endl;}
	}else{   for(int n=rows; n>0 ; n--){
		if (n==offsit) break;
line(rows-n,n,x); line(0,n,x); cout << endl; } }
}

void drawlamp (int rows , char x){
	
	drawtrang(rows,0,1,x);
		string s1 = " Ramdan ";
	string s2 = " Kreem ";
	string s3 = " by osama ";
	for(int n =1;n<=3;n++){
		string h ;
		switch (n){
		case 1: h=s1; break; case 2 : h=s2; break; case 3 : h=s3; break;}
		int v = (rows - (h.length() /2));
		line (0,v,x) ; cout << h ; line(0,v,x);
		cout << endl;
	}
	drawtrang(rows, rows/4,-1,x);
	drawtrang (rows,rows/4,1,x);
	
	}

int main(){

	string m =" +-";
	int j =0;

	
	for(int n = 1 ; n<7; n++ ){
	
		
		cout << colors[n];
	drawlamp(16,m[j]);
if(j==2) j=0; if (n==6) n =0;
j++;	this_thread::sleep_for(chrono::milliseconds(300)); 
	system("cls"); 
	
	}
	return 0;
}
