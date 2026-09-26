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
extern unsigned int *auStack_64;
extern int fn_829F9E30();
extern int fn_829FE8F8();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000040;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


ulonglong fn_829FF3B8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  float fVar2;
  int in_r0;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  float in_stack_00000028;
  float in_stack_00000048;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 auStack_64 [25];
  
  puVar1 = (undefined4 *)((uint)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fVar2 = lbl_821AAD20;
  bVar5 = in_stack_00000028 == lbl_821AAD20;
  puVar1 = (undefined4 *)((uint)(&stack0x00000040 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  if ((bVar5) || (in_stack_00000048 == fVar2)) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    fn_829FE8F8(&uStack_70,&uStack_6c);
    fn_829FE8F8(auStack_64,&uStack_68);
    uVar3 = fn_829F9E30(param_1,uStack_70,uStack_6c,param_2,auStack_64[0],uStack_68,param_3);
    uVar4 = fn_829F9E30(param_1,uStack_70,uStack_68,param_2,auStack_64[0],uStack_68,param_3);
    if ((uVar4 & 0xffffffff) <= (uVar3 & 0xffffffff)) {
      uVar3 = uVar4;
    }
    uVar4 = fn_829F9E30(param_1,auStack_64[0],uStack_6c,param_2,auStack_64[0],uStack_68,
                              param_3);
    if ((uVar4 & 0xffffffff) <= (uVar3 & 0xffffffff)) {
      uVar3 = uVar4;
    }
  }
  return uVar3;
}

