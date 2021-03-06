
// -*- C++ -*-
// $Id: Cookie_Export.h 84406 2009-02-11 14:59:08Z wotte $
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl Cookie_Factory
// ------------------------------
#ifndef COOKIE_FACTORY_EXPORT_H
#define COOKIE_FACTORY_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (COOKIE_FACTORY_HAS_DLL)
#  define COOKIE_FACTORY_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && COOKIE_FACTORY_HAS_DLL */

#if !defined (COOKIE_FACTORY_HAS_DLL)
#  define COOKIE_FACTORY_HAS_DLL 1
#endif /* ! COOKIE_FACTORY_HAS_DLL */

#if defined (COOKIE_FACTORY_HAS_DLL) && (COOKIE_FACTORY_HAS_DLL == 1)
#  if defined (COOKIE_FACTORY_BUILD_DLL)
#    define Cookie_Factory_Export ACE_Proper_Export_Flag
#    define COOKIE_FACTORY_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define COOKIE_FACTORY_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* COOKIE_FACTORY_BUILD_DLL */
#    define Cookie_Factory_Export ACE_Proper_Import_Flag
#    define COOKIE_FACTORY_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define COOKIE_FACTORY_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* COOKIE_FACTORY_BUILD_DLL */
#else /* COOKIE_FACTORY_HAS_DLL == 1 */
#  define Cookie_Factory_Export
#  define COOKIE_FACTORY_SINGLETON_DECLARATION(T)
#  define COOKIE_FACTORY_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* COOKIE_FACTORY_HAS_DLL == 1 */

// Set COOKIE_FACTORY_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (COOKIE_FACTORY_NTRACE)
#  if (ACE_NTRACE == 1)
#    define COOKIE_FACTORY_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define COOKIE_FACTORY_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !COOKIE_FACTORY_NTRACE */

#if (COOKIE_FACTORY_NTRACE == 1)
#  define COOKIE_FACTORY_TRACE(X)
#else /* (COOKIE_FACTORY_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define COOKIE_FACTORY_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (COOKIE_FACTORY_NTRACE == 1) */

#endif /* COOKIE_FACTORY_EXPORT_H */

// End of auto generated file.
