#pragma once
#include <iostream>
#include <string>

using namespace std;

class Worker
{
public:

    //纯虚函数
    virtual void showInfo() = 0;//显示个人信息

    virtual string getDepName() = 0;//获取岗位名称

    int m_Id;//职工编号
    string m_Name;//职工姓名
    int m_DeptId;//职工所在部门名称编号
};