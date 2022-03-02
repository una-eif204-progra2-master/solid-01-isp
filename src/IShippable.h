//
// Created by Maikol Guzman Alan on 3/1/22.
//

#ifndef SOLID_01_ISP_ISHIPPABLE_H
#define SOLID_01_ISP_ISHIPPABLE_H
#include <iostream>

class IShippable {
public:
    virtual ~IShippable() {

    }

    virtual std::string ship() const = 0;
};
#endif //SOLID_01_ISP_ISHIPPABLE_H
