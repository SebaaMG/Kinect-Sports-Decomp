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


uint fn_82536D88(byte *param_1,byte *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  byte *pbVar2;
  longlong lVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_4 == 0) {
    if (param_3 < uVar1) {
      uVar1 = param_3;
    }
  }
  else {
    if (param_4 <= uVar1) {
      uVar5 = uVar1 - param_4;
      if (param_3 < uVar1 - param_4) {
        uVar5 = param_3;
      }
      uVar1 = *(uint *)(param_1 + 0x14);
      pbVar2 = param_1;
      if (0xf < uVar1) {
        pbVar2 = *(byte **)param_1;
      }
      pbVar2 = pbVar2 + uVar5;
      do {
        if (*pbVar2 == *param_2) {
          lVar3 = 0;
          if (param_4 != 0) {
            pbVar4 = param_2;
            pbVar6 = pbVar2;
            do {
              lVar3 = (ulonglong)*pbVar6 - (ulonglong)*pbVar4;
              if (lVar3 != 0) break;
              pbVar6 = pbVar6 + 1;
              pbVar4 = pbVar4 + 1;
            } while (pbVar6 != pbVar2 + param_4);
          }
          if ((int)lVar3 == 0) {
            if (0xf < uVar1) {
              param_1 = *(byte **)param_1;
            }
            return (int)pbVar2 - (int)param_1;
          }
        }
        pbVar4 = param_1;
        if (0xf < uVar1) {
          pbVar4 = *(byte **)param_1;
        }
        if (pbVar2 == pbVar4) break;
        pbVar2 = pbVar2 + -1;
      } while( true );
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

