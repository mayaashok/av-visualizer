#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.resize(800, 600);
    window.setWindowTitle("AV Visualizer - Step 1");

    window.show();

    return app.exec();
}