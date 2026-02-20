#ifndef SENSORS_H
#define SENSORS_H

enum e_sensors {
    POS = 0x01,
    GEST = 0x10,
};

typedef void (*impresion)();

#endif