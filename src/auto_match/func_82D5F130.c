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
extern unsigned int *auStack_74;
extern unsigned int *auStack_90;
extern unsigned int *auStack_9c;


void fn_82D5F130(int param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined4 auStack_9c [3];
  undefined4 auStack_90 [7];
  uint auStack_74 [29];
  
  do {
    uVar4 = param_2 + param_3 >> 1;
    iVar10 = uVar4 * 0x20 + param_1;
    lVar14 = 2;
    puVar9 = (undefined4 *)(iVar10 + -4);
    puVar13 = (undefined4 *)((int)auStack_74 + ((iVar10 + (uVar4 & 0x7ffffff) * -0x20) - param_1));
    do {
      puVar12 = puVar9 + 1;
      uVar1 = puVar9[2];
      uVar2 = puVar9[3];
      puVar9 = puVar9 + 4;
      uVar3 = *puVar9;
      puVar13[1] = *puVar12;
      puVar13[2] = uVar1;
      puVar13[3] = uVar2;
      puVar13 = puVar13 + 4;
      *puVar13 = uVar3;
      lVar14 = lVar14 + -1;
      iVar10 = param_2;
      iVar6 = param_3;
    } while (lVar14 != 0);
    do {
      puVar11 = (uint *)(iVar10 * 0x20 + param_1);
      uVar4 = *puVar11;
      while (uVar4 < auStack_74[1]) {
        puVar11 = puVar11 + 8;
        iVar10 = iVar10 + 1;
        uVar4 = *puVar11;
      }
      puVar11 = (uint *)(iVar6 * 0x20 + param_1);
      uVar4 = *puVar11;
      while (auStack_74[1] < uVar4) {
        puVar11 = puVar11 + -8;
        iVar6 = iVar6 + -1;
        uVar4 = *puVar11;
      }
      if (iVar6 < iVar10) break;
      if (iVar6 != iVar10) {
        iVar8 = iVar6 * 0x20 + param_1;
        puVar13 = (undefined4 *)(iVar8 + 8);
        iVar7 = iVar10 * 0x20 + param_1;
        lVar14 = 2;
        puVar9 = (undefined4 *)(iVar8 + -4);
        puVar12 = auStack_90 + 2;
        do {
          puVar5 = puVar9 + 2;
          uVar1 = puVar9[3];
          uVar3 = *(undefined4 *)((iVar8 - (int)(auStack_90 + 2)) + (int)puVar12);
          puVar9 = puVar9 + 4;
          uVar2 = *puVar9;
          puVar12[-1] = *puVar5;
          *puVar12 = uVar1;
          puVar12[-2] = uVar3;
          puVar12[1] = uVar2;
          puVar12 = puVar12 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        puVar9 = (undefined4 *)(iVar7 + -4);
        lVar14 = 2;
        do {
          puVar13[-2] = puVar9[1];
          puVar13[-1] = puVar9[2];
          *puVar13 = *(undefined4 *)((iVar7 - iVar8) + (int)puVar13);
          puVar9 = puVar9 + 4;
          puVar13[1] = *puVar9;
          puVar13 = puVar13 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        puVar9 = auStack_9c;
        lVar14 = 2;
        puVar13 = (undefined4 *)(iVar7 + 8);
        do {
          puVar12 = puVar9 + 3;
          uVar2 = *(undefined4 *)((int)auStack_90 + -iVar7 + (int)puVar13);
          uVar3 = *(undefined4 *)((int)auStack_90 + -iVar7 + 4 + (int)puVar13);
          puVar9 = puVar9 + 4;
          uVar1 = *puVar9;
          puVar13[-2] = *puVar12;
          *puVar13 = uVar2;
          puVar13[1] = uVar3;
          puVar13[-1] = uVar1;
          puVar13 = puVar13 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      iVar6 = iVar6 + -1;
      iVar10 = iVar10 + 1;
    } while (iVar10 <= iVar6);
    if (param_2 < iVar6) {
      fn_82D5F130(param_1,param_2,iVar6,param_4);
    }
    param_2 = iVar10;
    if (param_3 <= iVar10) {
      return;
    }
  } while( true );
}

