// -*- C++ -*-
// $Id: Locality_Manager_Impl.h 94651 2011-10-07 08:00:24Z msmit $

/**
 * @file Locality_Manager_Impl.h
 * @author William R. Otte <wotte@dre.vanderbilt.edu>
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:1521

#ifndef DANCE_LOCALITYMANAGERI_PDD6RP_H_
#define DANCE_LOCALITYMANAGERI_PDD6RP_H_

#include "dance/DAnCE_LocalityManagerS.h"
#include "dance/DAnCE_DeploymentInterceptorsC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
#pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/LocalObject.h"


#include "dance/LocalityManager/Daemon/Locality_Manager_Impl_Export.h"
#include "dance/LocalityManager/Scheduler/Deployment_Scheduler.h"
#include "dance/LocalityManager/Scheduler/Plugin_Manager.h"

#include <map>
#include <vector>
#include <list>
#include <string>

namespace DAnCE
{

  class Locality_Manager_Impl_Export LocalityManager_i
    : public virtual POA_DAnCE::LocalityManager
  {
  public:
    // Constructor
    LocalityManager_i (const ACE_TString &uuid,
                       std::list <std::string> plugin_config_files,
                       CORBA::ORB_ptr orb,
                       PortableServer::POA_ptr poa);

    void init (const Deployment::Properties &prop);
    // Destructor
    virtual ~LocalityManager_i (void);

    virtual
      ::Deployment::Properties * configuration (void);

    virtual
      ::Deployment::ApplicationManager_ptr preparePlan (
                          const ::Deployment::DeploymentPlan & plan,
                          ::Deployment::ResourceCommitmentManager_ptr resourceCommitment);

    virtual
      void destroyManager (::Deployment::ApplicationManager_ptr manager);

    virtual
      void shutdown (void);

    virtual
      void finishLaunch (const ::Deployment::Connections & providedReference,
                         ::CORBA::Boolean start);

    virtual
      void start (void);

    virtual
      ::Deployment::Application_ptr startLaunch (const ::Deployment::Properties & configProperty,
                                                 ::Deployment::Connections_out providedReference);

    virtual
      void destroyApplication (::Deployment::Application_ptr app);

  private:
    void install_instances (const ::Deployment::Properties &prop);

    void collect_references (::Deployment::Connections_out &providedReference);

    void disconnect_connections (void);

    const char * determine_instance_type (const ::Deployment::PlanConnectionDescription &conn,
                                  const ::Deployment::Connection & providedReference);

    ACE_TString uuid_;

    std::list< std::string > plugin_config_files_;

    CORBA::ORB_var orb_;
    PortableServer::POA_var poa_;

    typedef std::list< CORBA::ULong > INSTANCE_LIST;

    typedef std::map <std::string,
                      INSTANCE_LIST> HANDLER_TABLE;

    HANDLER_TABLE instance_handlers_;

    Plugin_Manager::INSTALL_ORDER handler_order_;

    typedef std::map < std::string, CORBA::Any_var > REFERENCE_MAP;

    REFERENCE_MAP instance_references_;

    ::Deployment::DeploymentPlan plan_;

    DAnCE::Deployment_Scheduler scheduler_;

    CORBA::ULong spawn_delay_;
  };

}
#endif /* DANCE_LOCALITYMANAGERI_H_  */
