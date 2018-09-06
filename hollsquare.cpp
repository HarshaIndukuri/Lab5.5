#include<iostream>

using namespace std;


int main() {

int a;

cout<<"Enter the number of stars you want in each row of your hollow square. ";

cin>>a;

int i = 0;

while (i<a){

i++;

cout<<"*";//printing first line
}

cout<<endl;

for (int b = 0; b<(a-2); b++){

cout<<"*";//printing first star in the next lines

for (int c=0; c<(a-2); c++){

cout<<" ";//printing spaces
}

cout<<"*"<<endl;//printing last star in the next lines

}

for (int d = 0; d<a; d++) {

cout<<"*";//printing last line
}
cout<<endl;


}
