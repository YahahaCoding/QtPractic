#include <QMap>
#include <QObject>
#include <QDir>
#include <QSettings>

class UserInformation : public QObject
{
	Q_OBJECT

public:
	UserInformation(QObject* parent)
		: QObject(parent)
	{

	}

	~UserInformation()
	{
	}
	
	void userInformationInit() {
		QDir parameterDir;
		QFile file;

	}

private:
	QMap<QString, QString> accountAndPassword;
};
