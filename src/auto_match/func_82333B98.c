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
extern unsigned int *auStack_68;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822FB670();
extern int fn_82333AB0();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;


void fn_82333B98(int param_1,undefined8 param_2,undefined8 param_3,uint *param_4,uint *param_5,
                  uint *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 *puVar3;
  undefined8 uVar2;
  int iVar4;
  uint *in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  undefined1 auStack_68 [104];
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  puVar3 = (undefined4 *)fn_8265C9E0(0x88);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 1;
    *puVar3 = &lbl_821AD588;
    puVar3[2] = 1;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      fn_822FB670(puVar3 + 3,param_2,in_stack_0000005c,uVar1,param_2,0);
    }
  }
  puStack_70 = puVar3 + 3;
  puStack_6c = puVar3;
  uVar2 = fn_822C7578((ulonglong)*param_4 + 0x40,param_2);
  fn_82230218(uVar2,param_2,0,0xffffffffffffffff);
  uVar2 = fn_822C7578((ulonglong)*param_5 + 0x40,param_2);
  fn_82230218(uVar2,param_2,0,0xffffffffffffffff);
  uVar2 = fn_822C7578((ulonglong)*param_6 + 0x40,param_2);
  fn_82230218(uVar2,param_2,0,0xffffffffffffffff);
  uVar2 = fn_822C7578(puVar3 + 0x13,(ulonglong)*in_stack_00000054 + 4);
  fn_82230218(uVar2,param_3,0,0xffffffffffffffff);
  iVar4 = fn_82365BD8(auStack_68,in_stack_00000054);
  fn_82376640(puVar3 + 0xf,iVar4);
  if (*(int *)(iVar4 + 4) != 0) {
    fn_822315A0();
  }
  uVar2 = fn_82365BD8(auStack_68,&puStack_70);
  fn_82333AB0(param_7,param_8,uVar2,1);
  fn_822C8B40(param_1,&puStack_70);
  if (puStack_6c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82230300(param_2,1,0);
  fn_82230300(param_3,1,0);
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  if (param_5[1] != 0) {
    fn_822315A0();
  }
  if (param_6[1] != 0) {
    fn_822315A0();
  }
  if (in_stack_00000054[1] != 0) {
    fn_822315A0();
  }
  return;
}

