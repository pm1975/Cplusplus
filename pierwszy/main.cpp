#include <iostream>

using namespace std;

int uczniowie,cukierki,x,y;

int main()
{
    cout << "Hello world!" << endl;
    cout << "2019-02-21 18:46. macOS Majove. Wersja 10.14.3." << endl;

    cout << "Ilu uczniow jest w Twojej klasie:";
    cin >> uczniowie;

    cout << "Ilu cukierkow kupila mama:";
    cin >> cukierki;

    x = cukierki/(uczniowie-1);
    cout << "Cukierkow dla kazdego ucznia:" << x;

    y = cukierki-x*(uczniowie -1);
    cout << endl << "Dla Jasia na wieczor: " << y;

    return 0;
}
