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
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82CFBBF0();
extern unsigned int iStack_80;
extern unsigned int iStack_90;
extern unsigned int iStack_a0;
extern unsigned int iStack_b0;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;


undefined8 fn_82E132A0(int param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  int iStack_a0;
  uint uStack_9c;
  uint uStack_98;
  int iStack_90;
  uint uStack_8c;
  uint uStack_88;
  int iStack_80;
  uint uStack_7c;
  uint uStack_78;
  
  iVar3 = fn_82CFBBF0(param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  uVar9 = *(uint *)(param_1 + 0xc);
  iStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0x80000000;
  iVar3 = fn_82CE5410();
  if ((int)(uStack_78 & 0x3fffffff) < (int)uVar9) {
    uVar8 = ((ulonglong)uStack_78 & 0x3fffffff) << 1;
    if ((int)uVar8 <= (int)uVar9) {
      uVar8 = (ulonglong)uVar9;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0xc),&iStack_80,uVar8,4);
  }
  uVar8 = (ulonglong)uVar9 - (ulonglong)uStack_7c;
  if (0 < (longlong)uVar8) {
    puVar7 = (undefined4 *)(uStack_7c * 4 + iStack_80 + -4);
    uVar1 = uVar8 & 0xffffffff;
    while (uVar1 != 0) {
      puVar7 = puVar7 + 1;
      *puVar7 = 0xffffffff;
      uVar8 = uVar8 - 1;
      uVar1 = uVar8;
    }
  }
  iVar3 = 0;
  iStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0x80000000;
  iStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0x80000000;
  uStack_7c = uVar9;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar10 = 0;
    do {
      iVar4 = fn_82CFBBF0(param_3,*(undefined4 *)(*(int *)(iVar10 + *(int *)(param_1 + 8)) + 4));
      if (iVar4 == 0) {
        iVar4 = fn_82CFBBF0(param_2,**(undefined4 **)(iVar10 + *(int *)(param_1 + 8)));
        if (iVar4 == 0) {
          iVar10 = *(int *)(param_1 + 8);
          iVar4 = fn_82CE5410();
          if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar4 + 0xc),param_4,4);
          }
          *(undefined4 *)(param_4[1] * 4 + *param_4) = *(undefined4 *)(iVar3 * 4 + iVar10);
          param_4[1] = param_4[1] + 1;
          iVar3 = fn_82CE5410();
          uStack_ac = 0;
          if ((uStack_a8 & 0x80000000) == 0) {
            (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
                      (*(int **)(iVar3 + 0xc),iStack_b0,uStack_a8 & 0x3fffffff,4);
          }
          iStack_b0 = 0;
          uStack_a8 = 0x80000000;
          iVar3 = fn_82CE5410();
          uStack_9c = 0;
          if ((uStack_98 & 0x80000000) == 0) {
            (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
                      (*(int **)(iVar3 + 0xc),iStack_a0,uStack_98 & 0x3fffffff,4);
          }
          iStack_a0 = 0;
          uStack_98 = 0x80000000;
          iVar3 = fn_82CE5410();
          uStack_7c = 0;
          if ((uStack_78 & 0x80000000) != 0) {
            return 0;
          }
          (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
                    (*(int **)(iVar3 + 0xc),iStack_80,uStack_78 & 0x3fffffff,4);
          return 0;
        }
        iVar4 = fn_82CE5410();
        if (uStack_ac == (uStack_a8 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar4 + 0xc),&iStack_b0,4);
        }
        *(int *)(uStack_ac * 4 + iStack_b0) = iVar3;
        uStack_ac = uStack_ac + 1;
      }
      else {
        iVar4 = fn_82CE5410();
        if (uStack_9c == (uStack_98 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar4 + 0xc),&iStack_a0,4);
        }
        *(int *)(uStack_9c * 4 + iStack_a0) = iVar3;
        uStack_9c = uStack_9c + 1;
      }
      iVar3 = iVar3 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar3 < *(int *)(param_1 + 0xc));
    while (uStack_ac != 0) {
      iStack_90 = 0;
      uVar8 = (ulonglong)uStack_9c - 1;
      uStack_8c = 0;
      uStack_88 = 0x80000000;
      uVar9 = uStack_ac;
      if (-1 < (longlong)uVar8) {
        lVar11 = (uVar8 & 0x3fffffff) << 2;
        do {
          iVar10 = 0;
          iVar3 = *(int *)((int)lVar11 + iStack_a0);
          if (0 < (int)uVar9) {
            iVar4 = iVar3 * 4;
            iVar12 = 0;
            do {
              iVar6 = *(int *)(iVar12 + iStack_b0);
              iVar5 = fn_82CFBBF0(*(undefined4 *)(*(int *)(iVar4 + *(int *)(param_1 + 8)) + 4),
                                   **(undefined4 **)(iVar6 * 4 + *(int *)(param_1 + 8)));
              if (iVar5 == 0) {
                *(int *)(iVar4 + iStack_80) = iVar6;
                iVar6 = fn_82CFBBF0(**(undefined4 **)(*(int *)(param_1 + 8) + iVar4),param_2);
                if (iVar6 == 0) {
                  for (; iVar3 != -1; iVar3 = *(int *)(iVar3 * 4 + iStack_80)) {
                    iVar10 = *(int *)(param_1 + 8);
                    iVar4 = fn_82CE5410();
                    if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                      fn_82CE63B0(*(undefined4 *)(iVar4 + 0xc),param_4,4);
                    }
                    *(undefined4 *)(param_4[1] * 4 + *param_4) = *(undefined4 *)(iVar10 + iVar3 * 4)
                    ;
                    param_4[1] = param_4[1] + 1;
                  }
                  iVar3 = fn_82CE5410();
                  uStack_8c = 0;
                  if ((uStack_88 & 0x80000000) == 0) {
                    (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
                              (*(int **)(iVar3 + 0xc),iStack_90,uStack_88 & 0x3fffffff,4);
                  }
                  iStack_90 = 0;
                  uStack_88 = 0x80000000;
                  iVar3 = fn_82CE5410();
                  uStack_ac = 0;
                  if ((uStack_a8 & 0x80000000) == 0) {
                    (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
                              (*(int **)(iVar3 + 0xc),iStack_b0,uStack_a8 & 0x3fffffff,4);
                  }
                  iStack_b0 = 0;
                  uStack_a8 = 0x80000000;
                  iVar3 = fn_82CE5410();
                  uStack_9c = 0;
                  if ((uStack_98 & 0x80000000) == 0) {
                    (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
                              (*(int **)(iVar3 + 0xc),iStack_a0,uStack_98 & 0x3fffffff,4);
                  }
                  iStack_a0 = 0;
                  uStack_98 = 0x80000000;
                  iVar3 = fn_82CE5410();
                  uStack_7c = 0;
                  if ((uStack_78 & 0x80000000) != 0) {
                    return 0;
                  }
                  (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
                            (*(int **)(iVar3 + 0xc),iStack_80,uStack_78 & 0x3fffffff,4);
                  return 0;
                }
                iVar6 = fn_82CE5410();
                if (uStack_8c == (uStack_88 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(undefined4 *)(iVar6 + 0xc),&iStack_90,4);
                }
                *(int *)(uStack_8c * 4 + iStack_90) = iVar3;
                uStack_8c = uStack_8c + 1;
                uStack_9c = uStack_9c - 1;
                if (uStack_9c != (uint)uVar8) {
                  *(undefined4 *)((int)lVar11 + iStack_a0) =
                       *(undefined4 *)(uStack_9c * 4 + iStack_a0);
                }
              }
              iVar10 = iVar10 + 1;
              iVar12 = iVar12 + 4;
              uVar9 = uStack_ac;
            } while (iVar10 < (int)uStack_ac);
          }
          uVar8 = uVar8 - 1;
          lVar11 = lVar11 + -4;
        } while (-1 < (longlong)uVar8);
      }
      iVar3 = iStack_90;
      uVar2 = uStack_a8;
      iStack_90 = iStack_b0;
      iStack_b0 = iVar3;
      uStack_ac = uStack_8c;
      uStack_a8 = uStack_88;
      uStack_88 = uVar2;
      uStack_8c = uVar9;
      iVar3 = fn_82CE5410();
      uStack_8c = 0;
      if ((uStack_88 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
                  (*(int **)(iVar3 + 0xc),iStack_90,uStack_88 & 0x3fffffff,4);
      }
      iStack_90 = 0;
      uStack_88 = 0x80000000;
    }
  }
  iVar3 = fn_82CE5410();
  uStack_ac = 0;
  if ((uStack_a8 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
              (*(int **)(iVar3 + 0xc),iStack_b0,uStack_a8 & 0x3fffffff,4);
  }
  iStack_b0 = 0;
  uStack_a8 = 0x80000000;
  iVar3 = fn_82CE5410();
  uStack_9c = 0;
  if ((uStack_98 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
              (*(int **)(iVar3 + 0xc),iStack_a0,uStack_98 & 0x3fffffff,4);
  }
  iStack_a0 = 0;
  uStack_98 = 0x80000000;
  iVar3 = fn_82CE5410();
  uStack_7c = 0;
  if ((uStack_78 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
              (*(int **)(iVar3 + 0xc),iStack_80,uStack_78 & 0x3fffffff,4);
  }
  return 1;
}

