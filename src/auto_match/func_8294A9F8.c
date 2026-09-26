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
extern unsigned int *auStack_90;


undefined8
fn_8294A9F8(int param_1,uint *param_2,int *param_3,uint param_4,uint *param_5,uint *param_6,
             int param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  uint auStack_90 [36];
  
  uVar6 = *param_2;
  auStack_90[0] = 0;
  auStack_90[1] = 0;
  auStack_90[2] = 0;
  auStack_90[3] = 0;
  if (((uVar6 & 0xfff00000) == 0x50000000) || ((uVar6 & 0xfff00000) == 0x70800000)) {
    uVar9 = 0;
    lVar12 = 4;
    do {
      if (uVar9 < (uVar6 & 0xfffff)) {
        *param_6 = uVar9;
      }
      else {
        *param_6 = 0xff;
      }
      uVar9 = uVar9 + 1;
      param_6 = param_6 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    uVar6 = 0;
    if (param_4 != 0) {
      do {
        iVar1 = *(int *)(*param_3 * 4 + *(int *)(param_1 + 0x14));
        if ((*param_3 != *(int *)param_2[4]) || (*(int *)(iVar1 + 0x3c) != param_7)) {
          if (*(int *)(iVar1 + 0x38) != *(int *)param_2[4]) {
            return 1;
          }
          if (*(int *)(iVar1 + 0x3c) != param_7) {
            return 1;
          }
        }
        uVar6 = uVar6 + 1;
        param_3 = param_3 + 1;
      } while (uVar6 < param_4);
    }
  }
  else {
    uVar9 = 0;
    if (param_4 != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      puVar10 = param_5;
      do {
        bVar5 = false;
        iVar4 = *(int *)(*(int *)(((int)param_3 - (int)param_5) + (int)puVar10) * 4 + iVar1);
        uVar7 = uVar9;
        if ((param_8 == 0) || (uVar7 = *puVar10, uVar7 < 4)) {
          uVar2 = param_2[3];
          uVar11 = 0;
          if (uVar2 == 0) {
            return 1;
          }
          iVar8 = 0;
          do {
            if (((param_3[uVar7] == *(int *)(param_2[4] + iVar8)) &&
                (*(int *)(iVar4 + 0x3c) == param_7)) ||
               ((iVar3 = *(int *)(iVar4 + 0x38), iVar3 == *(int *)(param_2[4] + iVar8) &&
                (((*(int *)(iVar4 + 0x3c) == param_7 && (iVar3 != -1)) &&
                 (*(int *)(*(int *)(iVar3 * 4 + iVar1) + 0x3c) == 0)))))) {
              bVar5 = true;
              auStack_90[uVar7 + 4] = uVar11;
              *(undefined4 *)((int)auStack_90 + iVar8) = 1;
            }
            uVar11 = uVar11 + 1;
            iVar8 = iVar8 + 4;
          } while (uVar11 < uVar2);
          if (!bVar5) {
            return 1;
          }
        }
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar9 < param_4);
    }
    if (param_8 == 0) {
      uVar9 = 0;
      if ((uVar6 & 0xfffff) != 0) {
        puVar10 = auStack_90;
        do {
          if (*puVar10 == 0) {
            return 1;
          }
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar9 < (uVar6 & 0xfffff));
      }
    }
    iVar1 = (int)param_5 - (int)param_6;
    lVar12 = 4;
    do {
      uVar6 = *(uint *)(iVar1 + (int)param_6);
      if (uVar6 < 4) {
        uVar6 = auStack_90[uVar6 + 4];
      }
      else {
        uVar6 = 0xff;
      }
      *param_6 = uVar6;
      param_6 = param_6 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return 0;
}

