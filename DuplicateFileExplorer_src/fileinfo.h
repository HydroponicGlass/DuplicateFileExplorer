#ifndef FILEINFO_H
#define FILEINFO_H

#include <QString>

class fileInfo
{
public: 
    bool uiCheck = false;
    bool checkDuplicate = false;
    QString name;
    qint64 size;
    QString date;
    QString location;
    QString absoluteFilePath;
    QString checksum;

private:

};

#endif // FILEINFO_H
