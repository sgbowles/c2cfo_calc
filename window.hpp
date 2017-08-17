#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <QWidget>

class Window : public QWidget {
Q_OBJECT

public:
	Window(QWidget * parent = nullptr);

	Window(std::string filename, QWidget * parent = nullptr);

private:
	NameWidget *name;
	SalaryWidget *sal;
	YearWidger *year;

};


#endif
