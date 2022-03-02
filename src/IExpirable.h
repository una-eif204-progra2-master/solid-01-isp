//
// Created by Maikol Guzman Alan on 3/1/22.
//

#ifndef SOLID_01_ISP_IEXPIRABLE_H
#define SOLID_01_ISP_IEXPIRABLE_H
#include <iostream>

class IExpirable {
public:
    virtual ~IExpirable() {

    }

    virtual std::string expire() const = 0;
};
#endif //SOLID_01_ISP_IEXPIRABLE_H
