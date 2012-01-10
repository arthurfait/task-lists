#include "core-headers.h"

ListOfTask::ListOfTask()
{
    shared_ptr < list<string> > buff (new list <string>());
    listOfTask = buff;
    count = 0;
}

bool ListOfTask::AddNewTask(string newTask)
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

list <string>* ListOfTask::getListOfTask()
{
    return listOfTask.get();
}
