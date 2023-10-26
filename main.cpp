#include <iostream>
#include "AttributedGraph2.h"
using namespace std;

int main() {
    //>>>>Q2<<<<//
    AttributedGraph2 Graph;
    int nodeId1, nodeId2, nodeId3, nodeId4;

    for(int i=0; i<4; i++)
    {
        cout <<"\nEnter a Node ID: ";
        if(i==0)
            cin >> nodeId1;
        if(i==1)
            cin >> nodeId2;
        if(i==2)
            cin >> nodeId3;
        if(i==3)
            cin >> nodeId4;
    }

    Graph.addNode(nodeId1);
    Graph.addNode(nodeId2);
    Graph.addNode(nodeId3);
    Graph.addNode(nodeId4);

    Graph.addEdge(nodeId1, nodeId2);
    Graph.addEdge(nodeId1, nodeId3);
    Graph.addEdge(nodeId2, nodeId4);


    Graph.appendAttributes(nodeId1);
    Graph.appendAttributes(nodeId2);
    Graph.appendAttributes(nodeId3);
    Graph.appendAttributes(nodeId4);




    cout<<"\n\n>>Printing Graph Data<<\n\n";
    Graph.printGraphData();

    return 0;
}
