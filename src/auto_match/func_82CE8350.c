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
extern int fn_82CE5410();
extern int fn_82CFBA90();
extern int fn_82CFBAD0();


void fn_82CE8350(int param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar5;
  int iVar6;
  ulonglong uVar4;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  
  iVar14 = *(int *)(param_1 + 0x68);
  iVar8 = 1;
  if (iVar14 != 0) {
    iVar8 = iVar14;
  }
  iVar6 = *(int *)(param_1 + 0x18c) + iVar8;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0x30) = iVar8;
  *(int *)(param_1 + 0x54) = iVar6;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x18c);
  *(int *)(param_1 + 0x34) = iVar6;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x28) + iVar6;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((iVar14 == 0) && (iVar14 = 0, 0 < *(int *)(param_1 + 0x60))) {
    do {
      *(char *)(param_1 + 0xd0 + iVar14) = (char)*(undefined4 *)(param_1 + 0x2c);
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(param_1 + 0x60));
  }
  iVar14 = 0;
  if (0 < iVar8) {
    do {
      iVar6 = 0;
      iVar5 = *(int *)(param_1 + 0x2c) + iVar14;
      iVar10 = iVar5 * 0x11 + param_1;
      *(char *)(iVar10 + 0x8c) = (char)iVar5;
      pcVar11 = (char *)(iVar10 + 0x8d);
      if (0 < *(int *)(param_1 + 0x28)) {
        do {
          cVar1 = (char)iVar6;
          iVar6 = iVar6 + 1;
          *pcVar11 = (char)*(undefined4 *)(param_1 + 0x34) + cVar1;
          pcVar11 = pcVar11 + 1;
        } while (iVar6 < *(int *)(param_1 + 0x28));
      }
      if ((*(int *)(param_1 + 0x5c) == 0) && (iVar6 = 0, 0 < *(int *)(param_1 + 0x28))) {
        do {
          iVar5 = iVar6 + 1;
          *pcVar11 = (char)iVar6;
          pcVar11 = pcVar11 + 1;
          iVar6 = iVar5;
        } while (iVar5 < *(int *)(param_1 + 0x28));
      }
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 0x4c)) {
        do {
          cVar1 = (char)iVar6;
          iVar6 = iVar6 + 1;
          *pcVar11 = (char)*(undefined4 *)(param_1 + 0x30) + cVar1;
          pcVar11 = pcVar11 + 1;
        } while (iVar6 < *(int *)(param_1 + 0x4c));
      }
      iVar14 = iVar14 + 1;
      *pcVar11 = -1;
    } while (iVar14 < iVar8);
  }
  iVar14 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    iVar8 = 0;
    pbVar12 = (byte *)(param_1 + 0x41);
    do {
      *(undefined4 *)(pbVar12 + -5) = *(undefined4 *)(iVar8 + *(int *)(param_1 + 0x188));
      pbVar12[-1] = *(byte *)(iVar8 + *(int *)(param_1 + 0x188) + 4);
      bVar2 = (char)*(undefined4 *)(param_1 + 0x30) + (char)iVar14;
      *pbVar12 = bVar2;
      iVar6 = *(int *)(iVar8 + *(int *)(param_1 + 0x188) + 8) + param_1;
      cVar1 = *(char *)(iVar6 + 0xd0);
      *(byte *)(iVar6 + 0xd0) = bVar2;
      iVar6 = *(int *)(param_1 + 0x30) + iVar14;
      iVar5 = iVar6 * 0x11 + param_1;
      pcVar11 = (char *)(cVar1 * 0x11 + param_1 + 0x8c);
      *(char *)(iVar5 + 0x8c) = (char)iVar6;
      pcVar9 = (char *)(iVar5 + 0x8d);
      cVar1 = *pcVar11;
      while (cVar1 != -1) {
        if ((int)*pcVar11 != (uint)*pbVar12) {
          *pcVar9 = *pcVar11;
          pcVar9 = pcVar9 + 1;
        }
        pcVar11 = pcVar11 + 1;
        cVar1 = *pcVar11;
      }
      iVar14 = iVar14 + 1;
      *pcVar9 = -1;
      iVar8 = iVar8 + 0xc;
      pbVar12 = pbVar12 + 8;
    } while (iVar14 < *(int *)(param_1 + 0x4c));
  }
  bVar3 = false;
  iVar14 = *(int *)(param_1 + 0x34);
  iVar8 = 1;
  *(int *)(param_1 + 0x58) = (int)*(char *)(param_1 + 0xd0);
  if (1 < *(int *)(param_1 + 0x60)) {
    do {
      if ((int)(char)((undefined1 *)(param_1 + 0xd0))[iVar8] == (int)*(char *)(param_1 + 0xd0)) {
        bVar3 = true;
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x60));
  }
  iVar8 = iVar14;
  if (bVar3) {
    iVar8 = iVar14 + 1;
    *(undefined1 *)(param_1 + 0xd0) = (char)iVar14;
  }
  if ((*(char *)(param_1 + 0x74) != '\0') && (iVar14 = 0, 0 < *(int *)(param_1 + 0x88))) {
    piVar15 = (int *)(param_1 + 0x78);
    do {
      iVar6 = *piVar15;
      if (iVar6 != 0) {
        fn_82CFBAD0(iVar6);
        iVar5 = fn_82CE5410();
        (**(code **)(**(int **)(iVar5 + 0x10) + 8))(*(int **)(iVar5 + 0x10),iVar6,4);
      }
      iVar14 = iVar14 + 1;
      piVar15 = piVar15 + 1;
    } while (iVar14 < *(int *)(param_1 + 0x88));
  }
  iVar14 = 0;
  *(int *)(param_1 + 0x88) = iVar8;
  if (0 < iVar8) {
    iVar8 = 0x22;
    puVar13 = (undefined4 *)(param_1 + 0x74);
    do {
      *(undefined2 *)(iVar8 + *(int *)(param_1 + 0x1c)) = 0;
      iVar6 = fn_82CE5410();
      uVar4 = (**(code **)(**(int **)(iVar6 + 0x10) + 4))(*(int **)(iVar6 + 0x10),4);
      if ((uVar4 & 0xffffffff) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = fn_82CFBA90(uVar4,0,1000);
      }
      puVar13 = puVar13 + 1;
      *puVar13 = uVar7;
      iVar14 = iVar14 + 1;
      iVar8 = iVar8 + 2;
    } while (iVar14 < *(int *)(param_1 + 0x88));
  }
  *(undefined1 *)(param_1 + 0x74) = 1;
  return;
}

