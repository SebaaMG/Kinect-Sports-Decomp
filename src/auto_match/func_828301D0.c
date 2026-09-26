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


ulonglong fn_828301D0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  
  uVar1 = param_2[2];
  if (uVar1 == param_3[2]) {
    uVar6 = param_2[3];
    uVar4 = param_3[3];
    if (uVar6 == uVar4) {
      uVar6 = (uint)*(byte *)(param_2 + 4);
      uVar4 = (uint)*(byte *)(param_3 + 4);
      if (uVar6 == uVar4) {
        uVar6 = (uint)*(byte *)((int)param_2 + 0x11);
        uVar4 = (uint)*(byte *)((int)param_3 + 0x11);
        if (uVar6 == uVar4) {
          pbVar5 = (byte *)*param_3;
          uVar3 = 0;
          pbVar7 = (byte *)*param_2;
          if (uVar1 != 0) {
            pbVar2 = pbVar7 + uVar1;
            do {
              uVar3 = (ulonglong)*pbVar7 - (ulonglong)*pbVar5;
              if (uVar3 != 0) break;
              pbVar7 = pbVar7 + 1;
              pbVar5 = pbVar5 + 1;
            } while (pbVar7 != pbVar2);
          }
          return (uVar3 & 0xffffffff) >> 0x1f;
        }
      }
    }
    bVar8 = uVar4 <= uVar6;
  }
  else {
    bVar8 = (uint)param_3[2] <= uVar1;
  }
  return -(ulonglong)!bVar8 & 1;
}

