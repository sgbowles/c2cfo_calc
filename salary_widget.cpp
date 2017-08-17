//salary_widget.cpp

#include "salary_widget.hpp"

SalaryWidget::SalaryWidget(QWidget * parent) {
	salBox = new QDoubleSpinBox(this); //create box for salary
	salBox->setDecimals(0); //need increments to be whole numbers
	salBox->setMinimum(0.0); //no negative numbers for salary
	salBox->setMaximum(100000.0); //this application should never need numbers higher than 100k
	
	salMessage = new QLabel("Enter the salary: ");

	auto display = new QHBoxLayout;
	
	display->addWidget(salMessage);
	display->addWidget(salBox);
	
	this->setLayout(display);
}