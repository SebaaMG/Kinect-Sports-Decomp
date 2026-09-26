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


ushort * fn_82A26C08(int param_1,ushort *param_2,int *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  ulonglong uVar6;
  ushort *puVar7;
  
  puVar7 = param_2 + (uint)param_2[1] * -8;
  if (puVar7 != param_2) {
    if (((*(byte *)((int)puVar7 + 5) & 1) == 0) && ((uint)*puVar7 + *param_3 < 0xf001)) {
      if (param_4 != 0) {
        puVar3 = *(undefined4 **)(param_2 + 6);
        puVar4 = *(undefined4 **)(param_2 + 4);
        if (((ushort *)*puVar3 == (ushort *)puVar4[1]) && ((ushort *)*puVar3 == param_2 + 4)) {
          *puVar3 = puVar4;
          puVar4[1] = puVar3;
          if (puVar4 == puVar3) {
            uVar2 = *param_2;
            if (uVar2 < 0x80) {
              iVar5 = ((uVar2 >> 5) + 0x58) * 4;
              *(uint *)(iVar5 + param_1) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar5 + param_1);
            }
          }
        }
        if ((*(byte *)((int)param_2 + 5) & 4) != 0) {
          uVar6 = (ulonglong)*param_2 * 0x10 - 0x18;
          if (((*(byte *)((int)param_2 + 5) & 2) != 0) && (4 < (uVar6 & 0xffffffff))) {
            uVar6 = (ulonglong)*param_2 * 0x10 - 0x1c;
          }
          RtlCompareMemoryUlong(param_2 + 0xc,uVar6,0xfffffffffeeefeee);
        }
        param_4 = 0;
        *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (uint)*param_2;
      }
      puVar3 = *(undefined4 **)(puVar7 + 6);
      puVar4 = *(undefined4 **)(puVar7 + 4);
      if (((ushort *)*puVar3 == (ushort *)puVar4[1]) && ((ushort *)*puVar3 == puVar7 + 4)) {
        *puVar3 = puVar4;
        puVar4[1] = puVar3;
        if (puVar4 == puVar3) {
          uVar2 = *puVar7;
          if (uVar2 < 0x80) {
            iVar5 = ((uVar2 >> 5) + 0x58) * 4;
            *(uint *)(iVar5 + param_1) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar5 + param_1);
          }
        }
      }
      if ((*(byte *)((int)puVar7 + 5) & 4) != 0) {
        uVar6 = (ulonglong)*puVar7 * 0x10 - 0x18;
        if (((*(byte *)((int)puVar7 + 5) & 2) != 0) && (4 < (uVar6 & 0xffffffff))) {
          uVar6 = (ulonglong)*puVar7 * 0x10 - 0x1c;
        }
        RtlCompareMemoryUlong(puVar7 + 0xc,uVar6,0xfffffffffeeefeee);
      }
      bVar1 = *(byte *)((int)param_2 + 5);
      *(byte *)((int)puVar7 + 5) = bVar1 & 0x10;
      if ((bVar1 & 0x10) != 0) {
        *(ushort **)(*(int *)((*(byte *)(puVar7 + 2) + 0x18) * 4 + param_1) + 0x40) = puVar7;
      }
      *param_3 = (uint)*puVar7 + *param_3;
      *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (uint)*puVar7;
      *puVar7 = (ushort)*param_3;
      param_2 = puVar7;
      if ((*(byte *)((int)puVar7 + 5) & 0x10) == 0) {
        puVar7[*param_3 * 8 + 1] = (ushort)*param_3;
      }
    }
  }
  if ((*(byte *)((int)param_2 + 5) & 0x10) == 0) {
    puVar7 = param_2 + *param_3 * 8;
    if (((*(byte *)((int)puVar7 + 5) & 1) == 0) && ((uint)*puVar7 + *param_3 < 0xf001)) {
      if (param_4 != 0) {
        puVar3 = *(undefined4 **)(param_2 + 6);
        puVar4 = *(undefined4 **)(param_2 + 4);
        if (((ushort *)*puVar3 == (ushort *)puVar4[1]) && ((ushort *)*puVar3 == param_2 + 4)) {
          *puVar3 = puVar4;
          puVar4[1] = puVar3;
          if (puVar4 == puVar3) {
            uVar2 = *param_2;
            if (uVar2 < 0x80) {
              iVar5 = ((uVar2 >> 5) + 0x58) * 4;
              *(uint *)(iVar5 + param_1) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar5 + param_1);
            }
          }
        }
        if ((*(byte *)((int)param_2 + 5) & 4) != 0) {
          uVar6 = (ulonglong)*param_2 * 0x10 - 0x18;
          if (((*(byte *)((int)param_2 + 5) & 2) != 0) && (4 < (uVar6 & 0xffffffff))) {
            uVar6 = (ulonglong)*param_2 * 0x10 - 0x1c;
          }
          RtlCompareMemoryUlong(param_2 + 0xc,uVar6,0xfffffffffeeefeee);
        }
        *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (uint)*param_2;
      }
      bVar1 = *(byte *)((int)puVar7 + 5);
      *(byte *)((int)param_2 + 5) = bVar1 & 0x10;
      if ((bVar1 & 0x10) != 0) {
        *(ushort **)(*(int *)((*(byte *)(param_2 + 2) + 0x18) * 4 + param_1) + 0x40) = param_2;
      }
      puVar3 = *(undefined4 **)(puVar7 + 6);
      puVar4 = *(undefined4 **)(puVar7 + 4);
      if (((ushort *)*puVar3 == (ushort *)puVar4[1]) && ((ushort *)*puVar3 == puVar7 + 4)) {
        *puVar3 = puVar4;
        puVar4[1] = puVar3;
        if (puVar4 == puVar3) {
          uVar2 = *puVar7;
          if (uVar2 < 0x80) {
            iVar5 = ((uVar2 >> 5) + 0x58) * 4;
            *(uint *)(iVar5 + param_1) = 1 << (uVar2 & 0x1f) ^ *(uint *)(iVar5 + param_1);
          }
        }
      }
      if ((*(byte *)((int)puVar7 + 5) & 4) != 0) {
        uVar6 = (ulonglong)*puVar7 * 0x10 - 0x18;
        if (((*(byte *)((int)puVar7 + 5) & 2) != 0) && (4 < (uVar6 & 0xffffffff))) {
          uVar6 = (ulonglong)*puVar7 * 0x10 - 0x1c;
        }
        RtlCompareMemoryUlong(puVar7 + 0xc,uVar6,0xfffffffffeeefeee);
      }
      *param_3 = (uint)*puVar7 + *param_3;
      *(uint *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (uint)*puVar7;
      *param_2 = (ushort)*param_3;
      if ((*(byte *)((int)param_2 + 5) & 0x10) == 0) {
        param_2[*param_3 * 8 + 1] = (ushort)*param_3;
      }
    }
  }
  return param_2;
}

