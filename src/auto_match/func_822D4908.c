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
extern unsigned int *auStack_88;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822D81D8();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;


void fn_822D4908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *in_stack_00000054;
  int in_stack_0000005c;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [128];
  
  fn_82230300(auStack_80,0,0);
  if (param_6 == 1) {
    uVar4 = 10;
    uVar3 = 0xffffffff821ad394;
  }
  else if (param_6 == 2) {
    if ((int)param_7 == 0) {
      uVar4 = 8;
      uVar3 = 0xffffffff821ad3b0;
    }
    else {
      uVar4 = 0xf;
      uVar3 = 0xffffffff821ad3a0;
    }
  }
  else if (param_6 == 4) {
    uVar4 = 0xb;
    uVar3 = 0xffffffff821ad3bc;
  }
  else {
    if (((param_6 != 8) && (param_6 != 0x10)) && (param_6 != 0x20)) goto LAB_822d49d4;
    uVar4 = 9;
    uVar3 = 0xffffffff821ad3c8;
  }
  fn_82230360(auStack_80,uVar3,uVar4);
LAB_822d49d4:
  puVar1 = (undefined4 *)fn_8265C9E0(0xf8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 1;
    *puVar1 = &lbl_821A8D8C;
    puVar1[2] = 1;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      uVar3 = fn_82365BD8(&puStack_90,in_stack_0000005c);
      fn_822D81D8(puVar1 + 4,param_2,param_3,param_4,param_5,auStack_80,param_7,uVar3);
    }
  }
  puStack_90 = puVar1 + 4;
  puStack_8c = puVar1;
  uVar3 = fn_822C7578(puVar1 + 0x14,(ulonglong)*in_stack_00000054 + 4);
  fn_82230218(uVar3,param_8,0,0xffffffffffffffff);
  iVar2 = fn_82365BD8(auStack_88,in_stack_00000054);
  fn_82376640(puVar1 + 0x10,iVar2);
  if (*(int *)(iVar2 + 4) != 0) {
    fn_822315A0();
  }
  fn_822C8B40(param_1,&puStack_90);
  if (puStack_8c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82230300(auStack_80,1,0);
  if (in_stack_00000054[1] != 0) {
    fn_822315A0();
  }
  if (*(int *)(in_stack_0000005c + 4) != 0) {
    fn_822315A0();
  }
  return;
}

