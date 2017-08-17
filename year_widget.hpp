#ifndef YEAR_WIDGET_HPP
#define YEAR_WIDGET_HPP

#include <QWidget>
#include <QDoubleSpinBox>
#include <QLayout>
#include <QLabel>

class QLineEdit;

class YearWidget : public QWidget {
	Q_OBJECT

public:
	YearWidget(QWidget * parent = nullptr);

private:
	QDoubleSpinBox *yearBox;
	QLineEdit *display;
	QLabel *yearMessage;
};

#endif