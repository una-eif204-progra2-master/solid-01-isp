//
// Created by Maikol Guzman Alan on 3/1/22.
//

#ifndef SOLID_01_ISP_IREPLACEABLE_H
#define SOLID_01_ISP_IREPLACEABLE_H
#include <iostream>

class IReplaceable {
public:
    virtual ~IReplaceable() {

    }

    virtual std::string replace() const = 0;
};

#endif //SOLID_01_ISP_IREPLACEABLE_H
