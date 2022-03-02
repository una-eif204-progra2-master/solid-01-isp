//
// Created by Maikol Guzman Alan on 3/1/22.
//

#include "DigitalProduct.h"

DigitalProduct::DigitalProduct() {}

DigitalProduct::~DigitalProduct() {

}

const string &DigitalProduct::getFilePath() const {
    return filePath;
}

void DigitalProduct::setFilePath(const string &filePath) {
    DigitalProduct::filePath = filePath;
}

std::string DigitalProduct::expire() const {
    return "Expiring...";
}

