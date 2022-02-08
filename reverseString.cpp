//#include<iostream>
//using namespace std;
//void reverseString(string s){
//	if(s.length()==0){
//		return;
//	}
////string ros=s.substr(1);
////	reverseString (ros);
////	cout<<s[0];
//if(s[0]=='p'&&s[1]=='i'){
//	cout<<"3.14";
//	reverseString(s.substr(2));
//}else{
//	cout<<s[0];
//	reverseString(s.substr(1));
//}
//}
//int main(){
//	reverseString("sanpiskar");
//	return 0;
//}
//Remove duplicate from string
//#include<iostream>
//using namespace std;
//void toweroFhanoi(int n,char src,char helper,char dest){
//	if(n==0){
//		return;
//	}
//	toweroFhanoi(n-1,src,dest,helper);
//	cout<<"move from"<<src<<"to"<<dest<<endl;
//	toweroFhanoi(n-1,helper,dest,src);
//}
//int main(){
//	toweroFhanoi(3,'A','B','C');
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
string remueDuplicate(string s){
	if(s.length()==0){
		return " ";
	}
	char ch=s[0];
string res=	remueDuplicate(s.substr(1));
if(ch==res[0]){
	return res;
}
return (ch+res);
}
int main(){
cout<<	remueDuplicate("ssadsfdsddsadsa")<<endl;
	return 0;
}
