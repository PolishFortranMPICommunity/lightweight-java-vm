#ifndef OPCODES_H_
#define OPCODES_H_

#define aaload		0x32
#define aastore		0x53
#define aconst_null	0x01
#define aload		0x19
#define aload_0		0x2a
#define aload_1		0x2b
#define aload_2		0x2c
#define aload_3		0x2d
#define anewarray	0xbd
#define areturn		0xb0
#define arraylength	0xbe
#define astore		0x3a
#define astore_0	0x4b
#define astore_1	0x4c
#define astore_2	0x4d
#define astore_3	0x4e
#define athrow		0xbf
#define baload		0x33
#define bastore		0x54
#define bipush		0x10
#define breakpoint	0xca
#define caload		0x34
#define castore		0x55
#define checkcast	0xc0
#define d2f		0x90
#define d2i		0x8e
#define d2l		0x8f
#define dadd		0x63
#define daload		0x31
#define dastore		0x52
#define dcmpg		0x98
#define dcmpl		0x97
#define dconst_0	0x0e
#define dconst_1	0x0f
#define ddiv		0x6f
#define dload		0x18
#define dload_0		0x26
#define dload_1		0x27
#define dload_2		0x28
#define dload_3		0x29
#define dmul		0x6b
#define dneg		0x77
#define drem		0x73
#define dreturn		0xaf
#define dstore		0x39
#define dstore_0	0x47
#define dstore_1	0x48
#define dstore_2	0x49
#define dstore_3	0x4a
#define dsub		0x67
#define dup		0x59
#define dup_x1		0x5a
#define dup_x2		0x5b
#define dup2		0x5c
#define dup2_x1		0x5d
#define dup2_x2		0x5e
#define f2d		0x8d
#define f2i		0x8b
#define f2l		0x8c
#define fadd		0x62
#define faload		0x30
#define fastore		0x51
#define fcmpg		0x96
#define fcmpl		0x95
#define fconst_0	0x0b
#define fconst_1	0x0c
#define fconst_2	0x0d
#define fdiv		0x6e
#define fload		0x17
#define fload_0		0x22
#define fload_1		0x23
#define fload_2		0x24
#define fload_3		0x25
#define fmul		0x6a
#define fneg		0x76
#define frem		0x72
#define freturn		0xae
#define fstore		0x38
#define fstore_0	0x43
#define fstore_1	0x44
#define fstore_2	0x45
#define fstore_3	0x46
#define fsub		0x66
#define getfield	0xb4
#define getstatic	0xb2
#define goto		0xa7
#define goto_w		0xc8
#define i2b		0x91
#define i2c		0x92
#define i2d		0x87
#define i2f		0x86
#define i2l		0x85
#define i2s		0x93
#define iadd		0x60
#define iaload		0x2e
#define iand		0x7e
#define iastore		0x4f
#define iconst_m1	0x02
#define iconst_0	0x03
#define iconst_1	0x04
#define iconst_2	0x05
#define iconst_3	0x06
#define iconst_4	0x07
#define iconst_5	0x08
#define idiv		0x6c
#define if_acmpeq	0xa5
#define if_acmpne	0xa6
#define if_icmpeq	0x9f
#define if_icmpge	0xa2
#define if_icmpgt	0xa3
#define if_icmple	0xa4
#define if_icmplt	0xa1
#define if_icmpne	0xa0
#define ifeq		0x99
#define ifge		0x9c
#define ifgt		0x9d
#define ifle		0x9e
#define iflt		0x9b
#define ifne		0x9a
#define ifnonnull	0xc7
#define ifnull		0xc6
#define iinc		0x84
#define iload		0x15
#define iload_0		0x1a
#define iload_1		0x1b
#define iload_2		0x1c
#define iload_3		0x1d
#define impdep1		0xfe
#define impdep2		0xff
#define imul		0x68
#define ineg		0x74
#define instanceof	0xc1
#define invokedynamic	0xba
#define invokeinterface	0xb9
#define invokespecial	0xb7
#define invokestatic	0xb8
#define invokevirtual	0xb6
#define ior		0x80
#define irem		0x70
#define ireturn		0xac
#define ishl		0x78
#define ishr		0x7a
#define istore		0x36
#define istore_0	0x3b
#define istore_1	0x3c
#define istore_2	0x3d
#define istore_3	0x3e
#define isub		0x64
#define iushr		0x7c
#define ixor		0x82
#define jsr		0xa8
#define jsr_w		0xc9
#define l2d		0x8a
#define l2f		0x89
#define l2i		0x88
#define ladd		0x61
#define laload		0x2f
#define land		0x7f
#define lastore		0x50
#define lcmp		0x94
#define lconst_0	0x09
#define lconst_1	0x0a
#define ldc		0x12
#define ldc_w		0x13
#define ldc2_w		0x14
#define ldiv		0x6d
#define lload		0x16
#define lload_0		0x1e
#define lload_1		0x1f
#define lload_2		0x20
#define lload_3		0x21
#define lmul		0x69
#define lneg		0x75
#define lookupswitch	0xab
#define lor		0x81
#define lrem		0x71
#define lreturn		0xad
#define lshl		0x79
#define lshr		0x7b
#define lstore		0x37
#define lstore_0	0x3f
#define lstore_1	0x40
#define lstore_2	0x41
#define lstore_3	0x42
#define lsub		0x65
#define lushr		0x7d
#define lxor		0x83
#define monitorenter	0xc2
#define monitorexit	0xc3
#define multianewarray	0xc5
#define new		0xbb
#define newarray	0xbc
#define nop		0x00
#define pop		0x57
#define pop2		0x58
#define putfield	0xb5
#define putstatic	0xb3
#define ret		0xa9
#define return		0xb1
#define saload		0x35
#define sastore		0x56
#define sipush		0x11
#define swap		0x5f
#define tableswitch	0xaa
#define wide		0xc4
//(no name)		cb-fd

#define BREAKPOINT 	0x00 // = 202;
#define LDC_QUICK = 203;
#define LDC_W_QUICK = 204;
#define LDC2_W_QUICK = 205;
#define GETFIELD_QUICK = 206;
#define PUTFIELD_QUICK = 207;
#define GETFIELD2_QUICK = 208;
#define PUTFIELD2_QUICK = 209;
#define GETSTATIC_QUICK = 210;
#define PUTSTATIC_QUICK = 211;
#define GETSTATIC2_QUICK = 212;
#define PUTSTATIC2_QUICK = 213;
#define INVOKEVIRTUAL_QUICK = 214;
#define INVOKENONVIRTUAL_QUICK = 215;
#define INVOKESUPER_QUICK = 216;
#define INVOKESTATIC_QUICK = 217;
#define INVOKEINTERFACE_QUICK = 218;
#define INVOKEVIRTUALOBJECT_QUICK = 219;
#define NEW_QUICK = 221;
#define ANEWARRAY_QUICK = 222;
#define MULTIANEWARRAY_QUICK = 223;
#define CHECKCAST_QUICK = 224;
#define INSTANCEOF_QUICK = 225;
#define INVOKEVIRTUAL_QUICK_W = 226;
#define GETFIELD_QUICK_W = 227;
#define PUTFIELD_QUICK_W = 228;
#define IMPDEP1 = 254;
#define IMPDEP2 = 255;

#endif // OPCODES_H_

