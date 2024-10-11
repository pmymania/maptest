#ifndef MAP_H
#define MAP_H

#include <QWebEngineView>


class Map : public QWebEngineView
{
    Q_OBJECT
public:
    Map();
    void mapload();

private:
    QWebEngineView * createWindow(QWebEnginePage::WebWindowType type) override;

    QUrl newUrl;
};

#endif // MAP_H
