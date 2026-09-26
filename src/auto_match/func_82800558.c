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
extern unsigned int lbl_8201DECC;
extern unsigned char lbl_83156AF0[];
extern unsigned int uRam83156b08;


undefined8 fn_82800558(char *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = param_1;
  pcVar4 = lbl_83156AF0;
code_r0x82800568:
  do {
    cVar1 = *pcVar4;
    cVar2 = *pcVar3;
    if (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
      if (cVar1 == cVar2) goto code_r0x82800568;
    }
    pcVar3 = param_1;
    pcVar4 = lbl_83156AF0;
    if (cVar1 == cVar2) {
      uRam83156b08 = 0;
      lbl_83156AF0[0] = lbl_8201DECC;
      return 0;
    }
  } while( true );
}

