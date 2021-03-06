#ifndef _PART_H
#define _PART_H

#include <chrono>
#include <cstdarg>
#include <functional>
#include <string>
#include <thread>

using namespace std;

class Part {
   public:
    string name_;
    bool is_thread_;
    thread *thread_;

    Part(bool is_thread);
    virtual void StartSeq() = 0;
    virtual void StartThread() = 0;
    // virtual void Run() = 0;
    virtual ~Part();
};

#endif