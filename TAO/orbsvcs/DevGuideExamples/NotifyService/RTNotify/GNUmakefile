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

all: RTNotify_Idl RTNotify_Server RTNotify_Client RTNotify_Consumer

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.RTNotify_Idl $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.RTNotify_Server $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.RTNotify_Client $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.RTNotify_Consumer $(@)

.PHONY: RTNotify_Idl
RTNotify_Idl:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.RTNotify_Idl all

.PHONY: RTNotify_Server
RTNotify_Server: RTNotify_Idl
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.RTNotify_Server all

.PHONY: RTNotify_Client
RTNotify_Client: RTNotify_Idl RTNotify_Server
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.RTNotify_Client all

.PHONY: RTNotify_Consumer
RTNotify_Consumer: RTNotify_Idl RTNotify_Server
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.RTNotify_Consumer all

project_name_list:
	@echo RTNotify_Client
	@echo RTNotify_Consumer
	@echo RTNotify_Idl
	@echo RTNotify_Server
