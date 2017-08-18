//market_widget.cpp

#include "market_widget.hpp"

MarketWidget::MarketWidget(QWidget * parent) {
	marketBox = new QLineEdit(this); //create box for market value
	marketBox->setReadOnly(true); //not a editing box

	marketMessage = new QLabel("Market Value: ");

	auto display = new QHBoxLayout;

	display->addWidget(marketMessage);
	display->addWidget(marketBox);

	this->setLayout(display);
}