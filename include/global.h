#ifndef GLOBALH
#define GLOBALH
#include <random>

inline float get_random_float() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_real_distribution<float> sampling(0.f, 1.f);

    return sampling(gen);
}

#endif