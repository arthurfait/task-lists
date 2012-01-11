#ifndef ASPECT_H
#define ASPECT_H

#include "core-headers.h"

class Aspect
{
public:
    Aspect(string name, int level);
    ~Aspect();
    const int GetLevel();
    bool SetLevel(int level);
    const string GetName();
    void SetName(string name);
    const ListOfTask GetListOfTask();
    bool AddNewTask(string name, int complexity);
private:
    int level;
    string name;
    ListOfTask listOfTask;
};

#endif // ASPECT_H
