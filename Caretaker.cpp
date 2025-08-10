#include "Caretaker.h"

void Caretaker::addMemento(Memento* memento) {
    if (memento != NULL) {
        mementos.push_back(memento);
    }
}

Memento* Caretaker::getMemento() const {
    
}
