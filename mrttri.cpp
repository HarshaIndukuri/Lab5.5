#include<iostream>

using namespace std;

int main() {

cout<<"Enter the number of stars you want in the base of your triangle. ";

int a;

cin>>a;

for (int i = 0; i<a; i++) {

for (int j = 0; j<(a-i); j++) {

cout<<" ";//printing spaces in each line
}
for (int k = 0; k<=i; k++){
cout<<"*";//printing stars in each line

}
cout<<endl;
}
}


