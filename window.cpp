//mainwindow.cpp

#include "window.hpp"

Window::Window(QWidget * parent) : QWidget(parent) {
	sal = new SalaryWidget(this); //create salary widget
	year = new YearWidget(this); //create year widget
	market = new MarketWidget(this); //create market widget

	auto layout = new QVBoxLayout; //initialize layout

	layout->addWidget(market); //add Market Widget
	layout->addWidget(sal); //add Salary Widget
	layout->addWidget(year); //add Year Widget
		
	this->setLayout(layout); //set layout
	//this->setStyleSheet("background-color: red");
}