#include "core-headers.h"

ListOfTask::ListOfTask()
{
    count = 0;
}

bool ListOfTask::AddNewTask(string name, int complexity)
{
    try
    {
        shared_ptr <Task> newTask (new Task(name, complexity));
        listOfTask.push_back(newTask);
        count++;
        return true;
    }
    catch (...)
    {
        return false;
    }
}

list < shared_ptr<Task> > ListOfTask::GetListOfTask()
{
    return listOfTask;
}

ListOfTask::~ListOfTask()
{
    cout<<"List of task deleted."<<endl;
}
