#ifndef COMMUNICATIONSTATESCONTAINER_H
#define COMMUNICATIONSTATESCONTAINER_H

#include <QFrame>
#include <QVBoxLayout>
#include <QLabel>
#include <QTableWidget>
#include <QTreeWidget>
#include <QHeaderView>
#include <QGroupBox>
#include <QPushButton>
#include <QScrollBar>
#include <QLineEdit>
#include <PlottingBoard.h>

#include "Device.h"

/**
 * @brief The CommunicationStatesContainer class
 * @author cheng wang, fan de yuan
 */
class CommunicationStatesContainer : public QFrame
{
    Q_OBJECT

private:
    int width;
    int height;
    QStringList hardwareHeader;
    QStringList transmissionHeader;
    QString groupBoxStyleSheet;
    QString workspaceColor;

    PlottingBoard *communicationFrameRateWindow;

    QWidget *CommunicationStatesContainerWidget;
    QWidget *communicationInformationWindow;
    QHBoxLayout *communicationInformationWindowLayout;

    QLabel* HardwareInformationArea;
    QVBoxLayout* HardwareInformationAreaLayout;


    QTableWidget *HardwareInformation;

    QGroupBox *transmissionArea;
    QGroupBox *receptionArea;

    QTreeWidget *transmissionBuffer;
    QTreeWidget *receptionBuffer;

    QVBoxLayout *CommunicationStatesContainerLayout;
    QHBoxLayout *transmissionAreaLayout;
    QHBoxLayout *receptionAreaLayout;


    QLabel*tagetTestArea;
    QHBoxLayout*targetTestAreaLayout;
    QLabel* targetInfoIndication;
    QLabel *targetIpAddress;
    QLabel *targetListenPort;

    QLineEdit *targetIpAddressLineEdit;
    QLineEdit *targetListenPortLineEdit;
    QPushButton *testConnectBackButton;


    QLabel* selfInfoArea;
    QHBoxLayout *selfInfoAreaLayout;

    QLabel* myInfoIndication;
    QLabel *myIpAddress;
    QLabel *myListenPort;

    QLineEdit *myIpAddressLineEdit;
    QLineEdit *myListenPortLineEdit;
    QSpacerItem *selfInfoAreaItem;



public:
    explicit CommunicationStatesContainer(int width, int height,QString workspaceColor);
    void initVariable();
    void constructIHM();
    void setConnections();
    void embellshingIHM();

    void setDeviceInfo(int index, Device *device);

signals:

public slots:
};

#endif // COMMUNICATIONSTATESCONTAINER_H
