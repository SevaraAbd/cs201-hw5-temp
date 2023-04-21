#include <iostream>
using namespace std;

class Node{
public:
    int value;
    Node *next;
    Node();
    Node(int x);
    Node(int x, Node *n);
};

class List{
private:
    Node* head;
public:
    List();
    
    Node* insert_front(int x);
    Node* insert_back(int x);
    
    Node* erase_front();
    Node* erase_back();
    
    void displayList();
 
    int size();
    void bubbleSort();
    void selectionSort;

    //ADDITIONAL POINTS
    void quickSort();
    void insertionSort();
};
int main(int argc, const char * argv[]) {
 List l;
 l.insert_back(2);
 l.insert_back(10);
 l.insert_back(1);
 l.insert_back(6);
 l.insert_back(7);
 l.insert_back(3);
 l.displayList();
 l.bubbleSort();
 l.displayList();
 
 List l1;
 l1.insert_back(34);
 l1.insert_back(1);
 l1.insert_back(90);
 l1.insert_back(61);
 l1.insert_back(57);
 l1.insert_back(9);
 l1.insert_back(7);
 l1.displayList();
 l1.selectionSort();
 l1.displayList();
    return 0;
}
