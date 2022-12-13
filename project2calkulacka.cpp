//prohození hodnot (se dvemi a tremi prom.)

#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
using namespace std;
int main() {
    START:
    int a;
    cout<< "1) number swaper \n2) number swaper pro\n3) number comparator\nv";
    cin>>a;
    switch (a){
case 1: {
int a;
int b;
cout<< "zadej prvni hodnotu x\n";
cin>>a;
cout<< "zadej druhou hodnotu y\n";
cin>>b;
cout<< "vase hodnoty jsou "<<a;
cout<< " a "<<b<<"\n";
Sleep (5000);
system ("cls");
cout<<"loading";
Sleep (1000);
system("cls");
cout<< "loading.";
Sleep (1000);
system("cls");
cout<< "loading..";
Sleep (1000);
system ("cls");
cout<< "loading...";
Sleep (1000);
system ("cls");
swap (a,b);
cout<< "prvni hodnota x je "<< a<< "\n";
cout << "druha hodnota y je "<< b<<"\n";
Sleep(3000);
system ("cls");
goto START;
} break;
case 2: {
    int a;
    int b;
    int c;
 cout<< "zadej prvni hodnotu x\n";
cin>>a;
cout<< "zadej druhou hodnotu y\n";
cin>>b;
cout<< "vase hodnoty jsou "<<a;
cout<< " a "<<b<<"\n";
Sleep (5000);
system ("cls");
c = a;
a = b;
b = c;
 cout<< "prvni hodnota x je "<< a<< "\n";
cout << "druha hodnota y je "<< b<<"\n";
Sleep(3000);
system ("cls");
goto START;
} break;
case 3:{

    int x;
    int y;
    int z;
cout<< "zadejte hodnoty x,y,z\n";
cout<< "x=";
cin>> x;
cout << "y=";
cin>> y;
cout<< "z=";
cin>> z;
if (x > y && x > z) {
    cout<< "nejvetsi je "<<x<<"\n";
}else if (y > x && y > z) {
 cout<< "nejvetsi je "<<y<<"\n";
}else {
 cout << "nejvetsi je "<<z<<"\n";
 Sleep (3000);
system("cls");
goto START;
} break;

}
}
}
