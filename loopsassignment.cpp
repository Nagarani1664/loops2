//1. print odd numbers from 1-100
#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=100;i++){
if(i%2==0)continue;
 else cout<<i<<endl;
}
}
//2.print 1-100 which are divisible by 3
#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=100;i++){
if(i%3==0) cout<<i<<endl;
else continue;
}
}
//3.print table n 
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number: ";
cin>>n;
for(int i=1;i<=n;i++){
cout<<i <<"x"<<n <<i*n<<endl;
}
}
//4. display ap -4,7,10,13,16 ..upto 'n'terms
#include<iostream>
using namespace std;
int main(){
int a=4;
int n;
cout<<"Enter number: \n";
cin>>n;
for(int i=1;i<=n;i++){
a+=4; 
cout<<a<<endl;
}
}
//5.display this gp-3,12,48,....upto 'n' terms
#include<iostream>
using namespace std;
int main(){
int a=3;
int n;
cout<<"Enter n: ";
cin>>n;
for(int i=1;i<=n;i++){
a*=4;
cout<<a<<endl;
}
}
//6.Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.
#include<iostream>
using namespace std;
int main(){
for(int i=65;i<=90;i++){
cout<<i<<"="<<(char)i<<endl;
}
for(int i=97;i<=122;i++){
cout<<i<<"="<<(char)i<<endl;
}
}
