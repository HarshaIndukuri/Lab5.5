#include<iostream>

using namespace std;

int main() {

cout<<"Enter the number of stars you want in the base of your inverted mirrored right triangle. ";

int a;

cin>>a;

for (int i = 0; i<a; i++){

for (int j = 0; j<=i; j++){

cout<<" ";//printing spaces
}

for (int k = 0; k<(a-i) ; k++){

cout<<"*";//printing stars of triangle
}


cout<<endl;
}

}



