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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C70F0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822D4FA0();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821ADAB4;


void fn_822D4C10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint *param_7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar4;
  ulonglong uVar3;
  undefined4 *puStack_c0;
  undefined4 *puStack_bc;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  puStack_bc = (undefined4 *)fn_8265C9E0(0xc0);
  if (puStack_bc == (undefined4 *)0x0) {
    puStack_bc = (undefined4 *)0x0;
  }
  else {
    puVar4 = puStack_bc + 4;
    puStack_bc[1] = 1;
    *puStack_bc = &lbl_821A8D8C;
    puStack_bc[2] = 1;
    if (puVar4 != (undefined4 *)0x0) {
      fn_822C70F0(puVar4,param_2,param_5);
      puStack_bc[0x19] = (int)param_3;
      puStack_bc[0x1a] = (int)param_4;
      *puVar4 = &lbl_821ADAB4;
    }
  }
  puStack_c0 = puStack_bc + 4;
  fn_822C8B40(param_1,&puStack_c0);
  uVar3 = ZEXT48(puStack_c0);
  uVar1 = fn_822C7578(uVar3 + 0x40,(ulonglong)*param_7 + 4);
  fn_82230218(uVar1,param_6,0,0xffffffffffffffff);
  iVar2 = fn_82365BD8(auStack_b8,param_7);
  fn_82376640(uVar3 + 0x30,iVar2);
  if (*(int *)(iVar2 + 4) != 0) {
    fn_822315A0();
  }
  fn_82230110(auStack_b0,0xffffffff821ad3a0);
  uVar1 = fn_82365BD8(auStack_b8,&puStack_c0);
  fn_822D4FA0(auStack_b0,uVar1,param_4,param_3,7);
  fn_82230300(auStack_b0,1,0);
  fn_82230110(auStack_90,0xffffffff821ad690);
  uVar1 = fn_82365BD8(auStack_b8,&puStack_c0);
  fn_822D4FA0(auStack_90,uVar1,param_4,param_3,8);
  fn_82230300(auStack_90,1,0);
  fn_82230110(auStack_70,0xffffffff821ad6a4);
  uVar1 = fn_82365BD8(auStack_b8,&puStack_c0);
  fn_822D4FA0(auStack_70,uVar1,param_4,param_3,0x10);
  fn_82230300(auStack_70,1,0);
  if (puStack_bc != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (param_7[1] != 0) {
    fn_822315A0();
  }
  return;
}

