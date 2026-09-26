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
extern unsigned int lbl_82196582;


void fn_82A9C190(int param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  int *piVar5;
  byte *pbVar6;
  int *piVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  
  *(undefined4 *)(param_1 + 0xa0) = 0x4e4a0000;
  if (*(int *)(param_1 + 0x90) < 0) {
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  else {
    pbVar6 = *(byte **)(param_1 + 0x38);
    uVar3 = 1;
    pbVar4 = pbVar6 + *(int *)(param_1 + 0x3c) * 0x28;
    for (; pbVar6 < pbVar4; pbVar6 = pbVar6 + 0x28) {
      if (pbVar6 != (byte *)0x0) {
        bVar1 = *pbVar6;
        pbVar9 = pbVar6;
        while (bVar1 != 0) {
          pbVar9 = pbVar9 + 1;
          uVar3 = uVar3 * 0xb319f4f3 + (uVar3 >> 0x13) + (ulonglong)bVar1 ^ uVar3 >> 0x2f;
          bVar1 = *pbVar9;
        }
      }
      pbVar9 = pbVar6 + 0x20;
      if (pbVar6 != (byte *)0xffffffe0) {
        bVar1 = *pbVar9;
        while (bVar1 != 0) {
          pbVar9 = pbVar9 + 1;
          uVar3 = uVar3 * 0xb319f4f3 + (uVar3 >> 0x13) + (ulonglong)bVar1 ^ uVar3 >> 0x2f;
          bVar1 = *pbVar9;
        }
      }
    }
    piVar7 = *(int **)(param_1 + 0x20);
    piVar5 = piVar7 + *(int *)(param_1 + 0x24) * 2;
    if (piVar7 < piVar5) {
      do {
        pbVar6 = &lbl_82196582;
        if (*piVar7 != -1) {
          pbVar6 = (byte *)(*(int *)(param_1 + 0x2c) + *piVar7);
        }
        if (pbVar6 != (byte *)0x0) {
          bVar1 = *pbVar6;
          while (bVar1 != 0) {
            pbVar6 = pbVar6 + 1;
            uVar3 = uVar3 * 0xb319f4f3 + (uVar3 >> 0x13) + (ulonglong)bVar1 ^ uVar3 >> 0x2f;
            bVar1 = *pbVar6;
          }
        }
        pbVar6 = &lbl_82196582;
        if (piVar7[1] != -1) {
          pbVar6 = (byte *)(*(int *)(param_1 + 0x2c) + piVar7[1]);
        }
        if (pbVar6 != (byte *)0x0) {
          bVar1 = *pbVar6;
          while (bVar1 != 0) {
            pbVar6 = pbVar6 + 1;
            uVar3 = uVar3 * 0xb319f4f3 + (uVar3 >> 0x13) + (ulonglong)bVar1 ^ uVar3 >> 0x2f;
            bVar1 = *pbVar6;
          }
        }
        piVar7 = piVar7 + 2;
      } while (piVar7 < piVar5);
    }
    uVar10 = *(uint *)(param_1 + 4);
    uVar8 = *(int *)(param_1 + 8) * 0x114 + uVar10;
    for (; uVar10 < uVar8; uVar10 = uVar10 + 0x114) {
      pbVar6 = *(byte **)(uVar10 + 0x110);
      if (pbVar6 != (byte *)0x0) {
        bVar1 = *pbVar6;
        while (bVar1 != 0) {
          if ((((bVar1 != 0x20) && (bVar1 != 10)) && (bVar1 != 0xd)) && (bVar1 != 9)) {
            uVar3 = uVar3 * 0xb319f4f3 + (uVar3 >> 0x13) + (ulonglong)bVar1 ^ uVar3 >> 0x2f;
          }
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
        }
      }
    }
    if (param_2 != (byte *)0x0) {
      bVar1 = *param_2;
      while (bVar1 != 0) {
        param_2 = param_2 + 1;
        uVar3 = uVar3 * 0xb319f4f3 + (uVar3 >> 0x13) + (ulonglong)bVar1 ^ uVar3 >> 0x2f;
        bVar1 = *param_2;
      }
      uVar2 = uVar3 * 0xb319f4f3 + (uVar3 >> 0x13) + (param_3 & 0xff);
      uVar3 = ((param_3 & 0xffffffff) >> 8 & 0xff) + (uVar2 ^ uVar3 >> 0x2f) * 0xb319f4f3 +
              (uVar2 >> 0x13);
      uVar2 = ((param_3 & 0xffffffff) >> 0x10 & 0xff) + (uVar3 ^ uVar2 >> 0x2f) * 0xb319f4f3 +
              (uVar3 >> 0x13);
      uVar3 = ((param_3 & 0xffffffff) >> 0x18) + (uVar2 ^ uVar3 >> 0x2f) * 0xb319f4f3 +
              (uVar2 >> 0x13) ^ uVar2 >> 0x2f;
    }
    *(int *)(param_1 + 0xa4) = (int)(uVar3 >> 0x20);
  }
  *(int *)(param_1 + 0xa8) = (int)uVar3;
  return;
}

