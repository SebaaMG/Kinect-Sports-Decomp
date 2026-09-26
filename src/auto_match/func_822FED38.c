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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82230218();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822EA970();
extern int fn_82365BD8();
extern int fn_82376640();
extern unsigned int iStack_54;


uint * fn_822FED38(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,uint *param_6,uint *param_7,uint *param_8)

{
  uint uVar1;
  uint *puVar3;
  undefined8 uVar2;
  int iVar4;
  uint *in_stack_00000054;
  undefined4 auStack_60 [2];
  undefined1 auStack_58 [4];
  int iStack_54;
  
  auStack_60[0] = 0;
  puVar3 = (uint *)fn_822EA970(auStack_58,param_5,param_4,param_3,param_5,auStack_60);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  *puVar3 = 0;
  puVar3[1] = 0;
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  uVar1 = *in_stack_00000054;
  uVar2 = fn_822C7578((ulonglong)*param_1 + 0x40,(ulonglong)*param_8 + 4);
  fn_82230218(uVar2,(ulonglong)uVar1 + 4,0,0xffffffffffffffff);
  uVar1 = *param_1;
  iVar4 = fn_82365BD8(auStack_60,param_8);
  fn_82376640((ulonglong)uVar1 + 0x30,iVar4);
  if (*(int *)(iVar4 + 4) != 0) {
    fn_822315A0();
  }
  fn_822C8B40(param_2,param_1);
  uVar2 = fn_822C7578((ulonglong)*param_6 + 0x40,param_5);
  fn_82230218(uVar2,param_5,0,0xffffffffffffffff);
  uVar2 = fn_822C7578((ulonglong)*param_7 + 0x40,param_5);
  fn_82230218(uVar2,param_5,0,0xffffffffffffffff);
  return param_1;
}

