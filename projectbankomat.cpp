#include <iostream>
#include <string>
using namespace std;

int i = 20000;
int t = 800;
int s = 500;

int main() {
START:
    int a;
int v;

string pin = "";
string name1 = "";
string name2 = "";

cout << "vita vas vase banka\n";
cout << "aby jste mohli pokracovat budete se muset prihlasit";
cout << "napis jmeno\n";
cin >> name1;
if(name1 == "Honza") {
    cout<< "napis pin \n";
    cin>> pin;
    if (pin == "1d3n7s") {
            cout << "vzberte jednu z moznosti\n";
            cout << "1 zobrazit zustatek\n";
            cout << "2 vybrat\n";
            cout << "3 poslat\n";
            cin >> a;

    switch (a) {
    case 1:
        cout<< "zustatek na uctu je "  <<i << "kc";
        break;
    case 2:

        cout<< "kolik chcete vybrat:";
        cin>> v;
        i = i - v;
        if (i < 0){
            cout << "nemate dostatek penez na ucte";
        }else {
        cout << "zustatek na uctu je " <<i;
        }break;

        break;
   case 3:
        int e;
        cout << "kolik chcete poslat\n?";
        cin >> e;
        cout << "komu chcete poslat penize\n";
        cin >> name2;

      if (name2== "Pepa") {
         i = i - e;
         t = t + e;
        cout << "penize uspesne odeslany\n";
        cout << "zustatek na vasem uctu je" << i <<"kc\n";
        cout << "zustatek na uctu prijemce je" << t << "kc\n";
        }else if (t < 0){
            cout << "nemate dostatek penez na uctu";
            }
            else if (name2 == "Jindra") {
        i = i-e;
        s = s+e;
         cout << "penize uspesne odeslany";
        cout << "zustatek na vasem uctu je" << i <<"kc\n";
        cout << "zustatek na uctu prijemce je" << s << "kc\n";

        }else if (i < 0){
            cout << "nemate dostatek penez na uctu";
            }
        break;
    }
    } else {
    cout << "nespravne jmeno nebo heslo";
    }
} goto START;
if(name1 == "Pepa") {
    cout<< "napis pin \n";
    cin>> pin;
    if (pin == "1234") {
            cout << "vzberte jednu z moznosti\n";
            cout << "1 zobrazit zustatek\n";
            cout << "2 vybrat\n";
            cout << "3 poslat\n";
            cin >> a;


    switch (a) {
    case 1:
        cout<< "zustatek na uctu je "  <<t << "kc";
        break;
    case 2:

        cout<< "kolik chcete vybrat:";
        cin>> v;
        t = t - v;
         if (t < 0){
            cout << "nemate dostatek penez na ucte";
        } else{
        cout << "zustatek na uctu je " <<t;
        }
        break;
   case 3:
        int e;
        cout << "kolik chcete poslat\n?";
        cin >> e;
        cout << "komu chcete poslat penize\n";
        cin >> name2;
      if (name2 == "Honza") {
         s = s - e;
         i = i + e;
        cout << "penize uspesne odeslany\n";
        cout << "zustatek na vasem uctu je" << t <<"kc\n";
        cout << "zustatek na uctu prijemce je" << i << "kc\n";
        }else if (t < 0){
            cout << "nemate dostatek penez na uctu";
            }else if (name2 == "Jindra") {
        t = t - e;
        s = s + e;
         cout << "penize uspesne odeslany\n";
        cout << "zustatek na vasem uctu je" << t <<"kc\n";
        cout << "zustatek na uctu prijemce je" << s << "kc\n";

        }else if (t < 0){
            cout << "nemate dostatek penez na uctu";
            }
        break;
    }
    } else {
    cout << "nespravne jmeno nebo heslo";
    }
} goto START;
if(name1 == "Jindra") {
    cout<< "napis pin \n";
    cin>> pin;
    if (pin == "malipp") {
            cout << "vzberte jednu z moznosti\n";
            cout << "1 zobrazit zustatek\n";
            cout << "2 vybrat\n";
            cout << "3 poslat\n";
            cin >> a;

    switch (a) {
    case 1:
        cout<< "zustatek na uctu je "  <<s << "kc";
        break;
    case 2:

        cout<< "kolik chcete vybrat:";
        cin>> v;
        s = s - v;
         if (s < 0){
            cout << "nemate dostatek penez na ucte";
        } else{
        cout << "zustatek na uctu je " <<s;
       }
        break;
    case 3:
        int e;
        cout << "kolik chcete poslat\n?";
        cin >> e;
        cout << "komu chcete poslat penize\n";
        cin >> name2;
      if (name2== "Honza") {
         s = s - e;
         i = i + e;
        cout << "penize uspesne odeslany\n";
        cout << "zustatek na vasem uctu je" << s <<"kc\n";
        cout << "zustatek na uctu prijemce je" << i << "kc\n";
        }else if (s < 0){
            cout << "nemate dostatek penez na uctu";
            } else if (name2 == "Pepa") {
        s = s-e;
        t = t+e;
        cout << "penize uspesne odeslany\n";
        cout << "zustatek na vasem uctu je " << s <<"kc\n";
        cout << "zustatek na uctu prijemce je " << t << "kc\n";

          } else if (s < 0){
            cout << "nemate dostatek penez na uctu";
            }


        break;

    }
    }  else {
    cout << "nespravne jmeno nebo heslo";
    }
}goto START;
}
