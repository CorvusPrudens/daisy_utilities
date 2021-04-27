#include <system_include.h>
#include "module.h"

using namespace daisysp;

void Module::Init()
{
    // Set private members to defaults
    param_ = 0.0f;
    a_ = 0.0f;
    b_ = 1.0f;
    // Do stuff
}

float Module::Process(const float &in)
{
    // Do something and return the output.
    return (in * param_) + a_ - b_;
}

void Module::SetComplexParam(const float &complex_param)
{
    a_ = complex_param;
    b_ = 1.0f - complex_param;
}
