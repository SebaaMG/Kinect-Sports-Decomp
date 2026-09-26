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
extern int fn_82A3F758();
extern int fn_82E4FE08();
extern int fn_82E7E7E0();
extern int fn_82F68CC0();


ulonglong fn_82E7F108(ushort *param_1,ushort param_2,int param_3,ulonglong param_4)

{
  ushort uVar1;
  ushort *puVar3;
  undefined2 *puVar4;
  longlong lVar2;
  int iVar5;
  ushort uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  uVar6 = 0;
  if (param_3 == 0) {
    return 0xffffffff80004003;
  }
  if (*param_1 != 0) {
    return 0xffffffffc00d36ea;
  }
  *param_1 = param_2;
  if ((param_2 & 0x1000) != 0) {
    return 0xffffffffc00d36eb;
  }
  if (((param_4 & 0xffffffff) == 0) && (param_2 != 0)) {
    return 0xffffffff80070057;
  }
  uVar7 = param_4;
  if (param_2 == 0xb) {
    do {
      if ((uVar7 & 0xffffffff) == 0) goto LAB_82e7f1c0;
      uVar7 = uVar7 - 1;
    } while (*(char *)((int)uVar7 + param_3) == '\0');
    uVar6 = 0xffff;
  }
LAB_82e7f1c0:
  if (param_2 == 8) {
    *param_1 = 0x1f;
  }
  uVar1 = *param_1 & 0xfff;
  if (uVar1 < 0x18) {
    if (uVar1 < 0x10) {
      if (1 < uVar1) {
        if ((3 < uVar1) && (uVar1 != 9)) {
          if (uVar1 == 0xb) {
            param_1[4] = uVar6;
            goto LAB_82e7f230;
          }
          if (uVar1 != 0xd) {
            if ((uVar1 == 0xe) && (puVar3 = param_1, (param_4 & 0xffffffff) == 0x10)) {
LAB_82e7f224:
              param_4 = 0x10;
              goto LAB_82e7f228;
            }
            goto LAB_82e7f30c;
          }
        }
        goto LAB_82e7f2e8;
      }
    }
    else {
LAB_82e7f2e8:
      if ((param_4 & 0xffffffff) < 9) {
        puVar3 = param_1 + 4;
        goto LAB_82e7f228;
      }
    }
LAB_82e7f30c:
    uVar8 = 0xffffffff80070057;
LAB_82e7f3ec:
    fn_82E7E7E0(param_1);
    return uVar8;
  }
  if (uVar1 == 0x1e) {
    lVar9 = (param_4 & 0x7fffffff) << 1;
    lVar2 = fn_82E4FE08(lVar9);
    *(int *)(param_1 + 4) = (int)lVar2;
    if (lVar2 == 0) goto LAB_82e7f2bc;
    *param_1 = 0x1f;
    iVar5 = fn_82A2A288(0,0,param_3,param_4,lVar2,param_4);
    if (iVar5 == 0) {
      uVar8 = thunk_FUN_82a2b798();
      if (0 < (int)uVar8) {
        uVar8 = uVar8 & 0xffff | 0x80070000;
      }
      if (-1 < (int)uVar8) {
        uVar8 = 0xffffffff8000ffff;
      }
      goto LAB_82e7f3ec;
    }
    *(undefined2 *)((int)lVar9 + *(int *)(param_1 + 4) + -2) = 0;
LAB_82e7f3e4:
    if (-1 < (int)uVar8) goto LAB_82e7f230;
    goto LAB_82e7f3ec;
  }
  if (uVar1 == 0x1f) {
    if (((param_4 & 1) != 0) || ((param_4 & 0xffffffff) < 2)) goto LAB_82e7f30c;
    puVar4 = (undefined2 *)fn_82E4FE08(param_4);
    *(undefined2 **)(param_1 + 4) = puVar4;
    if (puVar4 == (undefined2 *)0x0) goto LAB_82e7f2bc;
    *puVar4 = 0;
    uVar8 = (param_4 & 0xffffffff) >> 1;
    if (uVar8 < 0x80000000) {
      uVar8 = fn_82A3F758(*(undefined4 *)(param_1 + 4),uVar8,param_3);
    }
    else {
      uVar8 = 0xffffffff80070057;
    }
    if ((int)uVar8 < 0) goto LAB_82e7f3ec;
    goto LAB_82e7f3e4;
  }
  if (uVar1 == 0x40) goto LAB_82e7f2e8;
  if (uVar1 != 0x41) {
    if ((uVar1 != 0x48) || ((param_4 & 0xffffffff) != 0x10)) goto LAB_82e7f30c;
    puVar3 = (ushort *)fn_82E4FE08(0x10);
    *(ushort **)(param_1 + 4) = puVar3;
    if (puVar3 != (ushort *)0x0) goto LAB_82e7f224;
LAB_82e7f2bc:
    uVar8 = 0xffffffff8007000e;
    goto LAB_82e7f3ec;
  }
  puVar3 = (ushort *)fn_82E4FE08(param_4);
  *(ushort **)(param_1 + 6) = puVar3;
  if (puVar3 == (ushort *)0x0) goto LAB_82e7f2bc;
  *(int *)(param_1 + 4) = (int)param_4;
LAB_82e7f228:
  fn_82F68CC0(puVar3,param_3,param_4);
LAB_82e7f230:
  if (((*param_1 & 0xfff) != 9) && ((*param_1 & 0xfff) != 0xd)) {
    return uVar8;
  }
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return uVar8;
  }
  (**(code **)(**(int **)(param_1 + 4) + 4))();
  return uVar8;
}

