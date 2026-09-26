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
extern int fn_82A29A38();
extern int fn_82ABAB58();
extern unsigned int uStack_70;


uint * fn_82ABACE8(uint *param_1,ulonglong param_2,ulonglong param_3,uint *param_4,int param_5,
                    uint param_6,char param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar4;
  uint uVar5;
  ulonglong uVar3;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar11;
  int *in_stack_00000054;
  uint uStack_70;
  uint uVar10;
  
  uVar4 = ((uint)((param_2 & 0xffffffff) >> 0x14) & 0x700 | (uint)param_2 & 0x1800) >> 8;
  uVar11 = (uint)(param_2 & 0x7ff);
  uVar8 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar1 = (uint)param_3;
  if (uVar4 == 1) {
    uVar7 = 5;
    if (((param_2 & 0x2000) == 0x2000) && (0x2ff < param_8)) {
      uVar8 = 0x800000;
      if (((param_3 & 0xffffffff) >> 0x14 & 0x700 | param_3 & 0x1800) == 0xf00) {
        uVar5 = 0x10000;
        uVar9 = 0;
      }
      else {
        fn_82A29A38();
      }
    }
  }
  else if (uVar4 == 2) {
    uVar7 = 1;
    if ((param_2 & 0x2000) == 0x2000) {
      uVar8 = 0x800000;
      if (0x1ff < param_8) {
        uVar5 = ((uint)((param_3 & 0xffffffff) >> 0x14) & 0x700 | uVar1 & 0x1800) >> 8;
        if (uVar5 == 3) {
          uVar3 = (param_3 & 0xffffffff) >> 0x10 & 3;
          uVar6 = 0;
          if (uVar3 == 0) goto LAB_82abadd8;
          if (uVar3 == 1) {
            uVar10 = 0x20000;
          }
          else if (uVar3 < 3) {
            uVar10 = 0x40000;
          }
          else {
            if (uVar3 != 3) goto LAB_82abadd8;
            uVar10 = 0x60000;
          }
        }
        else if (uVar5 == 0xf) {
          uVar6 = 0x10000;
LAB_82abadd8:
          uVar10 = 0;
        }
        else {
          fn_82A29A38();
        }
      }
      uVar4 = param_5 - 1;
      uVar5 = uVar6;
      uVar9 = uVar10;
    }
    else {
      uVar8 = 0;
      uVar4 = *param_4;
      uVar5 = uVar6;
      uVar9 = uVar10;
      if ((ulonglong)*param_4 <= (param_2 & 0x7ff)) {
        uVar4 = uVar11;
      }
    }
    *param_4 = uVar4;
  }
  else if (uVar4 == 3) {
    uVar7 = 3;
  }
  else if (uVar4 == 7) {
    uVar7 = 2;
  }
  else if (uVar4 == 10) {
    fn_82A29A38();
    uVar7 = (ulonglong)uStack_70;
  }
  else if (uVar4 == 0xe) {
    uVar7 = 0;
  }
  else {
    uVar7 = 4;
    if (uVar4 == 0x13) {
      uVar11 = 0x20;
    }
  }
  if ((param_2 & 0xff0000) == 0xe40000) {
    uVar4 = 0x3210;
  }
  else {
    uVar4 = fn_82ABAB58(param_2);
  }
  param_2 = param_2 & 0xf000000;
  if (param_2 < 0x7000001) {
    if (param_2 == 0x7000000) {
      uVar6 = 0x40000;
    }
    else if (param_2 == 0x1000000) {
      uVar6 = 0;
LAB_82abaf94:
      uVar6 = uVar6 | 0x8888;
    }
    else if (param_2 == 0x2000000) {
      uVar6 = 0x20000;
    }
    else {
      if (param_2 == 0x3000000) {
        uVar6 = 0x20000;
        goto LAB_82abaf94;
      }
      if (param_2 == 0x4000000) {
        uVar6 = 0x80000;
      }
      else {
        if (param_2 == 0x5000000) {
          uVar6 = 0x80000;
          goto LAB_82abaf94;
        }
        if (param_2 != 0x6000000) goto LAB_82abaf68;
        uVar6 = 0x10000;
      }
    }
  }
  else {
    if (param_2 == 0x8000000) {
      uVar6 = 0x40000;
      goto LAB_82abaf94;
    }
    if (param_2 == 0x9000000) {
      uVar6 = 0x400000;
    }
    else if (param_2 == 0xa000000) {
      uVar6 = 0x600000;
    }
    else if (param_2 == 0xb000000) {
      uVar6 = 0x100000;
    }
    else {
      if (param_2 == 0xc000000) {
        uVar6 = 0x100000;
        goto LAB_82abaf94;
      }
LAB_82abaf68:
      uVar6 = 0;
    }
  }
  if ((param_6 == 9) || (param_6 == 0x35)) {
LAB_82abb0c8:
    *param_1 = (uint)(uVar7 << 0x10) | uVar11;
LAB_82abb0d0:
    iVar2 = *in_stack_00000054 + 1;
LAB_82abb0dc:
    *in_stack_00000054 = iVar2;
  }
  else {
    if (param_6 < 0x3c) goto LAB_82abafe0;
    if (param_6 < 0x3e) goto LAB_82abafdc;
    if (param_6 == 0x3e) goto LAB_82abb0c8;
    if (param_6 == 0x4e) {
      if (param_7 == '\0') goto LAB_82abafdc;
    }
    else if (param_6 == 0x55) {
LAB_82abafdc:
      uVar6 = uVar6 | 0x100000;
    }
LAB_82abafe0:
    if (uVar8 == 0x800000) {
      if ((uVar4 == 0x3210) && (uVar6 == 0)) {
        *param_1 = (uint)((uVar7 & 0xffffffbf) << 0x10) | 0x800000 | uVar11;
        param_1 = param_1 + 1;
        *param_1 = uVar1 & 0x7ff | uVar9 | uVar5;
        iVar2 = *in_stack_00000054 + 2;
        goto LAB_82abb0dc;
      }
      *param_1 = (uint)(uVar7 << 0x10) | 0xc00000 | uVar11;
      param_1[1] = uVar6 | uVar4;
      param_1 = param_1 + 2;
      *param_1 = uVar1 & 0x7ff | uVar9 | uVar5;
      iVar2 = *in_stack_00000054 + 3;
    }
    else {
      if ((uVar4 == 0x3210) && (uVar6 == 0)) {
        *param_1 = (uint)(uVar7 << 0x10) & 0xffbf0000 | uVar11 | uVar8;
        goto LAB_82abb0d0;
      }
      *param_1 = (uint)(uVar7 << 0x10) | 0x400000 | uVar11 | uVar8;
      param_1 = param_1 + 1;
      *param_1 = uVar6 | uVar4;
      iVar2 = *in_stack_00000054 + 2;
    }
    *in_stack_00000054 = iVar2;
  }
  return param_1 + 1;
}

