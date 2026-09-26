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
extern unsigned int lbl_82005710;


void fn_82CC1AA8(double param_1,undefined1 *param_2,int param_3,int param_4,int param_5,
                  int param_6,int param_7,undefined8 param_8,ulonglong param_9)

{
  double dVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  uint in_stack_0000006c;
  uint uVar4;
  
  dVar1 = lbl_82005710;
  lVar9 = 0;
  iVar10 = 0;
  if ((int)in_stack_0000006c <= (int)in_stack_00000064) {
    in_stack_00000064 = in_stack_0000006c;
  }
  uVar11 = -(uint)(param_9 < 0xffffffff80000000) & (uint)param_9;
  uVar4 = 0;
  uVar3 = 0;
  in_stack_0000005c = -(uint)((ulonglong)in_stack_0000005c < 0xffffffff80000000) & in_stack_0000005c
  ;
  if ((int)in_stack_0000005c < (int)in_stack_00000064) {
    if ((int)in_stack_0000006c <= (int)in_stack_00000054) {
      in_stack_00000054 = in_stack_0000006c;
    }
    if ((int)uVar11 < (int)in_stack_00000054) {
      uVar3 = in_stack_0000005c;
      if ((int)in_stack_00000054 <= (int)in_stack_0000005c) {
        uVar3 = in_stack_00000054;
      }
      uVar8 = in_stack_00000064;
      if ((int)in_stack_00000064 <= (int)uVar11) {
        uVar8 = uVar11;
      }
      if ((int)uVar11 < (int)in_stack_0000005c) {
        uVar4 = 0;
        if (0 < (int)uVar11) {
          lVar9 = (longlong)param_7 * (longlong)(int)uVar11;
          iVar10 = 0;
          uVar4 = uVar11;
          if (0 < lVar9) {
            puVar5 = param_2;
            do {
              iVar10 = iVar10 + param_7;
              *puVar5 = puVar5[param_6 - (int)param_2];
              puVar5 = puVar5 + param_7;
            } while (iVar10 < (int)lVar9);
          }
        }
        if ((int)uVar4 < (int)uVar3) {
          iVar10 = param_3;
          if (param_1 < dVar1) {
            iVar10 = param_5;
          }
          iVar6 = 0;
          lVar2 = (longlong)(int)(uVar3 - uVar4) * (longlong)param_7;
          if (0 < lVar2) {
            do {
              param_2[iVar6 + (int)lVar9] = *(undefined1 *)((int)lVar9 + iVar10 + iVar6);
              iVar6 = iVar6 + param_7;
            } while (iVar6 < (int)lVar2);
          }
          lVar9 = lVar2 + lVar9;
          uVar4 = uVar3;
        }
        iVar10 = (int)lVar9;
        if ((int)uVar4 < (int)in_stack_0000005c) {
          iVar6 = 0;
          lVar2 = (longlong)(int)(in_stack_0000005c - uVar4) * (longlong)param_7;
          if (0 < lVar2) {
            do {
              param_2[iVar6 + iVar10] = *(undefined1 *)(iVar10 + param_6 + iVar6);
              iVar6 = iVar6 + param_7;
            } while (iVar6 < (int)lVar2);
          }
          lVar2 = lVar2 + lVar9;
LAB_82cc1c48:
          uVar4 = in_stack_0000005c;
          iVar10 = (int)lVar2;
        }
      }
      else {
        iVar10 = 0;
        if (0 < (int)in_stack_0000005c) {
          lVar2 = (longlong)param_7 * (longlong)(int)in_stack_0000005c;
          iVar10 = 0;
          if (0 < lVar2) {
            puVar5 = param_2;
            do {
              iVar10 = iVar10 + param_7;
              *puVar5 = puVar5[param_6 - (int)param_2];
              puVar5 = puVar5 + param_7;
            } while (iVar10 < (int)lVar2);
          }
          goto LAB_82cc1c48;
        }
      }
      uVar3 = uVar4;
      if ((int)uVar4 < (int)in_stack_00000064) {
        iVar7 = 0;
        lVar9 = (longlong)(int)(in_stack_00000064 - uVar4) * (longlong)param_7;
        iVar6 = (int)lVar9;
        if (0 < lVar9) {
          do {
            param_2[iVar7 + iVar10] = *(undefined1 *)(iVar10 + param_4 + iVar7);
            iVar7 = iVar7 + param_7;
          } while (iVar7 < iVar6);
        }
        iVar10 = iVar6 + iVar10;
        uVar3 = in_stack_00000064;
      }
      if ((int)in_stack_00000054 <= (int)in_stack_00000064) goto LAB_82cc1e38;
      if ((int)uVar3 < (int)uVar8) {
        iVar7 = 0;
        lVar9 = (longlong)(int)(uVar8 - uVar3) * (longlong)param_7;
        iVar6 = (int)lVar9;
        if (0 < lVar9) {
          do {
            param_2[iVar7 + iVar10] = *(undefined1 *)(iVar10 + param_6 + iVar7);
            iVar7 = iVar7 + param_7;
          } while (iVar7 < iVar6);
        }
        iVar10 = iVar6 + iVar10;
        uVar3 = uVar8;
      }
      if ((int)in_stack_00000054 <= (int)uVar3) goto LAB_82cc1e38;
      if (dVar1 <= param_1) {
        param_5 = param_3;
      }
      iVar6 = 0;
      lVar9 = (longlong)(int)(in_stack_00000054 - uVar3) * (longlong)param_7;
      uVar3 = in_stack_00000054;
      if (0 < lVar9) {
        do {
          param_2[iVar6 + iVar10] = *(undefined1 *)(iVar6 + iVar10 + param_5);
          iVar6 = iVar6 + param_7;
        } while (iVar6 < (int)lVar9);
      }
    }
    else {
      uVar3 = 0;
      if (0 < (int)in_stack_0000005c) {
        lVar9 = (longlong)param_7 * (longlong)(int)in_stack_0000005c;
        iVar10 = 0;
        uVar3 = in_stack_0000005c;
        if (0 < lVar9) {
          puVar5 = param_2;
          do {
            iVar10 = iVar10 + param_7;
            *puVar5 = puVar5[param_6 - (int)param_2];
            puVar5 = puVar5 + param_7;
          } while (iVar10 < (int)lVar9);
        }
      }
      iVar10 = (int)lVar9;
      if ((int)in_stack_00000064 <= (int)uVar3) goto LAB_82cc1e38;
      iVar6 = 0;
      lVar9 = (longlong)(int)(in_stack_00000064 - uVar3) * (longlong)param_7;
      uVar3 = in_stack_00000064;
      if (0 < lVar9) {
        do {
          param_2[iVar6 + iVar10] = *(undefined1 *)(iVar10 + param_4 + iVar6);
          iVar6 = iVar6 + param_7;
        } while (iVar6 < (int)lVar9);
      }
    }
  }
  else {
    if ((int)in_stack_0000006c <= (int)in_stack_00000054) {
      in_stack_00000054 = in_stack_0000006c;
    }
    if ((int)in_stack_00000054 <= (int)uVar11) goto LAB_82cc1e38;
    uVar3 = 0;
    if (0 < (int)uVar11) {
      lVar9 = (longlong)param_7 * (longlong)(int)uVar11;
      iVar10 = 0;
      uVar3 = uVar11;
      if (0 < lVar9) {
        puVar5 = param_2;
        do {
          iVar10 = iVar10 + param_7;
          *puVar5 = puVar5[param_6 - (int)param_2];
          puVar5 = puVar5 + param_7;
        } while (iVar10 < (int)lVar9);
      }
    }
    iVar10 = (int)lVar9;
    if ((int)in_stack_00000054 <= (int)uVar3) goto LAB_82cc1e38;
    if (lbl_82005710 <= param_1) {
      param_5 = param_3;
    }
    iVar6 = 0;
    lVar9 = (longlong)(int)(in_stack_00000054 - uVar3) * (longlong)param_7;
    uVar3 = in_stack_00000054;
    if (0 < lVar9) {
      do {
        param_2[iVar6 + iVar10] = *(undefined1 *)(iVar6 + iVar10 + param_5);
        iVar6 = iVar6 + param_7;
      } while (iVar6 < (int)lVar9);
    }
  }
  iVar10 = (int)lVar9 + iVar10;
LAB_82cc1e38:
  if ((int)uVar3 < (int)in_stack_0000006c) {
    iVar6 = 0;
    lVar9 = (longlong)(int)(in_stack_0000006c - uVar3) * (longlong)param_7;
    if (0 < lVar9) {
      do {
        param_2[iVar6 + iVar10] = *(undefined1 *)(iVar10 + param_6 + iVar6);
        iVar6 = iVar6 + param_7;
      } while (iVar6 < (int)lVar9);
    }
  }
  return;
}

