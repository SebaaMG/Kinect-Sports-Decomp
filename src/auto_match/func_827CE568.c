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
extern unsigned int *auStack_140;


void fn_827CE568(int param_1,int param_2,int param_3,short *param_4,int param_5,int param_6,
                  ulonglong param_7)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar7;
  ulonglong uVar6;
  short sVar8;
  uint *puVar10;
  ulonglong uVar9;
  longlong lVar11;
  uint auStack_140 [80];
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x158) + 8);
  iVar3 = *(int *)((*(int *)(param_2 + 0x10) + 3) * 4 + *(int *)(param_1 + 0x158));
  if ((param_7 & 0xffffffff) != 0) {
    do {
      puVar10 = auStack_140;
      piVar5 = (int *)(param_5 * 4 + param_3 + -4);
      lVar11 = 8;
      do {
        piVar5 = piVar5 + 1;
        iVar7 = *piVar5 + param_6;
        *puVar10 = *(byte *)(*piVar5 + param_6) - 0x80;
        puVar10[1] = *(byte *)(iVar7 + 1) - 0x80;
        puVar10[2] = *(byte *)(iVar7 + 2) - 0x80;
        puVar10[3] = *(byte *)(iVar7 + 3) - 0x80;
        puVar10[4] = *(byte *)(iVar7 + 4) - 0x80;
        puVar10[5] = *(byte *)(iVar7 + 5) - 0x80;
        puVar10[6] = *(byte *)(iVar7 + 6) - 0x80;
        puVar10[7] = *(byte *)(iVar7 + 7) - 0x80;
        puVar10 = puVar10 + 8;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      (*pcVar1)(auStack_140);
      puVar10 = auStack_140;
      lVar11 = 0x40;
      do {
        uVar2 = *puVar10;
        uVar4 = *(uint *)((iVar3 - (int)auStack_140) + (int)puVar10);
        uVar9 = (ulonglong)uVar4;
        if ((int)uVar2 < 0) {
          uVar6 = (longlong)((int)uVar4 >> 1) - (ulonglong)uVar2;
          if ((int)uVar6 < (int)uVar4) {
            sVar8 = 0;
          }
          else {
            sVar8 = (short)((int)uVar6 / (int)uVar4);
            trapWord(6,uVar9,0);
            trapWord(5,uVar9 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f) - 1),
                     0xffff);
          }
          sVar8 = -sVar8;
        }
        else {
          uVar6 = (longlong)((int)uVar4 >> 1) + (ulonglong)uVar2;
          if ((int)uVar6 < (int)uVar4) {
            sVar8 = 0;
          }
          else {
            sVar8 = (short)((int)uVar6 / (int)uVar4);
            trapWord(6,uVar9,0);
            trapWord(5,uVar9 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f) - 1),
                     0xffff);
          }
        }
        *param_4 = sVar8;
        puVar10 = puVar10 + 1;
        param_4 = param_4 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      param_7 = param_7 - 1;
      param_6 = param_6 + 8;
    } while (param_7 != 0);
  }
  return;
}

