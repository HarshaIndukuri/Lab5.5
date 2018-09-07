#include<iostream>

using namespace std;

int main() {

cout<<"Enter the number of lines you want in your hollow pyramid. ";

int a;

cin>>a;


for (int i = 0; i<a-1; i++){


for (int j = 0; j<a-(i+1); j++){

cout<<" ";//printing spaces before pyramid
}

cout<<"*";//first star of each line



for (int k = 0; k<=2*i-2; k++){

cout<<" ";//printing spaces inside pyramid
}

if (i != 0){
cout<<"*";//last star of each line
}
cout<<endl;
}
int x = 0;

while (x < 2*a-1){

x++;

cout<<"*";



}
cout<<endl;
}
