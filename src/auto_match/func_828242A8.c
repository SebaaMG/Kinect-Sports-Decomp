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
extern unsigned int lbl_83156E80;


undefined8 fn_828242A8(char *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined **ppuVar4;
  char *pcVar5;
  char *pcVar6;
  
  uVar3 = 0;
  ppuVar4 = &lbl_83156E80;
  do {
    pcVar5 = *ppuVar4;
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      cVar2 = *pcVar5;
      if (cVar1 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      return 1;
    }
    uVar3 = uVar3 + 4;
    ppuVar4 = ppuVar4 + 1;
    if (0x3b < uVar3) {
      return 0;
    }
  } while( true );
}

