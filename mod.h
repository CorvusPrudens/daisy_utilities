#pragma once
#ifndef DSY_MOD_H
#define DSY_MOD_H

namespace daisysp
{

enum state
{
    MOD_STATE_A,
    MOD_STATE_B,
    MOD_LAST,
};

/** mod
 *  Author: gabe
 *  Date: 2021-04-27
 */
class mod
{
    public:
        mod () {}
        ~mod () {}

        /** Initialized the mod module.
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

#endif // DSY_MOD_H
