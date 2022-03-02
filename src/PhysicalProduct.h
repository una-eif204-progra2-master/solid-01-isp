//
// Created by Maikol Guzman Alan on 3/1/22.
//

#ifndef SOLID_01_SRP_PHYSICALPRODUCT_H
#define SOLID_01_SRP_PHYSICALPRODUCT_H


#include "Product.h"
#include "IShippable.h"
#include "IReplaceable.h"

class PhysicalProduct : public Product, public IShippable, public IReplaceable {
private:
    double weight;

public:
    PhysicalProduct();

    virtual ~PhysicalProduct();

    double getWeight() const;

    void setWeight(double weight);

    std::string ship() const override;
    std::string replace() const override;
};


#endif //SOLID_01_SRP_PHYSICALPRODUCT_H
