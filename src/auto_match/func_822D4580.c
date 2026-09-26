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
extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822D9460();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;


void fn_822D4580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,uint *param_8)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int in_stack_00000054;
  int in_stack_0000005c;
  undefined4 *puStack_140;
  undefined4 *puStack_13c;
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  puStack_13c = (undefined4 *)fn_8265C9E0(0x1d0);
  if (puStack_13c == (undefined4 *)0x0) {
    puStack_13c = (undefined4 *)0x0;
  }
  else {
    puStack_13c[1] = 1;
    *puStack_13c = &lbl_821A8D8C;
    puStack_13c[2] = 1;
    if (puStack_13c + 4 != (undefined4 *)0x0) {
      fn_822D9460(puStack_13c + 4,param_2,param_3,param_4,param_5,param_6,param_8);
    }
  }
  puStack_140 = puStack_13c + 4;
  puVar2 = puStack_13c + 0x14;
  uVar1 = fn_822C7578(puVar2,(ulonglong)*param_8 + 4);
  fn_82230218(uVar1,param_7,0,0xffffffffffffffff);
  if (in_stack_00000054 != 0) {
    fn_82230110(auStack_d0,0xffffffff821ad2f4);
    uVar1 = fn_822C7578(puVar2,auStack_d0);
    fn_82230218(uVar1,param_7,0,0xffffffffffffffff);
    fn_82230300(auStack_d0,1,0);
    fn_82230110(auStack_130,0xffffffff821ad7bc);
    fn_82230110(auStack_90,0xffffffff821ad7cc);
    uVar1 = fn_822C7578(puVar2,auStack_90);
    fn_82230218(uVar1,auStack_130,0,0xffffffffffffffff);
    fn_82230300(auStack_90,1,0);
    fn_82230300(auStack_130,1,0);
  }
  if (in_stack_0000005c != 0) {
    fn_82230110(auStack_f0,0xffffffff821ad2e4);
    fn_82230110(auStack_110,0xffffffff821ad7d4);
    uVar1 = fn_822C7578(puVar2,auStack_110);
    fn_82230218(uVar1,auStack_f0,0,0xffffffffffffffff);
    fn_82230300(auStack_110,1,0);
    fn_82230300(auStack_f0,1,0);
    fn_82230110(auStack_70,0xffffffff821ad2d4);
    fn_82230110(auStack_b0,0xffffffff821ad7e8);
    uVar1 = fn_822C7578(puVar2,auStack_b0);
    fn_82230218(uVar1,auStack_70,0,0xffffffffffffffff);
    fn_82230300(auStack_b0,1,0);
    fn_82230300(auStack_70,1,0);
  }
  fn_822C8B40(param_1,&puStack_140);
  if (puStack_13c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (param_8[1] != 0) {
    fn_822315A0();
  }
  return;
}

