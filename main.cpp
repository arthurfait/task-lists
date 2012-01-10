#include "headers.h"

int main(int argc, char *argv[])
{
#ifdef QTINTERFACEHEADERS_H
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
#endif
    return 0;
}
