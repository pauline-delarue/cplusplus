#include <iostream>

class IntCell {

    friend class IntList;

private:
    IntCell () : PrevCell(nullptr), NextCell(nullptr), val(0) {
     }
    IntCell *PrevCell;
    IntCell *NextCell;
    int val;
};

class IntList {

public:
    IntList () : FirstCell(nullptr), LastCell(nullptr) {
     }

    ~IntList () {
        while (LastCell != nullptr) {
            remove_front();
        }
    }

    void add_front(int x) {
        IntCell *front = new IntCell;
        front -> val = x;
        if (FirstCell != nullptr) {
            FirstCell -> PrevCell = front;
            front -> NextCell = FirstCell;
        }
        FirstCell = front;
        if (LastCell == nullptr) {
            LastCell = front;
        }
    }

    void add_back(int x) {
        IntCell *back = new IntCell;
        back -> val = x;
        if (LastCell != nullptr) {
            LastCell -> NextCell = back;
            back -> PrevCell = LastCell;
        }
        LastCell = back;
        if (FirstCell == nullptr) {
            FirstCell = back;
        }
    }

    void remove_front() {
        if (FirstCell != nullptr) {
            if (FirstCell == LastCell) {
                IntCell* cell = FirstCell;
                FirstCell = nullptr;
                LastCell = nullptr;
                delete cell;
            }
            else {
                IntCell* front = FirstCell;
                FirstCell = front -> NextCell;
                FirstCell -> PrevCell = nullptr;
                front -> NextCell = nullptr;
                delete front;
            }
        }
    }
    
    void remove_back() {
        if(LastCell != nullptr) {
            if(FirstCell == LastCell){
                IntCell* cell = FirstCell;
                FirstCell = nullptr;
                LastCell = nullptr;
                delete cell;
            }
            else {
                IntCell* last = LastCell;
                LastCell = last -> PrevCell;
                LastCell -> NextCell = nullptr;
                last -> PrevCell = nullptr;
                delete last;
            }
        }
    }

    void remove(int x) {
        if (search(x)) {
            IntCell* top = FirstCell;
            if (top -> val == x) {
                remove_front();
            }
            else {
                while (top -> NextCell != nullptr) {
                    top = top -> NextCell;
                    if(top -> val == x) {
                        if(top -> NextCell != nullptr) {
                            IntCell* prev = top -> PrevCell;
                            IntCell* next = top -> NextCell;
                            prev -> NextCell = next;
                            next -> PrevCell = prev;
                            top -> NextCell = nullptr;
                            top -> PrevCell = nullptr;
                            delete top;
                            return;
                        }
                        else {
                            remove_back();
                            return;
                        }

                    }
                }
            }
        }

    }

    bool search (int x) {
        IntCell* topnb = FirstCell;
        if (topnb -> val == x) {
            return true;
        }
        while (topnb -> NextCell != nullptr) {
            topnb = topnb -> NextCell;
            if(topnb -> val == x) {
                return true;
            }
        }
        return false;
    }

    void print() {
        std::cout << '{';
        IntCell* top = FirstCell;
        std::cout << top -> val << ' ';
        while (top -> NextCell != nullptr) {
            top = top -> NextCell;
            std::cout << top -> val << ' ';
        }
        std::cout << '}' << std::endl;
    }

private:
    IntCell *FirstCell;
    IntCell *LastCell;
};