#ifndef LISTOFTASK_H
#define LISTOFTASK_H

#include "headers.h"

class ListOfTask
{
public:
    ListOfTask();
    list <QString>* getListOfTask();
    bool AddNewTask (QString newTask);
    int count;
private:
    shared_ptr < list<QString> > listOfTask;
};

#endif // LISTOFTASK_H
