#include "rasteralgorithms.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RasterAlgorithms w;
    w.show();
    return a.exec();
}

//WU ALGORITHM

//#include <stdafx.h>
//#include "wucircle.h“
//void drawwucircle(int cx, int cy, int r)
//{
//    int x; int y; double t; double d; int j; int kx; int ky; int lastx; .// хулиганство
//    x = r; lastx = r; y = 0; t = 0;
//    for(j = 0; j <= 3; j++)
//    {
//        kx = j%2*2-1;
//        ky = j/2%2*2-1;
//        setpixel(kx*x+cx, ky*y+cy, double(1));
//        setpixel(kx*y+cx, ky*x+cy, double(1));
//    }
//    while(x>y)
//    {
//        y = y+1;
//        d = ap::iceil(sqrt(double(r*r-y*y)))-sqrt(double(r*r-y*y));
//        if( d<t )
//        {
//            x = x-1;
//        }
//        if( x<y )
//        { break; }
//        if( x==y&&lastx==x )
//        { break; }
//        for(j = 0; j <= 3; j++)
//        {
//            kx = j%2*2-1;
//            ky = j/2%2*2-1;
//            setpixel(kx*x+cx, ky*y+cy, 1-d);
//            setpixel(kx*y+cx, ky*x+cy, 1-d);
//            if( x-1>=y )
//            {
//                setpixel(kx*(x-1)+cx, ky*y+cy, d);
//                setpixel(kx*y+cx, ky*(x-1)+cy, d);
//            }
//        }
//        t = d;
//        lastx = x;
//    }
//}
