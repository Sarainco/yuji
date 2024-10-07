#include <iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"


int main()
{
    int choice = 0;
    WorkerManager wm;
#if 0
    while(true)
    {
        wm.Show_Menu();
        cout << "请输入你的选择：" << endl;
        cin >> choice;

        switch(choice)
        {
            case 0:
                wm.exitSystem();
                break;
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            default:
                break;
        }

    }
#endif



    return 0;
}