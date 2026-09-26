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
extern int fn_82A1DDC0();
extern int fn_82A1E650();
extern int fn_82A29AC0();
extern int fn_82A2A108();


ulonglong fn_82A10378(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                       uint *param_5,uint *param_6,uint *param_7,int *param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  ushort *in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  uint auStack_90 [36];
  
  uVar5 = *param_6;
  uVar6 = 0x40000 - *param_8;
  puVar7 = (ushort *)(*(int *)(*param_7 * 4 + in_stack_0000005c) + *param_8);
  uVar8 = uVar5;
  if (uVar6 <= uVar5) {
    uVar5 = uVar6;
    uVar8 = uVar6;
  }
  for (; (2 < uVar5 && (uVar6 = (uint)*puVar7, uVar6 + 2 <= uVar5));
      puVar7 = (ushort *)((int)puVar7 + uVar6 + 2)) {
    uVar9 = *param_5;
    if (uVar9 < 0x8000) {
      if (uVar9 == 0) {
        return 0xffffffff80004005;
      }
    }
    else {
      uVar9 = 0x8000;
    }
    auStack_90[0] = uVar9;
    iVar1 = LDIDecompress(param_3,puVar7 + 1,uVar6,*param_4,auStack_90);
    if (iVar1 != 0) {
      return 0xffffffff80004005;
    }
    if (auStack_90[0] != uVar9) {
      return 0xffffffff80004005;
    }
    *param_4 = *param_4 + uVar9;
    *param_5 = *param_5 - uVar9;
    uVar5 = (uVar5 - uVar6) - 2;
  }
  if (uVar5 != 0) {
    fn_82A1DDC0(in_stack_00000054,puVar7,uVar5);
  }
  uVar6 = *param_6;
  *param_6 = uVar6 - uVar8;
  if (0x40000 < uVar6 - uVar8) {
    iVar1 = *param_7 * 0x14 + in_stack_00000064;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 0x80000;
    iVar1 = *param_7 * 4;
    iVar1 = fn_82A2A108(param_2,*(undefined4 *)(iVar1 + in_stack_0000005c),0x40000,
                              iVar1 + in_stack_0000006c,*param_7 * 0x14 + in_stack_00000064);
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_82a2b798();
      *(undefined4 *)(*param_7 * 4 + in_stack_00000074) = uVar2;
      iVar1 = *(int *)(*param_7 * 4 + in_stack_00000074);
      if ((iVar1 != 0x3e5) && (iVar1 != 0x26)) {
        return 0xffffffff80004005;
      }
    }
    else {
      *(undefined4 *)(*param_7 * 4 + in_stack_00000074) = 0;
    }
  }
  if (*param_6 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    uVar4 = (ulonglong)*param_7 ^ 1;
    if (*(int *)((int)(uVar4 << 2) + in_stack_00000074) == 0x3e5) {
      iVar1 = fn_82A1E650(*(undefined4 *)
                            ((int)((uVar4 + (uVar4 & 0x3fffffff) * 4 & 0xffffffff) << 2) +
                             in_stack_00000064 + 0x10),0xffffffffffffffff);
      if (iVar1 != 0) {
        return 0xffffffff80004005;
      }
      iVar1 = fn_82A29AC0(param_2,(*param_7 ^ 1) * 0x14 + in_stack_00000064,
                                (*param_7 ^ 1) * 4 + in_stack_0000006c,0);
      if (iVar1 == 0) {
        return 0xffffffff80004005;
      }
    }
    uVar8 = *param_7 << 2 ^ 4;
    if (*param_6 < *(uint *)(uVar8 + in_stack_0000006c)) {
      return 0xffffffff80004005;
    }
    puVar3 = *(undefined1 **)(uVar8 + in_stack_0000005c);
  }
  *param_8 = 0;
  if (uVar5 != 0) {
    if (puVar3 != (undefined1 *)0x0) {
      if (uVar5 == 1) {
        uVar5 = 2;
        *(undefined1 *)((int)in_stack_00000054 + 1) = *puVar3;
        *param_6 = *param_6 - 1;
        *param_8 = *param_8 + 1;
      }
      uVar8 = (uint)*in_stack_00000054;
      if (uVar8 < 0x8001) {
        iVar1 = (uVar8 - uVar5) + 2;
        fn_82A1DDC0(uVar5 + (int)in_stack_00000054,puVar3 + *param_8,iVar1);
        *param_6 = *param_6 - iVar1;
        *param_8 = *param_8 + iVar1;
        uVar5 = *param_5;
        if (uVar5 < 0x8000) {
          if (uVar5 == 0) {
            return 0xffffffff80004005;
          }
        }
        else {
          uVar5 = 0x8000;
        }
        auStack_90[0] = uVar5;
        iVar1 = LDIDecompress(param_3,in_stack_00000054 + 1,uVar8,*param_4,auStack_90);
        if ((iVar1 == 0) && (auStack_90[0] == uVar5)) {
          *param_4 = *param_4 + uVar5;
          *param_5 = *param_5 - uVar5;
          goto LAB_82a106f4;
        }
      }
    }
    return 0xffffffff80004005;
  }
LAB_82a106f4:
  *param_7 = *param_7 ^ 1;
  if (*param_6 == 0) {
    return -(ulonglong)(*param_5 != 0) & 0xffffffff80004005;
  }
  return 0xffffffff8000000a;
}

