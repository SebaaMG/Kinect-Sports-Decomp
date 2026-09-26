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
extern unsigned int *auStack_70;
extern int fn_82230218();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822FB850();
extern int fn_82359C18();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;


uint * fn_8233C3F8(uint *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,uint *param_8)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar4;
  undefined8 uVar3;
  int iVar5;
  undefined4 in_stack_00000054;
  undefined1 auStack_70 [112];
  
  uVar1 = *(undefined4 *)(param_2 + 0x80);
  puVar4 = (undefined4 *)fn_8265C9E0(0xa8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 1;
    *puVar4 = &lbl_821A8D8C;
    puVar4[2] = 1;
    if (puVar4 + 4 != (undefined4 *)0x0) {
      fn_822FB850(puVar4 + 4,param_3,param_7,uVar1,param_4,param_6,in_stack_00000054);
    }
  }
  param_1[1] = (uint)puVar4;
  *param_1 = (uint)(puVar4 + 4);
  uVar3 = fn_822C7578(puVar4 + 0x14,(ulonglong)*param_8 + 4);
  fn_82230218(uVar3,param_5,0,0xffffffffffffffff);
  uVar2 = *param_1;
  iVar5 = fn_82365BD8(auStack_70,param_8);
  fn_82376640((ulonglong)uVar2 + 0x30,iVar5);
  if (*(int *)(iVar5 + 4) != 0) {
    fn_822315A0();
  }
  fn_822C8B40(param_2,param_1);
  if (param_8[1] != 0) {
    fn_822315A0();
  }
  fn_82359C18(in_stack_00000054);
  return param_1;
}

