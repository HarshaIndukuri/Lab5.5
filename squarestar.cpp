#include<iostream>

using namespace std;

int main() {

int a;

cout<<"Enter the number of stars you want in each row of your square. ";

cin>>a;

for (int j = 0; j<a; j++){

for (int i = 0; i<a; i++) {

cout<<"*";//printing rows of square
}
cout<<endl;
}

}
