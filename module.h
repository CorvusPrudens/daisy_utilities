#pragma once
#ifndef DSY_MODULE_H
#define DSY_MODULE_H

namespace daisysp
{

enum state
{
    MODULE_STATE_A,
    MODULE_STATE_B,
    MODULE_LAST,
};

/** Module
 *  Author: Gabriel
 *  Date: 2021-04-27
 */
class Module
{
    public:
        Module () {}
        ~Module () {}

        /** Initializes the Module module.
         *  \param p - description
         */
        void Init();

        /** Processes a single sample and returns it.
         *  \param in - input sample
         */
        float Process(const float &in);

        /** Setter for private member param
         */
        inline void SetParam(const float &param) { param_ = param; }

        /** Setter for private member complex_param
         */
        void SetComplexParam(const float &complex_param);

    private:

        float param_;
        float foo_bar_;
        float a_, b_;

};

} // namespace daisysp

#endif // DSY_MODULE_H
