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
extern int fn_8263AB38();
extern int fn_8263BFD0();
extern int fn_82F68CC0();
extern unsigned int uStack_50;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


longlong fn_82A93A10(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                      ulonglong param_5,ulonglong param_6,undefined8 param_7,int param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  int in_stack_00000074;
  int in_stack_0000007c;
  undefined4 *in_stack_00000084;
  uint *in_stack_0000008c;
  uint uStack_90;
  uint uStack_8c;
  undefined8 uStack_88;
  uint auStack_80 [5];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_60;
  uint uStack_50;
  
  fn_8263AB38(param_6 & 0x3f,&uStack_8c,&uStack_90);
  if ((param_4 & 0xffffffff) != 1) {
    if ((param_4 & 0xffffffff) != 0) goto LAB_82a93ac0;
    if ((param_1 & 0xffffffff) == 1) {
      if (((param_2 & 0xffffffff) != 1) || ((param_3 & 0xffffffff) != 1)) goto LAB_82a93ac0;
      if (param_8 == 0) goto LAB_82a93aa0;
    }
    if (((((param_1 & 0xffffffff) != 3) || ((param_2 & 0xffffffff) != 3)) ||
        ((param_3 & 0xffffffff) != 3)) || (param_8 == 0)) goto LAB_82a93ac0;
  }
LAB_82a93aa0:
  if (in_stack_00000074 == 3) {
    trapWord(6,(ulonglong)uStack_90,0);
  }
LAB_82a93ac0:
  lVar5 = 6;
  puVar1 = &uStack_88;
  do {
    puVar2 = puVar1;
    puVar1 = puVar2 + 1;
    *puVar1 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined4 *)(puVar2 + 2) = 0;
  fn_8263BFD0(in_stack_00000074,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  uStack_6c = 0xffff0000;
  uStack_68 = 0xffff0000;
  uVar3 = 3;
  auStack_80[1] = 1;
  uStack_60 = in_stack_0000005c & 0xfffff000 | uStack_60 & 0xfff;
  auStack_80[0] = 3;
  if ((param_5 & 4) != 0) {
    uVar3 = 0x200003;
    auStack_80[0] = 0x200003;
  }
  if ((param_5 & 0x200) != 0) {
    auStack_80[0] = uVar3 | 0x400000;
  }
  if ((ulonglong)uStack_8c == 0) {
    uVar4 = (ulonglong)uStack_90;
    uStack_50 = uStack_50 & 0xfff;
  }
  else if (in_stack_00000064 == 0xffffffff) {
    uVar4 = (ulonglong)uStack_90 + 0xfff & 0xfffff000;
    uStack_50 = uStack_50 & 0xfff | (int)uVar4 + in_stack_0000005c & 0xfffff000;
  }
  else {
    uVar4 = (ulonglong)uStack_90;
    uStack_50 = in_stack_00000064 & 0xfffff000 | uStack_50 & 0xfff;
  }
  if (in_stack_00000084 != (undefined4 *)0x0) {
    *in_stack_00000084 = (int)uVar4;
  }
  if (in_stack_0000008c != (uint *)0x0) {
    *in_stack_0000008c = uStack_8c;
  }
  if (in_stack_0000007c != 0) {
    fn_82F68CC0(in_stack_0000007c,auStack_80,0x34,1,0xffffffffffff0000,0xffffffffffff0000);
  }
  return uVar4 + uStack_8c;
}

