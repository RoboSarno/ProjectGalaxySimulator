#ifndef GALAXY_HPP
#define GALAXY_HPP

#include <iostream>
#include <vector>
using namespace std;

struct System;

struct edge
{
    System *s;
    int distance;
};

struct System
{
    string name;
    bool visited;
    vector<edge> Edges;
};

class galaxy
{
  public:
    galaxy();
    ~galaxy();
    void addEdge(string s1, string s2, int distance);
    void addSystem(string name);
    void printDFS();
    void displayEdges();
    void aj_L();

  private:
    vector<System> systems;
    System *findSystem(string name);
    void DFTraversal(System *s);
};

#endif