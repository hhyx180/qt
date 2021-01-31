#include<QApplication>
#include<QPushButton>
int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    QPushButton hello("Helloworld!");
    hello.resize(100,30);
    hello.show();
    return app.exec();
}
