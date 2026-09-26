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
extern unsigned int lbl_820520F4;


longlong fn_829AB1D8(int param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_3 < 9) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else {
    param_3 = 8;
  }
  if (7 < param_2) {
    return 0;
  }
  if (8 < param_2 + param_3) {
    param_3 = 8 - param_2;
  }
  pbVar3 = (byte *)(param_1 + param_2);
  pbVar2 = &lbl_820520F4 + param_2;
  if (param_3 != 0) {
    pbVar1 = pbVar3 + param_3;
    do {
      if ((ulonglong)*pbVar3 - (ulonglong)*pbVar2 != 0) {
        return (ulonglong)*pbVar3 - (ulonglong)*pbVar2;
      }
      pbVar3 = pbVar3 + 1;
      pbVar2 = pbVar2 + 1;
    } while (pbVar3 != pbVar1);
    return 0;
  }
  return 0;
}

