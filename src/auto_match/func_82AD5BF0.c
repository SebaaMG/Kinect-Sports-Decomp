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
extern int fn_82AD3B30();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined8
fn_82AD5BF0(undefined8 param_1,uint param_2,undefined8 param_3,int *param_4,undefined8 param_5,
             uint *param_6,uint *param_7,uint *param_8)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *in_stack_00000054;
  uint uStack_40;
  uint uStack_3c;
  
  iVar4 = fn_82AD3B30();
  *param_4 = iVar4;
  *param_6 = uStack_40;
  *param_7 = uStack_3c;
  if ((iVar4 == 3) || (param_2 = uStack_40, iVar4 == 4)) {
    if (*(int *)(uStack_3c + 0xc) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = **(uint **)(uStack_3c + 0xc);
    }
    *param_8 = param_2;
    *in_stack_00000054 = uVar6;
    if ((*(int *)(uStack_3c + 0xc) == 0) ||
       (bVar3 = true, *(int *)(*(int *)(uStack_3c + 0xc) + 8) == 0)) {
      bVar3 = false;
    }
    if (bVar3) {
      return 0;
    }
    if (iVar4 == 4) {
      iVar4 = *(int *)(uStack_40 + 0xc);
      if ((iVar4 == 0) || (bVar3 = true, *(int *)(iVar4 + 8) == 0)) {
        bVar3 = false;
      }
      if (bVar3) {
        return 0;
      }
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = **(uint **)(uStack_40 + 0xc);
      }
      uVar7 = *(uint *)((uStack_40 & 0xfffffffe) + 4);
      uVar7 = -(uint)((uVar7 & 1) == 0) & uVar7;
      if (uVar5 != uVar6) {
        if (uVar7 != uVar5) {
          return 0;
        }
        puVar1 = *(uint **)(uVar5 + 0xc);
        if ((puVar1 == (uint *)0x0) || (bVar3 = true, puVar1[2] == 0)) {
          bVar3 = false;
        }
        if (bVar3) {
          return 0;
        }
        uVar7 = 0;
        if (puVar1 != (uint *)0x0) {
          uVar7 = *puVar1;
        }
        if (uVar7 != uVar6) {
          return 0;
        }
        uVar7 = *(uint *)((uVar5 & 0xfffffffe) + 4);
        if ((-(uint)((uVar7 & 1) == 0) & uVar7) != uVar6) {
          return 0;
        }
        if ((*(uint *)(uStack_40 + 0x1c) & 1) == 0) {
          return 0;
        }
        uVar6 = *(uint *)(uStack_40 + 0x24);
        if ((uVar6 & 1) != 0) {
          return 0;
        }
        if (uVar6 == 0) {
          return 0;
        }
        if ((*(uint *)(uVar6 + 8) & 0x3f80) != 0x1f80) {
          return 0;
        }
        uVar7 = *(uint *)((uVar6 & 0xfffffffe) + 0x28);
        if (((uVar7 & 1) == 0) && (uVar7 != 0)) {
          return 0;
        }
        uVar7 = *(uint *)(uStack_40 + 0x14);
        if ((uVar7 & 1) != 0) {
          return 0;
        }
        if (uVar7 == 0) {
          return 0;
        }
        if ((*(uint *)(uVar7 + 8) & 0x3f80) != 0x3800) {
          return 0;
        }
        uVar2 = *(uint *)((uVar7 & 0xfffffffe) + 0x28);
        if (((uVar2 & 1) == 0) && (uVar2 != 0)) {
          return 0;
        }
        if (uVar7 != *(uint *)(*(int *)(uVar6 + 0x2c) + 0xc)) {
          return 0;
        }
        *param_6 = uVar5;
        *param_8 = uVar5;
        return 1;
      }
    }
    else {
      if (iVar4 != 3) {
        return 1;
      }
      if (uStack_40 != uVar6) {
        return 0;
      }
      uVar7 = *(uint *)((uStack_3c & 0xfffffffe) + 4);
      uVar7 = -(uint)((uVar7 & 1) == 0) & uVar7;
    }
    if (uVar7 == uVar6) {
      return 1;
    }
  }
  return 0;
}

