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
extern unsigned int *auStack_80;
extern int fn_82A29DE8();
extern int fn_82A35BD8();
extern int fn_82A3F758();
extern int fn_82E32040();
extern int fn_82E49A70();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E66588();
extern int fn_82F64CE0();
extern int fn_82F6EBC8();
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_78;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong fn_82E4ADA0(int param_1,int param_2,uint param_3,uint param_4,int param_5,
                       ulonglong param_6)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar8;
  ulonglong uVar9;
  uint auStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  if ((param_6 & 0xffffffff) == 0) {
    return 0xffffffff80004003;
  }
  uVar2 = fn_82F6EBC8(0,param_6,0);
  if ((int)uVar2 == -1) {
    return 0;
  }
  if ((uVar2 & 0xffffffff) == 0) {
    return 0;
  }
  lVar3 = fn_82E50BE8(uVar2 + 1,0,0,0,0);
  if (lVar3 == 0) {
    return 0xffffffff8007000e;
  }
  fn_82F6EBC8(lVar3,param_6,uVar2 + 1);
  puVar6 = (undefined4 *)fn_82E50BE8(0xc,0,0,0,0);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[2] = puVar6 + 1;
    puVar6[1] = puVar6 + 1;
  }
  *(undefined4 **)(param_1 + 0xb8) = puVar6;
  if (puVar6 != (undefined4 *)0x0) {
    uVar2 = fn_82E32040(param_1 + 0xbc);
    if (((longlong)uVar2 < 0) || (uVar2 = fn_82E49A70(param_1), (longlong)uVar2 < 0))
    goto LAB_82e4b200;
    uVar9 = 0xffffffff80070057;
    if (param_2 == 1) {
      uVar8 = 0x80000000;
LAB_82e4aef4:
      *(undefined4 *)(param_1 + 0xa8) = uVar8;
      uVar2 = 0;
    }
    else {
      if (param_2 == 2) {
        uVar8 = 0x40000000;
        goto LAB_82e4aef4;
      }
      uVar2 = uVar9;
      if (param_2 == 3) {
        uVar8 = 0xc0000000;
        goto LAB_82e4aef4;
      }
    }
    if ((int)uVar2 < 0) goto LAB_82e4b200;
    uVar8 = 5;
    *(undefined4 *)(param_1 + 0xac) = 5;
    if (param_5 != 0) {
      *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x10000;
    }
    if (param_3 == 0) {
      uVar8 = 3;
LAB_82e4af64:
      *(undefined4 *)(param_1 + 0xb0) = uVar8;
      uVar2 = 0;
    }
    else {
      if (param_3 == 1) {
        uVar8 = 1;
        goto LAB_82e4af64;
      }
      if (param_3 < 3) goto LAB_82e4af64;
      if (param_3 == 3) {
        uVar8 = 4;
        goto LAB_82e4af64;
      }
      uVar2 = uVar9;
      if (param_3 < 5) {
        uVar8 = 2;
        goto LAB_82e4af64;
      }
    }
    if ((int)uVar2 < 0) goto LAB_82e4b200;
    uVar1 = *(uint *)(param_1 + 0xb4);
    *(uint *)(param_1 + 0xb4) = uVar1 | 0x40000000;
    if (param_2 == 1) {
      *(uint *)(param_1 + 0xb4) = uVar1 | 0x60000000;
    }
    if (param_5 != 0) {
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x100;
    }
    param_4 = param_4 & 1;
    if ((param_4 != 0) && ((*(uint *)(param_1 + 0xa8) & 0x40000000) != 0)) {
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x80000000;
    }
    if (param_4 == 0) {
LAB_82e4afe8:
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x8000000;
    }
    else {
      if ((*(uint *)(param_1 + 0xa8) & 0x80000000) != 0) {
        *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x20000000;
      }
      if (param_4 == 0) goto LAB_82e4afe8;
    }
    if (param_5 != 0) {
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x4000000;
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
    iVar7 = fn_82A35BD8(lVar3,0,auStack_80);
    if (iVar7 == 0) {
      uVar2 = thunk_FUN_82a2b798();
      if (0 < (int)uVar2) {
        uVar2 = uVar2 & 0xffff | 0xffffffff80070000;
      }
      if ((int)uVar2 == -0x7ff8fffe) {
        auStack_80[0] = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
      }
      else if ((int)uVar2 < 0) goto LAB_82e4b200;
    }
    else {
      (**(code **)(*(int *)(param_1 + 8) + 0x68))
                (param_1 + 8,0xffffffff8214bfb0,(int)&uStack_70 + 4,8);
    }
    uVar2 = (**(code **)(*(int *)(param_1 + 8) + 100))(param_1 + 8,0xffffffff8214bfa0,param_6);
    if ((longlong)uVar2 < 0) goto LAB_82e4b200;
    if ((auStack_80[0] & 0x10) == 0) {
      iVar7 = fn_82A29DE8(lVar3,*(undefined4 *)(param_1 + 0xa8),
                                *(undefined4 *)(param_1 + 0xac),0,*(undefined4 *)(param_1 + 0xb0),
                                *(undefined4 *)(param_1 + 0xb4),0);
      *(int *)(param_1 + 0x9c) = iVar7;
      if (iVar7 == -1) {
        uVar2 = thunk_FUN_82a2b798();
        if (0 < (int)uVar2) {
          uVar2 = uVar2 & 0xffff | 0xffffffff80070000;
        }
        if ((int)uVar2 < 0) goto LAB_82e4b200;
      }
      *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xffffffdf;
      uVar2 = fn_82E66588(*(undefined4 *)(param_1 + 0x9c));
      if ((longlong)uVar2 < 0) goto LAB_82e4b200;
    }
    else {
      *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 0x80;
    }
    lVar4 = fn_82F64CE0(param_6);
    uVar2 = lVar4 + 1;
    lVar4 = (uVar2 & 0x7fffffff) << 1;
    if (0x7fffffff < (uVar2 & 0xffffffff)) {
      lVar4 = -1;
    }
    uVar5 = fn_82E50BE8(lVar4,0,0,0,0);
    *(int *)(param_1 + 0x94) = (int)uVar5;
    if ((uVar5 & 0xffffffff) != 0) {
      if ((uVar2 & 0xffffffff) < 0x80000000) {
        uVar9 = fn_82A3F758(uVar5,uVar2,param_6);
      }
      uVar2 = uVar9;
      if (-1 < (int)uVar9) {
        *(int *)(param_1 + 0xa0) = param_5;
        *(undefined4 *)(param_1 + 0xc0) = 0x200;
        if ((*(uint *)(param_1 + 0xa8) & 0x80000000) != 0) {
          *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 1;
        }
        if ((*(uint *)(param_1 + 0xa8) & 0x40000000) != 0) {
          *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 2;
        }
        *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 4;
      }
      goto LAB_82e4b200;
    }
  }
  uVar2 = 0xffffffff8007000e;
LAB_82e4b200:
  fn_82E4FE40(lVar3);
  return uVar2;
}

