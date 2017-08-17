#ifndef SALARY_WIDGET_HPP
#define SALARY_WIDGET_HPP

#include <QWidget>
#include <QDoubleSpinBox>
#include <QLayout>
#include <QLabel>

class QLineEdit;

class SalaryWidget : public QWidget {
Q_OBJECT

public: 
	SalaryWidget(QWidget * parent = nullptr);

private:
	QDoubleSpinBox *salBox;
	QLineEdit *display;
	QLabel *salMessage;
};

#endif