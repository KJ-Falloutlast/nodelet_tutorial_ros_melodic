
#ifndef SAMPLE_NODELET_CLASS_SRC_SAMPLE_NODELET_CLASS_H_
#define SAMPLE_NODELET_CLASS_SRC_SAMPLE_NODELET_CLASS_H_
#include <nodelet/nodelet.h>

namespace sample_nodelet_ns
{
class SampleNodeletClass : public nodelet::Nodelet
{
public:
    SampleNodeletClass();
    ~SampleNodeletClass();

    virtual void onInit();
};
} // namespace sample_nodelet_ns

#endif /* SAMPLE_NODELET_CLASS_SRC_SAMPLE_NODELET_CLASS_H_ */
