
// -*- C++ -*-
// $Id: bug_3251_export.h 80955 2008-03-17 09:06:25Z johnnyw $
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl bug_3251
// ------------------------------
#ifndef BUG_3251_REGRESSION_EXPORT_H
#define BUG_3251_REGRESSION_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (BUG_3251_REGRESSION_HAS_DLL)
#  define BUG_3251_REGRESSION_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && BUG_3251_REGRESSION_HAS_DLL */

#if !defined (BUG_3251_REGRESSION_HAS_DLL)
#  define BUG_3251_REGRESSION_HAS_DLL 1
#endif /* ! BUG_3251_REGRESSION_HAS_DLL */

#if defined (BUG_3251_REGRESSION_HAS_DLL) && (BUG_3251_REGRESSION_HAS_DLL == 1)
#  if defined (BUG_3251_REGRESSION_BUILD_DLL)
#    define bug_3251_Export ACE_Proper_Export_Flag
#    define BUG_3251_REGRESSION_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define BUG_3251_REGRESSION_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* BUG_3251_REGRESSION_BUILD_DLL */
#    define bug_3251_Export ACE_Proper_Import_Flag
#    define BUG_3251_REGRESSION_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define BUG_3251_REGRESSION_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* BUG_3251_REGRESSION_BUILD_DLL */
#else /* BUG_3251_REGRESSION_HAS_DLL == 1 */
#  define bug_3251_Export
#  define BUG_3251_REGRESSION_SINGLETON_DECLARATION(T)
#  define BUG_3251_REGRESSION_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* BUG_3251_REGRESSION_HAS_DLL == 1 */

// Set BUG_3251_REGRESSION_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (BUG_3251_REGRESSION_NTRACE)
#  if (ACE_NTRACE == 1)
#    define BUG_3251_REGRESSION_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define BUG_3251_REGRESSION_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !BUG_3251_REGRESSION_NTRACE */

#if (BUG_3251_REGRESSION_NTRACE == 1)
#  define BUG_3251_REGRESSION_TRACE(X)
#else /* (BUG_3251_REGRESSION_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define BUG_3251_REGRESSION_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (BUG_3251_REGRESSION_NTRACE == 1) */

#endif /* BUG_3251_REGRESSION_EXPORT_H */

// End of auto generated file.
