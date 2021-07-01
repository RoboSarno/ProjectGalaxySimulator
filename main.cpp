#include "time.hpp"
#include "galaxy.hpp"
#include "planet.hpp"
#include <iostream>
using namespace std;

void learnGalaxyMenu()
{
    bool quit = false;
    string s_input;
    int input;
    // loop until the user quits
    while (!quit)
    {
        cout << "What galaxy would you like to learn about?" << endl;
        cout << "1. G-1" << endl;
        cout << "2. G-2" << endl;
        cout << "3. G-3" << endl;
        cout << "4. Go-Back" << endl;
        getline(cin, s_input);
        input = stoi(s_input);
        switch (input)
        {
        case 1:
            cout << "" << endl; //yada yada
            break;

        case 2:
            cout << "" << endl; //yada yada
            break;

        case 3:
            cout << "" << endl; //yada yada
            break;

        case 4: //Quit
            quit = true;
            cout << "4. Going Back" << endl;
            break;

        default: // invalid input
            cout << "Invalid Input" << endl;
            cout << "^^^^^^^^^^^^^^" << endl;
            cout << endl;
            break;
        }
    }
}

void traveldisplayMenu()
{
    bool quit = false;
    string s_input;
    int input;
    // loop until the user quits
    while (!quit)
    {
        cout << "Select a Galaxy that you would like to travel to:" << endl;
        cout << "1. G-1" << endl;
        cout << "2. G-2" << endl;
        cout << "3. G-3" << endl;
        cout << "4. Go-back" << endl;
        getline(cin, s_input);
        input = stoi(s_input);
        switch (input)
        {
        case 1:
            cout << "" << endl; //yada yada travel
            break;

        case 2:
            cout << "" << endl; //yada yada travel
            break;

        case 3:
            cout << "" << endl; //yada yada travel
            break;

        case 4: //Quit
            quit = true;
            cout << "4. Going Back" << endl;
            break;

        default: // invalid input
            cout << "Invalid Input" << endl;
            cout << "^^^^^^^^^^^^^^" << endl;
            cout << endl;
            break;
        }
    }
}
int main()
{
    galaxy g;
    Time t;
    Planet p;

    bool quit = false;
    string s_input;
    int input;
    g.addSystem("G-1");
    g.addSystem("G-2");
    g.addSystem("G-3");
    g.addEdge("G-1", "G-2", 822);
    g.addEdge("G-2", "G-3", 1083);
    g.addEdge("G-3", "G-1", 260);

    cout << "Welcome to Basic Universe Simulator!!" << endl;
    cout << "<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>" << endl;
    cout << endl;
    cout << "We have already made a basic universe for you.  If you would like you are able to mess with the functionality of this universe." << endl;
    cout << "_______________________________________________" << endl;
    cout << endl
         << endl;
    cout << "Here is the preset universes that we have made for you it contains these galaxies ->" << endl;
    g.printDFS();
    //insert a visual able to gui / menu
    // loop until the user quits
    while (!quit)
    {
        cout << endl;
        cout << "=========MAIN MENU=========" << endl;
        cout << "What would you like to do?" << endl;
        cout << "1. See the list of Galaxies." << endl;
        cout << "2. Learn about a Galaxy." << endl;
        cout << "3. Travel to a Galaxy." << endl;
        cout << "4. Quit." << endl;
        getline(cin, s_input);
        input = stoi(s_input);
        switch (input)
        {
        case 1:
            g.addSystem("G-1");
            g.addSystem("G-2");
            g.addSystem("G-3");
            g.addEdge("G-1", "G-2", 822);
            g.addEdge("G-2", "G-3", 1083);
            g.addEdge("G-3", "G-1", 260); //see list of Galaxies
            g.printDFS();
            cout << endl;
            break;

        case 2: //Learn about a galaxy
            cout << endl;
            learnGalaxyMenu();
            cout << endl;
            break;

        case 3: //Travel to Galaxy
            traveldisplayMenu();
            break;

        case 4: //Quit
            quit = true;
            cout << "Quitting... cleaning up path: " << endl;
            break;

        default: // invalid input
            cout << "Invalid Input" << endl;
            break;
        }
    }
    //g.printDFS();
    cout << " " << endl;

    //g.displayEdges();
    return 0;
}