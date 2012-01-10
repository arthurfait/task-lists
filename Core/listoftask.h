#ifndef LISTOFTASK_H
#define LISTOFTASK_H

#include "core-headers.h"

class ListOfTask
{
public:
    ListOfTask();
    list <string>* getListOfTask();
    bool AddNewTask (string newTask);
    int count;
private:
    shared_ptr < list<string> > listOfTask;
};

#endif // LISTOFTASK_H
