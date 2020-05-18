#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    string tab[100];
    string a;
    ifstream file;
    int licznik=0;

    file.open("d.txt", ios::in);
    
    if(plik.good())
        while(!file.eof())
    {
        getline(plik, a);
        file>>tab[licznik];
        licznik++;
	}

    file.close();
    
    for(int i=0; i<licznik; i++)
    {
        cout<<tab[i]<<endl;
    }

    return 0;
}
