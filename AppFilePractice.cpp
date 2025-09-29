#include <iostream>
#include <fstream>
#include <string>
using namespace std;

    int main() {
        fstream myFile;
        myFile.open("DakotaF.txt", ios::out);//write
        if (myFile.is_open()) {
            myFile << "\n Hello\n";
            myFile << "This is second line\n";
            myFile.close();
        }



    //test if file was created
        if (myFile) {
            cout << "\n File DakotaF.txt successfully created in the cmake-build-debug\n";
        }


        myFile.open("DakotaF.txt", ios::app);//append
        if (myFile.is_open()) {
            myFile << "Hello2\n \n";
            myFile.close();
        }

myFile.open("DakotaF.txt", ios::in);//reading
if (myFile.is_open()) {
    string line;
    while (getline(myFile, line)) {
        cout << line << endl;
    }
    myFile.close();
}

fstream myFile2;
        myFile2.open("C:/Users/BE129/C++/datafiles/arrivingAnimals.txt", ios::in);
        if (myFile2.is_open()) {
            string line;
            while (getline(myFile2, line)) {
                cout << line << endl;
            }
        }
        myFile2.close();
// C:/Users/BE129/C++/datafiles/arrivingAnimals.txt


}