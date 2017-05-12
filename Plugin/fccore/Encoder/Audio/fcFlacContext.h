#pragma once

class fcIFlacContext
{
public:
    virtual void release(bool async = true) = 0;
    virtual void addOutputStream(fcStream *s) = 0;
    virtual bool write(const float *samples, int num_samples) = 0;
protected:
    virtual ~fcIFlacContext() {}
};
fcIFlacContext* fcFlacCreateContextImpl(const fcFlacConfig *conf);