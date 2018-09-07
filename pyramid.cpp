#include<iostream>

using namespace std;

int main() {

cout<<"Enter the number of lines you want in your pyramid. ";

int a;

cin>>a;



for (int i = 0; i<a; i++) {

for (int j = 0; j<(a-i); j++) {

cout<<" ";//printing spaces
}

for (int k = 0; k<=2*i; k++){

cout<<"*";//printing stars
}


cout<<endl;
}

}


