#include<iostream>

using namespace std;

int main() {

cout<<"Enter the number of stars you want in the base of your right triangle. ";

int a;

cin>>a;

for (int i = 0; i<a; i++) {

for (int j = 0; j<=i; j++) {

cout<<"*";

}

cout<<endl;
}
}


