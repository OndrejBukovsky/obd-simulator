# Name of the target
TARGET = obdsim

TOOLCHAIN = C:/ST/STM32CubeIDE_1.9.0/STM32CubeIDE/plugins/com.st.stm32cube.ide.mcu.externaltools.gnu-tools-for-stm32.10.3-2021.10.win32_1.0.200.202301161003/tools/bin/

export PATH := ${TOOLCHAIN}:${PATH}

# Toolchain
TOOLCHAIN_PREFIX = arm-none-eabi
CC = $(TOOLCHAIN_PREFIX)-gcc
AS = $(TOOLCHAIN_PREFIX)-as
LD = $(TOOLCHAIN_PREFIX)-ld
OBJCOPY = $(TOOLCHAIN_PREFIX)-objcopy
OBJDUMP = $(TOOLCHAIN_PREFIX)-objdump
SIZE = $(TOOLCHAIN_PREFIX)-size

BUILDDIR = build
INCDIR = inc

# Flags -DSTM32F103xB -DUSE_HAL_DRIVER 
DEFS =  -DSTM32F10X_MD -DUSE_STDPERIPH_DRIVER -D_REDUCE_SIZE_WORKAROUND_
COMM_FLAGS = -Os  -g -mcpu=cortex-m3 -mthumb -mfloat-abi=soft $(DEFS) -Wno-missing-braces #todo remove Wno-missing-braces
CFLAGS = $(COMM_FLAGS) -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity 
ASFLAGS = $(COMM_FLAGS) -x assembler-with-cpp
LDFLAGS = $(COMM_FLAGS) -static -nodefaultlibs -Tstm32f103.ld -Wl,-Map=$(BUILDDIR)/$(TARGET).map -Wl,--start-group -lc -lm -Wl,--end-group


# Top-level global variables
C_OBJS =
ASM_OBJS =
INC = -I$(INCDIR)
SRCDIRS =

# Include sub-makefiles
include lib/Makefile
include src/Makefile

# Build rules
all: $(BUILDDIR) $(BUILDDIR)/$(TARGET).elf

link: $(BUILDDIR)/$(TARGET).elf

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

# Use vpath to search for source files in SRCDIRS
vpath %.c $(SRCDIRS)
vpath %.s $(SRCDIRS)

# Compile C files
$(BUILDDIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

# Compile Assembly files
# $(BUILDDIR)/%.o: %.s
# 	$(CC) $(ASFLAGS) -c $< -o $@

$(BUILDDIR)/%.o: %.s
	mkdir -p $(dir $@)
	$(CC) $(ASFLAGS) -c $< -o $@

$(BUILDDIR)/$(TARGET).elf: $(C_OBJS) $(ASM_OBJS)
	$(CC) $(C_OBJS) $(ASM_OBJS) $(LDFLAGS) -o $@
	$(OBJCOPY) -O binary $@ $(BUILDDIR)/$(TARGET).bin
	$(SIZE) $@

# Disassemble
disasm: $(BUILDDIR)/$(TARGET).elf
	$(OBJDUMP) -D $< > $(BUILDDIR)/$(TARGET).asm

clean:
	rm -rf $(BUILDDIR)

.PHONY: all clean
