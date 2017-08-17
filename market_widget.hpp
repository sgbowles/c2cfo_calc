#ifndef MARKET_WIDGET_HPP
#define MARKET_WIDGET_HPP

#include <QWidget>
#include <QDoubleSpinBox>
#include <QLayout>
#include <QLabel>

class QLineEdit;

class MarketWidget : public QWidget {
	Q_OBJECT

public:
	MarketWidget(QWidget * parent = nullptr);

private:
	QDoubleSpinBox *marketBox;
	QLineEdit *display;
	QLabel *marketMessage;
};

#endif