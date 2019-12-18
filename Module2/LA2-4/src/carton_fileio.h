#pragma once

#include <array>
#include <string>
#include "carton.h"

const int kMaxArraySize = 20; 

std::string ReadDataFormatFromFile(std::string filename, // By value
            std::array<Carton,kMaxArraySize>& cartons,   // By reference
            int& rec_num);                               // By reference

void WriteDataToFle(std::string filename,                      // By value
            const std::array<Carton,kMaxArraySize>& cartons,   // By constant reference
            int rec_num);                                     // By value