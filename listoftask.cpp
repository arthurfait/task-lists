#include "headers.h"

ListOfTask::ListOfTask()
{
    shared_ptr < list<QString> > buff (new list <QString>());
    listOfTask = buff;
    count = 0;
}

bool ListOfTask::AddNewTask(QString newTask)
{
    try
    {
        listOfTask->push_back(newTask);
        count++;
        return true;
    }
    catch (...)
    {
        return false;
    }
}

list <QString>* ListOfTask::getListOfTask()
{
    return listOfTask.get();
}
