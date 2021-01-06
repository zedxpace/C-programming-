#include <stdio.h>

#pragma pack(1)         //helps in packing and reducing size 

typedef struct engin    //Old Type ,eng = structure tag
{
    char *engine;
    char *fuelType;
    int   price;
}Engine;                //New Type 

int main()
{
    //Way of initializing in manual order
    Engine eng = { .engine = "ZXPYCDAP" ,.price = 98000 ,.fuelType = "POIUY" };
    printf("%s\n%s\n%d\n" ,eng.engine ,eng.fuelType ,eng.price);
    printf("Size of Structure : %d\n" ,sizeof(eng));    //24 bytes but after packing its 20 bytes

    //An Array of Structure
    Engine arr[10];
    arr[0].engine   = "XYZ";
    arr[0].fuelType = "IOP";
    arr[0].price    = 98760;

    //Pointers to Structure

    Engine *engne = &eng;
    printf("%s\n%s\n%d\n" ,engne->engine ,engne->fuelType ,engne->price);   //engne->engine is equivalent to (*engne).x







}