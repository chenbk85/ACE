// -*- C++ -*-

//$Id: Distributable_Thread.h 81429 2008-04-24 18:49:54Z johnnyw $

#ifndef DISTRIBUTABLE_THREAD_H
#define DISTRIBUTABLE_THREAD_H

#include "tao/RTScheduling/RTScheduler.h"
#include "tao/LocalObject.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

class TAO_RTScheduler_Export TAO_DistributableThread:
  public RTScheduling::DistributableThread,
  public ::CORBA::LocalObject
{
 public:
  TAO_DistributableThread (void);

  ~TAO_DistributableThread (void);

  virtual void cancel (void);

  virtual RTScheduling::DistributableThread::DT_State state (void);

 private:
  RTScheduling::DistributableThread::DT_State state_;
};


class TAO_DistributableThread_Factory
{
public:
  static RTScheduling::DistributableThread_ptr create_DT (void);
};

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /*DISTRIBUTABLE_THREAD_H*/
