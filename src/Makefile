
SRCDIR = src

SRCSRC = $(shell find $(SRCDIR) -name '*.c')

# Append to top-level Makefile variables
C_OBJS += $(SRCSRC:$(SRCDIR)/%.c=$(BUILDDIR)/$(SRCDIR)/%.o)
INC += -I$(SRCDIR)
SRCDIRS += $(SRCDIR)