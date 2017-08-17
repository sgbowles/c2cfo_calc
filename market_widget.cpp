//market_widget.cpp

#include "market_widget.hpp"

MarketWidget::MarketWidget(QWidget * parent) {
	marketBox = new QDoubleSpinBox(this); //create box for market value
	//marketBox->isReadOnly();
	marketBox->setDecimals(0); //no need for decimal places
	marketBox->setMinimum(0.0); //no negative contract values
	marketBox->setMaximum(100000.0); //this application should never need numbers higher than 100k

	marketMessage = new QLabel("Market Vlaue: ");

	auto display = new QHBoxLayout;

	display->addWidget(marketMessage);
	display->addWidget(marketBox);

	this->setLayout(display);
}