# -*- makefile -*-
#----------------------------------------------------------------------------
#       GNU ACE Workspace
#
# $Id: GNUACEWorkspaceCreator.pm 94635 2011-10-06 12:59:23Z johnnyw $
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# /home/build/DOC_ROOT/stage-644/ACE_wrappers/bin/mwc.pl -type gnuace -exclude "TAO/TAO_*.mwc,TAO/CIAO/CIAO_*.mwc" -workers 10 -recurse -hierarchy -relative ACE_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers -relative TAO_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers/TAO -relative CIAO_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers/TAO/CIAO -relative DANCE_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers/TAO/DAnCE
#
#----------------------------------------------------------------------------

MAKEFILE = GNUmakefile

ifeq ($(findstring k,$(MAKEFLAGS)),k)
  KEEP_GOING = -
endif

include $(ACE_ROOT)/include/makeinclude/macros.GNU

all: Log_Basic_Client Log_Event_Consumer Log_Event_Supplier Log_Notify_Consumer Log_Notify_Supplier Log_RTEvent_Consumer Log_RTEvent_Supplier

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@cd Basic && $(MAKE) -f GNUmakefile.Log_Basic_Client $(@)
	$(KEEP_GOING)@cd Event && $(MAKE) -f GNUmakefile.Log_Event_Consumer $(@)
	$(KEEP_GOING)@cd Event && $(MAKE) -f GNUmakefile.Log_Event_Supplier $(@)
	$(KEEP_GOING)@cd Notify && $(MAKE) -f GNUmakefile.Log_Notify_Consumer $(@)
	$(KEEP_GOING)@cd Notify && $(MAKE) -f GNUmakefile.Log_Notify_Supplier $(@)
	$(KEEP_GOING)@cd RTEvent && $(MAKE) -f GNUmakefile.Log_RTEvent_Consumer $(@)
	$(KEEP_GOING)@cd RTEvent && $(MAKE) -f GNUmakefile.Log_RTEvent_Supplier $(@)

.PHONY: Log_Basic_Client
Log_Basic_Client:
	$(KEEP_GOING)@cd Basic && $(MAKE) -f GNUmakefile.Log_Basic_Client all

.PHONY: Log_Event_Consumer
Log_Event_Consumer:
	$(KEEP_GOING)@cd Event && $(MAKE) -f GNUmakefile.Log_Event_Consumer all

.PHONY: Log_Event_Supplier
Log_Event_Supplier:
	$(KEEP_GOING)@cd Event && $(MAKE) -f GNUmakefile.Log_Event_Supplier all

.PHONY: Log_Notify_Consumer
Log_Notify_Consumer:
	$(KEEP_GOING)@cd Notify && $(MAKE) -f GNUmakefile.Log_Notify_Consumer all

.PHONY: Log_Notify_Supplier
Log_Notify_Supplier:
	$(KEEP_GOING)@cd Notify && $(MAKE) -f GNUmakefile.Log_Notify_Supplier all

.PHONY: Log_RTEvent_Consumer
Log_RTEvent_Consumer:
	$(KEEP_GOING)@cd RTEvent && $(MAKE) -f GNUmakefile.Log_RTEvent_Consumer all

.PHONY: Log_RTEvent_Supplier
Log_RTEvent_Supplier:
	$(KEEP_GOING)@cd RTEvent && $(MAKE) -f GNUmakefile.Log_RTEvent_Supplier all

project_name_list:
	@echo Log_Basic_Client
	@echo Log_Event_Consumer
	@echo Log_Event_Supplier
	@echo Log_Notify_Consumer
	@echo Log_Notify_Supplier
	@echo Log_RTEvent_Consumer
	@echo Log_RTEvent_Supplier
