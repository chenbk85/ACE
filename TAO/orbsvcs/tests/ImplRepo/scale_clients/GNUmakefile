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

all: scale_clients_idl scale_clients_client scale_clients_server

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.scale_clients_idl $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.scale_clients_client $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.scale_clients_server $(@)

.PHONY: scale_clients_idl
scale_clients_idl:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.scale_clients_idl all

.PHONY: scale_clients_client
scale_clients_client: scale_clients_idl
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.scale_clients_client all

.PHONY: scale_clients_server
scale_clients_server: scale_clients_idl scale_clients_client
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.scale_clients_server all

project_name_list:
	@echo scale_clients_client
	@echo scale_clients_idl
	@echo scale_clients_server
