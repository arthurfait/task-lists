#include "core-headers.h"

Aspect::Aspect(string name, int level)
{
    SetName(name);
    SetLevel(level);
}

void Aspect::SetName(string name)
{
    this->name = name;
}

bool Aspect::SetLevel(int level)
{
    this->level = level;
}

const int Aspect::GetLevel()
{
    return (const int) level;
}
\
const bool Aspect::GetName()
{
    return (const string) name;
}

const ListOfTask Aspect::GetListOfTask()
{
    return (const ListOfTask) listOfTask;
}

bool Aspect::AddNewTask(string name, int complexity)
{
    bool result = false;
    try
    {
        result = listOfTask.AddNewTask(name, complexity);
        return result;
    }
    catch (...)
    {
        return result;
    }
}
