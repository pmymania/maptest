#include "map.h"

Map::Map()
{
    newUrl = "F:/Code/LaserProject/MAPTEST/html/showmap.html";
}

QWebEngineView *Map::createWindow(QWebEnginePage::WebWindowType type)
{
    Q_UNUSED(type)
    this->load(newUrl);
    return 0;
}

void Map::mapload()
{
    load(newUrl);
}
