#ifndef PARKING_SPACE_WIDGET
#define PARKING_SPACE_WIDGET
#include <QWidget>
#include <QLayout>
#include "ParkingLotWidget.h"
class ParkingLotWidget;

class ParkingSpaceWidget: public QWidget
{
	Q_OBJECT
public:
	enum direction{N, S, E, W};
    ParkingSpaceWidget(ParkingLotWidget* parent, const QString &dir);
    static QBoxLayout*  makeParkingSapceGroup(ParkingLotWidget* parent, const QString& dir, int n, const QString &expend);
    void paintEvent(QPaintEvent* event) override;
	~ParkingSpaceWidget();
private:
    int number;
	direction dir;
};

#endif