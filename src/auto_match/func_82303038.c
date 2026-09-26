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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C70F0();
extern int fn_82303AC0();
extern int fn_8234E590();
extern int fn_8251F720();
extern unsigned int lbl_821AEE3C;
extern unsigned int lbl_821CC160;


undefined4 *
fn_82303038(undefined4 *param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  fn_82230110(auStack_90,0xffffffff821aee20);
  fn_822C70F0(param_1,auStack_90,param_2);
  fn_82230300(auStack_90,1,0);
  param_1[0x15] = param_4;
  uVar2 = lbl_821CC160;
  *param_1 = &lbl_821AEE3C;
  param_1[0x16] = uVar2;
  uVar2 = fn_8251F720(param_5,0);
  param_1[0x17] = uVar2;
  fn_8234E590(param_1 + 0x18,param_3,*(undefined4 *)(param_2 + 8),
                    *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_4 + 0x118));
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x34) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x38) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  fn_82230110(auStack_70,0xffffffff821aee2c);
  fn_82303AC0(param_1,param_1 + 0x2a,auStack_70);
  fn_82230300(auStack_70,1,0);
  fn_82230110(auStack_50,0xffffffff821aee34);
  fn_82303AC0(param_1,param_1 + 0x2b,auStack_50);
  fn_82230300(auStack_50,1,0);
  return param_1;
}

