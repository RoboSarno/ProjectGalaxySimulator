#include "planet.hpp"
using namespace std;

void Planet::createPlanet()
{
    srand(time(NULL));
    string input = "";
    bool flag = false;
    int _bRate = 0;
    int _dRate = 0;
    int _population = 0;
    while (flag == false)
    {
        cout << "Would you like to name this planet? (Y or N)" << endl;
        cin >> input;
        if (input == "Y" || input == "y")
        {
            cout << "What would you like to name this planet?" << endl;
            string name;
            getline(cin, name);
            _name = name;
            flag = true;
        }
        else if (input == "N" || input == "n")
        {
            _name = createName();
            flag = true;
        }
        else
            cout << "Please choose either Y for yes or N for no." << endl;
        cin.ignore();
    }
    _population = rand() % (100000000000 - 50000000 + 1) + 50000000;
    cout << "Pop: " << _population << endl;
    _bRate = rand() % (71 - 13 + 1) + 13;
    _bRate = _bRate / 10.0;
    _dRate = rand() % (80 - 9 + 1) + 1;
    _dRate = _dRate / 10.0;
    cout << "bRate: " << _bRate << endl;
    cout << "dRate: " << _dRate << endl;
}

string Planet::createName()
{
    double ran1 = 0;
    ran1 = rand() % (10 - 1 + 1) + 1;
    double ran2 = 0;
    ran2 = rand() % (10 - 1 + 1) + 1;
    double ran3 = 0;
    ran3 = rand() % (10 - 1 + 1) + 1;
    return "Wooman";
}