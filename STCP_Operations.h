//
// Created by Rui on 22/01/2022.
//

#ifndef STCP_NAVEGATION_STCP_OPERATIONS_H
#define STCP_NAVEGATION_STCP_OPERATIONS_H

#include <fstream>
#include <sstream>
#include <map>
#include <cmath>
#include "graph.h"
using namespace std;

class STCP_Operations {
private:
    long double dist_stops(int previous_node,int current_node);
    map<string,int> code_to_node;
    Graph stcp = Graph(0);
    void read_stops();
    void read_lines();
public:
    STCP_Operations();
};


#endif //STCP_NAVEGATION_STCP_OPERATIONS_H