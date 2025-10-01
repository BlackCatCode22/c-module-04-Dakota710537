#include <iostream>
#include "JSON.hpp"
#include <unordered_map>

using json = nlohmann::json;
using namespace std;

int main() {
    cout << "Welcome to JSON! \n" << endl;

    json myStuList = {
        {"Dakota", 1234},
        { "Fortnite", 5432},
        { "Bean", 4444}
    };

    cout << "\n Dakota: This is my number " << myStuList["Dakota"] << endl;
    cout << "\n Bean: This is my number " << myStuList["Bean"] << endl;
    cout << "\n Fortnite: This is my number " << myStuList["Fortnite"] << endl;


    unordered_map<string, int> myStudentTestScores;

    myStudentTestScores["Dakota"] = 100;
    myStudentTestScores["Fortnite"] = 99;
    myStudentTestScores["Bean"] = 1;

    cout << "\n Dakota's score is: " << myStudentTestScores["Dakota"] << endl;
    cout << "\n Fortnite's score is: "<< myStudentTestScores["Fortnite"] << endl;
    cout << "\n Bean's score is: " << myStudentTestScores["Bean"] << endl;


for (auto &pair : myStudentTestScores) {
    cout <<"\n" << pair.first << ": " << pair.second << endl;
}

    map<string, int> myOrderedStudentTestScores;
    myOrderedStudentTestScores["Dakota"] = 100;
    myOrderedStudentTestScores["Fortnite"] = 99;
    myOrderedStudentTestScores["Bean"] = 1;

    int myPairInt = 1;
for (auto &pair : myOrderedStudentTestScores) {
    cout <<"\n Pair number "<< myPairInt << "is: "<<pair.first << ": " << pair.second << endl;
    myPairInt++;
}

    return 0;
}