#include <iostream>
#include <queue>
using namespace std;

// priority queue gives priority at top //largestInteger , largestString , largestChar

// In a max heap, every parent node is greater than or equal to its children.
// In a min heap, every parent node is less than or equal to its children.

//instead priority queue  tree data structure is maintain.

//heap is tree base data structure and it is complete binary tree.


void explainPQ() {


    // Max Heap (default)
    priority_queue<int> pq;


    pq.push(5);      // {5}
    pq.push(2);      // {5,2}
    pq.push(8);      // {8,5,2}
    pq.emplace(10);  // {10,8,5,2}



    cout << pq.top() << " "; // prints 10




    // Min Heap    // datatype, vector ,greater etc.
    priority_queue<int, vector<int>, greater<int>> minPQ; //min element at the top.

    minPQ.push(5);      // {5}
    minPQ.push(2);      // {2,5}
    minPQ.push(8);      // {2,5,8}
    minPQ.emplace(10);  // {2,5,8,10}

    cout << minPQ.top(); // prints 2
}

//Time Complexity : Push = logn  , Pop = Log n , top = O(1);


int main() {
    explainPQ();
    return 0;
}

