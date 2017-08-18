#ifndef MARKET_WIDGET_HPP
#define MARKET_WIDGET_HPP

#include <QWidget>
#include <QString>
#include <QLayout>
#include <QLabel>
#include <QLineEdit>

class MarketWidget : public QWidget {
	Q_OBJECT

public:
	MarketWidget(QWidget * parent = nullptr);

private:
	QLineEdit *marketBox;
	QLineEdit *display;
	QLabel *marketMessage;
};

#endif