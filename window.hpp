#ifndef WINDOW_HPP
#define WINDOW_HPP

#include "salary_widget.hpp"
#include "year_widget.hpp"
#include "market_widget.hpp"

#include <QWidget>
#include <QLayout>


class Window : public QWidget {
Q_OBJECT

public:
	Window(QWidget * parent = nullptr);

	Window(std::string filename, QWidget * parent = nullptr);

private:
	SalaryWidget *sal;
	YearWidget *year;
	MarketWidget *market;
};


#endif
