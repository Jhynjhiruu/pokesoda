; GLOBAL DEFINITIONS

REG_BASE equ 2000h

SYS_CTRL1 equ 00h
SYS_CTRL2 equ 01h
SYS_CTRL3 equ 02h

TMR1_SCALE equ 18h
TMR1_OSC equ 19h

IRQ_PRI1 equ 20h
IRQ_PRI2 equ 21h
IRQ_PRI3 equ 22h

IRQ_ENA1 equ 23h
IRQ_ENA2 equ 24h
IRQ_ENA3 equ 25h
IRQ_ENA4 equ 26h

IRQ_ACT1 equ 27h
IRQ_ACT2 equ 28h
IRQ_ACT3 equ 29h
IRQ_ACT4 equ 2Ah

TMR1_CTRL_L equ 30h
TMR1_CTRL_H equ 31h

KEY_PAD equ 52h

IO_DIR equ 60h
IO_DATA equ 61h

PRC_MODE equ 80h
PRC_RATE equ 81h

PRC_MAP_LO equ 82h
PRC_MAP_MID equ 83h
PRC_MAP_HI equ 84h

PRC_SCROLL_Y equ 85h
PRC_SCROLL_X equ 86h

PRC_SPR_LO equ 87h
PRC_SPR_MID equ 88h
PRC_SPR_HI equ 89h

PRC_CNT equ 8Ah

; System status flags

SC_Z EQU 1
SC_C EQU 2
SC_V EQU 4
SC_N EQU 8
SC_D EQU 16
SC_U EQU 32
SC_I0 EQU 64
SC_I1 EQU 128

OFF_Z EQU 0FFh^1
OFF_C EQU 0FFh^2
OFF_V EQU 0FFh^4
OFF_N EQU 0FFh^8
OFF_D EQU 0FFh^16
OFF_U EQU 0FFh^32
OFF_I0 EQU 0FFh^64
OFF_I1 EQU 0FFh^128

; Hardware Register Flags

PRC_MODE_INVERT equ 0h
PRC_MODE_COPY equ 8h

; Macros

assert MACRO condition
    IF condition == 0
        FAIL 'ASSERTION FAILED'
    ENDIF
ENDM

farcall MACRO function
    LD NB, #@CPAG(function)
    CARL function
ENDM

farjump MACRO line
    LD NB, #@CPAG(line)
    JRL line
ENDM

farloadx MACRO address
    LD IX, #@DOFF(address)
    LD XP, #@DPAG(address)
ENDM

farloady MACRO address
    LD IY, #@DOFF(address)
    LD YP, #@DPAG(address)
ENDM
