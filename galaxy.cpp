#include "galaxy.hpp"
#include <boost/graph/adjacency_list.hpp>
using namespace std;

galaxy::galaxy()
{
}

galaxy::~galaxy()
{
}
// void galaxy::aj_L();
// {

// }

void galaxy::addEdge(string s1, string s2, int distance)
{
    edge *temp = new edge;
    temp->distance = distance;
    System *a = findSystem(s1);
    System *b = findSystem(s2);
    temp->s = b;
    a->Edges.push_back(*temp);
}

void galaxy::addSystem(string name)
{
    System *temp = new System;
    temp->name = name;
    temp->visited = false;
    systems.push_back(*temp);
}

void galaxy::DFTraversal(System *s)
{
    for (int i = 0; i < s->Edges.size(); i++)
    {
        if (!s->Edges[i].s->visited)
        {
            cout << s->Edges[i].s->name << endl;
            s->Edges[i].s->visited = true;
            DFTraversal(s->Edges[i].s);
        }
    }
}

void galaxy::printDFS()
{
    for (int i = 0; i < systems.size(); i++)
    {
        if (!systems[i].visited)
        {
            cout << systems[i].name << endl;
            systems[i].visited = true;
            DFTraversal(&systems[i]);
        }
    }
}

System *galaxy::findSystem(string name)
{
    for (int i = 0; i < systems.size(); i++)
    {
        if (systems[i].name == name)
        {
            System *temp = &systems[i];
            return temp;
        }
    }
    return nullptr;
}

void galaxy::displayEdges()
{
    for (auto sys : systems)
    {
        cout << sys.name << "-->";
        for (int i = 0; i < sys.Edges.size(); i++)
        {
            cout << sys.Edges[i].s->name;
            cout << " (" << sys.Edges[i].distance << " light years)";
            if (i != sys.Edges.size() - 1)
                cout << "***";
        }
        cout << endl;
    }
}