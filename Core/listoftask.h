#ifndef LISTOFTASK_H
#define LISTOFTASK_H

#include "core-headers.h"

class ListOfTask
{
public:
    ListOfTask();
    ~ListOfTask();
    list < shared_ptr<Task> > GetListOfTask();
    bool AddNewTask (string name, int complexity);
    int count;
private:
    list< shared_ptr<Task> > listOfTask;
};

#endif // LISTOFTASK_H
