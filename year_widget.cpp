//year_widget.cpp

#include "year_widget.hpp"

YearWidget::YearWidget(QWidget * parent) {
	yearBox = new QDoubleSpinBox(this); //create box for contract years
	yearBox->setDecimals(0); //need increments to be whole numbers
	yearBox->setMinimum(0.0); //no negative numbers for years
	yearBox->setMaximum(5.0); //5 year contract is the maximum

	yearMessage = new QLabel("Enter the amount of years: ");

	auto display = new QHBoxLayout;

	display->addWidget(yearMessage);
	display->addWidget(yearBox);

	this->setLayout(display);
}