#include "core-headers.h"

Task::Task(string name, int complexity)
{
    setName(name);
    setComplexity(complexity);
    setProgress(false);
}

bool Task::SetComplexity(int complexity)
{
    //complexity range 1..10
    int minComplexity = 1;
    int maxComplexity = 10;

    if (complexity >= minComplexity && complexity <= maxComplexity)
    {
        this->complexity = complexity;
        return true;
    }
    else
        return false;
}

const int Task::GetComplexity()
{
    return (const int) complexity;
}

void Task::SetName(string name)
{
    this->name = name;
}

const string Task::GetName()
{
    return (const string) name;
}

bool Task::SetProgress(bool progress)
{
    this->progress = progress;
}

const bool Task::GetProgress()
{
    return (const bool) progress;
}

Task::~Task()
{
    cout<<"Task deleted."<<endl;
    cout<<"Name - "<<name<<endl;
    cout<<"Completixy - "<<complexity<<endl;
    cout<<"Progress - "<<progress<<endl;
}
