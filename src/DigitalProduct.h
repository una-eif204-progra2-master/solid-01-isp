//
// Created by Maikol Guzman Alan on 3/1/22.
//

#ifndef SOLID_01_SRP_DIGITALPRODUCT_H
#define SOLID_01_SRP_DIGITALPRODUCT_H


#include "Product.h"
#include "IExpirable.h"

class DigitalProduct: public Product, public IExpirable {
private:
    string filePath;
public:
    DigitalProduct();

    virtual ~DigitalProduct();

    const string &getFilePath() const;

    void setFilePath(const string &filePath);

    std::string expire() const override;
};


#endif //SOLID_01_SRP_DIGITALPRODUCT_H
