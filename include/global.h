#ifndef GLOBALH
#define GLOBALH
#include <random>

using std::pow;


inline float get_random_float() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_real_distribution<float> sampling(0.f, 1.f);

    return sampling(gen);
};

float schlick(float cosine, float ref_idx) {
    float r0 = (1 - ref_idx) / (1 + ref_idx);
    r0 = r0 * r0;
    return r0 + (1 - r0) * pow((1 - cosine), 5);
};

#endif