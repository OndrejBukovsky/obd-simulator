
LIBDIR = lib

LIBSRCS = $(shell find $(LIBDIR) -name '*.c')
LIBASM = $(shell find $(LIBDIR) -name '*.s')

# Append to top-level Makefile variables
C_OBJS += $(LIBSRCS:$(LIBDIR)/%.c=$(BUILDDIR)/$(LIBDIR)/%.o)
ASM_OBJS += $(LIBASM:$(LIBDIR)/%.s=$(BUILDDIR)/$(LIBDIR)/%.o)
INC += -I$(LIBDIR) -I$(LIBDIR)/core/inc -I$(LIBDIR)/STM32F10x_StdPeriph_Driver/inc -I$(LIBDIR)/STM32F1xx_HAL_Driver/Inc -I$(LIBDIR)/CMSIS/Device -I$(LIBDIR)/CMSIS/Include
#-I$(LIBDIR)/STM32F1xx_HAL_Driver/Inc
SRCDIRS += $(LIBDIR)

