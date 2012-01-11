#ifndef TASK_H
#define TASK_H

#include "core-headers.h"

class Task
{
public:
    Task(string name, int complexity);
    ~Task();
    const int GetComplexity();
    bool SetComplexity(int complexity);
    const string GetName();
    void SetName(string name);
    const bool GetProgress();
    bool SetProgress(bool progress);
private:
    int complexity;
    string name;
    bool progress;
};

#endif // TASK_H
