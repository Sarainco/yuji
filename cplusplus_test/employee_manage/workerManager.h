#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;
#include "worker.h"
#include <fstream>

#define FILENAME "empFile.txt"

class WorkerManager
{
public:
    
    int m_EmpNum;//记录人数个数

    Worker **m_EmpArray;//员工数组指针

    bool m_FileIsEmpty;

    //构造函数
    WorkerManager();

    void Show_Menu();

    void exitSystem();

    void Add_Emp();

    void save();

    int get_EmpNum();

    void init_Emp();

    void Show_Emp();

    void Del_Emp();

    int IsExit(int id);

    void Mod_Emp();

    void Find_Emp();

    void Sort_Emp();

    void Clean_File();

    //析构函数
    ~WorkerManager();

};
