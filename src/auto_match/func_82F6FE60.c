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


int fn_82F6FE60(short *param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  short sVar3;
  
  psVar2 = param_1;
  if (*param_1 != 0) {
    do {
      if (*param_2 != 0) {
        psVar1 = param_2;
        sVar3 = *param_2;
        do {
          if (sVar3 == *psVar2) goto code_r0x82f6fea8;
          psVar1 = psVar1 + 1;
          sVar3 = *psVar1;
        } while (sVar3 != 0);
      }
      psVar2 = psVar2 + 1;
    } while (*psVar2 != 0);
  }
code_r0x82f6fea8:
  return (int)psVar2 - (int)param_1 >> 1;
}

