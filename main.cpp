#include <QApplication>
#include "window.hpp"

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);

	Window widget;
	widget.show();
	return app.exec();
} 