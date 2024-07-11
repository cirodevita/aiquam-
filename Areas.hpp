//
// Created by Ciro De Vita on 11/07/24.
//

#ifndef AIQUAMPLUSPLUS_AREAS_HPP
#define AIQUAMPLUSPLUS_AREAS_HPP

// log4cplus - https://github.com/log4cplus/log4cplus
#include "log4cplus/configurator.h"
#include "log4cplus/logger.h"
#include "log4cplus/loggingmacros.h"

#include <fstream>

#include "Area.hpp"

using namespace std;

class Areas : private vector<Area> {
public:
    Areas();
    ~Areas();

    using vector::push_back;
    using vector::operator[];
    using vector::size;
    using vector::at;
    using vector::empty;
    using vector::begin;
    using vector::end;
    using vector::erase;

    void loadFromJson(const string &fileName);

private:
    log4cplus::Logger logger;
};

#endif //AIQUAMPLUSPLUS_AREAS_HPP