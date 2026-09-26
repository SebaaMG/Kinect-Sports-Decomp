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


void fn_828EA180(uint *param_1,int param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  
  if (0 < (int)param_3) {
    pbVar9 = (byte *)(param_2 + -1);
    do {
      uVar2 = *param_1;
      uVar4 = 8;
      uVar6 = 0;
      uVar8 = 0;
      if ((uVar2 == 0) || (uVar2 + 8 < 8)) {
LAB_828ea1f0:
        uVar10 = (ulonglong)(uVar4 >> 3);
        uVar3 = param_1[2];
        uVar4 = uVar4 - (uVar4 & 0xfffffff8);
        do {
          uVar5 = param_1[1] + 1;
          bVar7 = *(byte *)(param_1[1] + uVar3);
          param_1[1] = uVar5;
          uVar6 = (uint)bVar7 << (uVar8 & 0x3f) | uVar6;
          bVar7 = (byte)uVar6;
          uVar8 = uVar8 + 8;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      else {
        uVar8 = 8 - uVar2;
        uVar3 = param_1[2];
        uVar5 = param_1[1] + 1;
        uVar4 = 8 - uVar8;
        bVar7 = *(byte *)(param_1[1] + uVar3);
        param_1[1] = uVar5;
        bVar7 = bVar7 >> (uVar2 & 0x3f);
        uVar6 = (uint)bVar7;
        *param_1 = 0;
        if (7 < (int)uVar4) goto LAB_828ea1f0;
      }
      if (0 < (int)uVar4) {
        uVar2 = *param_1;
        bVar1 = *(byte *)(uVar5 + uVar3);
        *param_1 = uVar2 + uVar4;
        bVar7 = (byte)(((uint)(bVar1 >> (uVar2 & 0x3f)) & ~(-1 << (uVar4 & 0x3f))) << (uVar8 & 0x3f)
                      ) | bVar7;
      }
      param_3 = param_3 + -1;
      pbVar9 = pbVar9 + 1;
      *pbVar9 = bVar7;
    } while (0 < param_3);
  }
  return;
}

