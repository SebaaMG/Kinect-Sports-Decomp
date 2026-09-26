typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82F672D8();
extern unsigned char lbl_83156AF0[];


uint fn_828004B0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    pcVar4 = lbl_83156AF0 + uVar5 * 0x24;
    pcVar3 = "";
    do {
      cVar1 = *pcVar4;
      cVar2 = *pcVar3;
      if (cVar1 == '\0') break;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      fn_82F672D8(lbl_83156AF0 + uVar5 * 0x24,param_1,0x15);
      *(undefined4 *)(uVar5 * 0x24 + -0x7cea94f8) = param_2;
      return uVar5;
    }
    uVar5 = uVar5 + 1 & 0xffff;
    if (7 < uVar5) {
      return 0;
    }
  } while( true );
}

