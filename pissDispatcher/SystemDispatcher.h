#ifndef SYSTEMDISPATCHER_H
#define SYSTEMDISPATCHER_H

#include <SystemDataBase.h>
#include <QProcess>
#include <QString>
#include <QDir>
#include <QFile>
#include <QTextEdit>
#include "ImageProcessingFactory.h"
#include "ErrorMessage.h"
#include "pissCommunicationStack.h"

class SystemDispatcher
{
public:
    SystemDispatcher();

    Patient* getPatientById(int id);

    QString get_username();
    QString getImageCenterPath();
    QStringList getPatientsStatus();
    QString doImageProcessingByMethodType(int id, int dim, QString method);

    bool startPissServer();
    bool stopPissServer();
    void setSystemDataBase(SystemDataBase* database);
    void setImageProcessingFactory(ImageProcessingFactory *imageProcessingFactory);
    void setCommunicationStack(pissCommunicationStack *communicationStack);
    void setMessageDisplayWindow(QTextEdit *msgDisplay);
    void initializeSystemPaths();

    int findPatientExisted();

private:
    SystemDataBase* database;
    ImageProcessingFactory *imageProcessingFactory;
    pissCommunicationStack *communicationStack;

    //! -------------create a workspace folder with the default path----------------------------------------
    QString workspace_path;
    QString patients_path;
    QString metadata_path;
    QString image_center_path;

    IgssImage *output;

};

#endif // SYSTEMDISPATCHER_H
