#include <QApplication>
#include <QMainWindow>
#include <QPalette>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Set application palette to use a white background
    QPalette pal = app.palette();
    pal.setColor(QPalette::Window, Qt::white);
    pal.setColor(QPalette::WindowText, Qt::black);
    app.setPalette(pal);

    QMainWindow window;
    window.setWindowTitle("Qt White Application");
    window.resize(400, 300);
    window.show();

    return app.exec();
}
