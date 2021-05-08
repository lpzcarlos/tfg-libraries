//Confgiuracion del programa principal

#ifndef _CONFIG_H_
#define _CONFIG_H_

#include <Arduino.h>

//Pines necesarios para el Tactil
#define YP A3  
#define XM A2  
#define YM 9  
#define XP 8  

//Rangos analogicos del tactil. Calibrado!
#define TS_MINX 105
#define TS_MAXX 920
#define TS_MINY 70
#define TS_MAXY 880

//Puertos analogicos de la pantalla
#define LCD_RESET A4
#define LCD_CS A3
#define LCD_CD A2
#define LCD_WR A1
#define LCD_RD A0

//Variables sensor DTH11
#define DHTPIN 39  //Pin digital que quiera
#define DHTTYPE DHT11

//Intervalos de datos
#define SEG5 50
#define MIN1 600
#define MIN30 18000
#define HOR1 36000

//On Off Pantalla
#define ON   1
#define OFF  0

//Valores de los colores en hexadecimal
#define BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

//Nombres de los estados de la maquina de estados principal
#define PRINCIPAL        0
#define PRINCIPAL_WAIT   1
#define DATOS            2
#define DATOS_WAIT       3
#define CONFIG           4
#define CONFIG_WAIT      5

//Definicion de los sensores de gases
#define MQ4        0
#define MQ7        1
#define MQ_131     2
#define MQ135      3
#define MG811      4 

//Rango de presión de la pantalla
#define MINPRESSURE 20
#define MAXPRESSURE 1000


#endif // _CONFIG_H_