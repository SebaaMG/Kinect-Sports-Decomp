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
extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern int fn_82DF8C10();


void fn_82DF8F60(undefined8 param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  auStack_20[0] = 0;
  fn_82DF8C10(param_1,param_2 + 0x74,param_2 + 0xf4,1,auStack_1c,auStack_20);
  uVar2 = *(uint *)(param_2 + 0x54);
  *(undefined4 *)(param_2 + 0x10c) = 0x103;
  uVar5 = (ulonglong)*(byte *)(param_2 + 0x2a);
  iVar7 = (int)uVar2 / (int)(uint)*(byte *)(param_2 + 0x2a);
  lVar8 = (longlong)iVar7;
  trapWord(6,uVar5,0);
  trapWord(5,uVar5 & ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)) - 1),
           0xffff);
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      iVar7 = 0;
      lVar9 = lVar6 + (ulonglong)*(uint *)(param_2 + 0x50);
      puVar3 = (undefined1 *)lVar9;
      uVar1 = puVar3[0x10];
      puVar3[0x10] = puVar3[0x13];
      puVar3[0x13] = uVar1;
      uVar1 = puVar3[0x11];
      puVar3[0x11] = puVar3[0x12];
      puVar3[0x12] = uVar1;
      uVar1 = *puVar3;
      *puVar3 = puVar3[3];
      puVar3[3] = uVar1;
      uVar1 = puVar3[1];
      puVar3[1] = puVar3[2];
      puVar3[2] = uVar1;
      uVar1 = puVar3[4];
      puVar3[4] = puVar3[7];
      puVar3[7] = uVar1;
      uVar1 = puVar3[5];
      puVar3[5] = puVar3[6];
      puVar3[6] = uVar1;
      uVar1 = puVar3[8];
      puVar3[8] = puVar3[0xb];
      puVar3[0xb] = uVar1;
      uVar1 = puVar3[9];
      puVar3[9] = puVar3[10];
      puVar3[10] = uVar1;
      if (*(char *)(param_2 + 0x28) != '\0') {
        lVar9 = lVar9 + 0x12;
        do {
          iVar4 = (int)lVar9;
          iVar7 = iVar7 + 1;
          uVar1 = *(undefined1 *)(iVar4 + 2);
          *(undefined1 *)(iVar4 + 2) = *(undefined1 *)(iVar4 + 5);
          *(undefined1 *)(iVar4 + 5) = uVar1;
          uVar1 = *(undefined1 *)(iVar4 + 3);
          *(undefined1 *)(iVar4 + 3) = *(undefined1 *)(iVar4 + 4);
          lVar9 = lVar9 + 4;
          *(undefined1 *)lVar9 = uVar1;
        } while (iVar7 < (int)((uint)*(byte *)(param_2 + 0x28) << 1));
      }
      lVar6 = lVar6 + uVar5;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

