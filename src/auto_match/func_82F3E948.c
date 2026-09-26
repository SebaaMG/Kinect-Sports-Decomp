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
extern int fn_82A2A288();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57820();
extern int fn_82E59EC8();


ulonglong fn_82F3E948(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar5;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  
  if (param_1[3] == 0) {
    return 0xffffffffc00d36b6;
  }
  if (param_2 == (uint *)0x0) {
    return 0xffffffff80070057;
  }
  uVar1 = param_1[0x10];
  iVar7 = 0;
  iVar8 = 0;
  if (uVar1 < 0x28) {
    *param_2 = 0x28;
    return 0xffffffffc00d36b1;
  }
  piVar9 = param_1 + 10;
  fn_82E57620(param_1 + 4,piVar9);
  fn_82E576A8(param_1 + 8,piVar9);
  uVar3 = fn_82E59EC8(param_1 + 0x12,piVar9);
  if ((longlong)uVar3 < 0) {
LAB_82f3ec50:
    if ((int)uVar3 == -0x3ff2c94f) goto LAB_82f3ec9c;
  }
  else {
    piVar10 = param_1 + 0x16;
    uVar3 = fn_82E59EC8(piVar10,piVar9);
    if ((longlong)uVar3 < 0) goto LAB_82f3ec50;
    if (param_1[0x13] != 0) {
      fn_82E4FE40();
    }
    param_1[0x13] = 0;
    if (*piVar10 == 0) {
LAB_82f3ea5c:
      puVar11 = (uint *)(param_1 + 0x17);
      uVar3 = fn_82E59EC8(puVar11,piVar9);
      if (-1 < (longlong)uVar3) {
        if (param_1[0x14] != 0) {
          fn_82E4FE40();
        }
        uVar2 = *puVar11;
        param_1[0x14] = 0;
        if (uVar2 == 0) {
LAB_82f3eb6c:
          puVar11 = (uint *)(param_1 + 0x18);
          uVar3 = fn_82E59EC8(puVar11,piVar9);
          if (-1 < (longlong)uVar3) {
            if (param_1[0x15] != 0) {
              fn_82E4FE40();
            }
            uVar2 = *puVar11;
            param_1[0x15] = 0;
            if (uVar2 != 0) {
              lVar4 = ((ulonglong)uVar2 & 0x7fffffff) << 1;
              if (0x7fffffff < uVar2) {
                lVar4 = -1;
              }
              iVar6 = fn_82E50BE8(lVar4,0,0,0,0);
              param_1[0x15] = iVar6;
              if ((iVar6 == 0) || (iVar8 = fn_82E50BE8(*puVar11,0,0,0,0), iVar8 == 0))
              goto LAB_82f3ea3c;
              uVar3 = fn_82E57820(iVar8,piVar9,*puVar11);
              if (-1 < (longlong)uVar3) {
                *(undefined1 *)(*puVar11 + iVar8 + -1) = 0;
                iVar6 = fn_82A2A288(0,0,iVar8,0xffffffffffffffff,param_1[0x15],*puVar11);
                if (iVar6 == 0) goto LAB_82f3eb38;
                *(undefined2 *)(*puVar11 * 2 + param_1[0x15] + -2) = 0;
              }
            }
          }
        }
        else {
          lVar4 = ((ulonglong)uVar2 & 0x7fffffff) << 1;
          if (0x7fffffff < uVar2) {
            lVar4 = -1;
          }
          iVar6 = fn_82E50BE8(lVar4,0,0,0,0);
          param_1[0x14] = iVar6;
          if ((iVar6 == 0) || (iVar7 = fn_82E50BE8(*puVar11,0,0,0,0), iVar7 == 0))
          goto LAB_82f3ea3c;
          uVar3 = fn_82E57820(iVar7,piVar9,*puVar11);
          if (-1 < (longlong)uVar3) {
            *(undefined1 *)(iVar7 + *puVar11 + -1) = 0;
            iVar6 = fn_82A2A288(0,0,iVar7,0xffffffffffffffff,param_1[0x14],*puVar11);
            if (iVar6 != 0) {
              *(undefined2 *)(*puVar11 * 2 + param_1[0x14] + -2) = 0;
              goto LAB_82f3eb6c;
            }
LAB_82f3eb38:
            uVar3 = thunk_FUN_82a2b798();
            if (0 < (int)uVar3) {
              uVar3 = uVar3 & 0xffff | 0x80070000;
            }
          }
        }
      }
      goto LAB_82f3ec50;
    }
    uVar3 = fn_82E50BE8(*piVar10,0,0,0,0);
    param_1[0x13] = (int)uVar3;
    if ((uVar3 & 0xffffffff) != 0) {
      uVar3 = fn_82E57820(uVar3,piVar9,*piVar10);
      if ((longlong)uVar3 < 0) goto LAB_82f3ec50;
      goto LAB_82f3ea5c;
    }
LAB_82f3ea3c:
    uVar3 = 0xffffffff8007000e;
  }
  *param_2 = uVar1 - param_1[0x10];
  if ((-1 < (int)uVar3) && (uVar5 = (**(code **)(*param_1 + 0x2c))(param_1), uVar5 != *param_2)) {
    uVar3 = 0xffffffffc00d3a9a;
  }
LAB_82f3ec9c:
  if (iVar7 != 0) {
    fn_82E4FE40(iVar7);
  }
  if (iVar8 != 0) {
    fn_82E4FE40(iVar8);
  }
  return uVar3;
}

