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
extern unsigned int *auStack_a0;
extern unsigned int uStack_a8;


void fn_82F44C18(int param_1,uint param_2,int param_3,int *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uStack_a8;
  uint auStack_a0 [40];
  
  puVar5 = &uStack_a8;
  iVar10 = 0;
  lVar12 = 10;
  do {
    puVar5 = puVar5 + 1;
    *puVar5 = 0;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  iVar8 = 0;
  auStack_a0[0] = 0x100000;
  if (0 < param_3) {
    piVar9 = (int *)(param_1 + (param_2 & 0x3fffffff) * -4);
    do {
      piVar9 = piVar9 + param_2;
      iVar2 = *piVar9;
      if (0x13 < iVar2) {
        return;
      }
      uVar3 = 1 << (0x14U - iVar2 & 0x3f);
      uVar1 = auStack_a0[iVar2];
      *param_4 = (int)uVar1 >> (0x14U - iVar2 & 0x3f);
      param_4 = param_4 + param_5;
      if ((uVar3 & uVar1) == 0) {
        uVar11 = uVar3 + uVar1;
      }
      else {
        uVar11 = auStack_a0[iVar2 + -1];
      }
      auStack_a0[iVar2] = uVar11;
      if (uVar11 == 0x100000) {
        iVar10 = iVar2;
      }
      iVar4 = iVar2 + -1;
      if (iVar10 < iVar4) {
        puVar7 = auStack_a0 + iVar4;
        do {
          uVar6 = *puVar7;
          if (uVar6 != uVar1) break;
          uVar3 = uVar3 * 2;
          if ((uVar6 & uVar3) == 0) {
            uVar6 = uVar6 + uVar3;
          }
          else {
            uVar6 = puVar7[-1];
          }
          *puVar7 = uVar6;
          if (uVar6 == 0x100000) {
            iVar10 = iVar4;
          }
          iVar4 = iVar4 + -1;
          puVar7 = puVar7 + -1;
        } while (iVar10 < iVar4);
      }
      iVar4 = iVar2 + 1;
      if (iVar4 < 0x14) {
        puVar7 = auStack_a0 + iVar2;
        do {
          if (puVar7[1] != uVar1) break;
          iVar4 = iVar4 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = uVar11;
        } while (iVar4 < 0x14);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_3);
  }
  return;
}

