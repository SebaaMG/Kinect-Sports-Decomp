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


bool fn_826EB300(int param_1,uint param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  
  if ((param_2 != *(byte *)(param_1 + 0x5c)) || (param_4 != *(byte *)(param_1 + 0x5d))) {
    return false;
  }
  if (param_4 < 7) {
    pbVar4 = (byte *)(param_1 + 0x5e);
    lVar3 = 0;
    if (param_4 != 0) {
      pbVar1 = param_3 + param_4;
      do {
        lVar3 = (ulonglong)*param_3 - (ulonglong)*pbVar4;
        if (lVar3 != 0) break;
        param_3 = param_3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (param_3 != pbVar1);
    }
    iVar2 = (int)lVar3;
  }
  else {
    pbVar4 = *(byte **)(param_1 + 0x60);
    lVar3 = 0;
    if (param_4 != 0) {
      pbVar1 = pbVar4 + param_4;
      do {
        lVar3 = (ulonglong)*pbVar4 - (ulonglong)*param_3;
        if (lVar3 != 0) break;
        pbVar4 = pbVar4 + 1;
        param_3 = param_3 + 1;
      } while (pbVar4 != pbVar1);
    }
    iVar2 = (int)lVar3;
  }
  return iVar2 == 0;
}

