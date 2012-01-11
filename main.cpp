#include "headers.h"

int main(int argc, char *argv[])
{
    // Check for interface
    #ifdef QTINTERFACEHEADERS_H
        std::cout<<"Start with Qt interface."<<std::endl;
        QApplication a(argc, argv);
        MainWindow w;
        w.show();
        return a.exec();

    // If no interface
    #else
        std::cout<<"Start without interface."<<std::endl;
        return 0;
    #endif
}
