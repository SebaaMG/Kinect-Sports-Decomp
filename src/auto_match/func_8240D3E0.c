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
extern int fn_822315A0();
extern int fn_8229A560();
extern int fn_822BE6D0();
extern int fn_82359620();
extern int fn_82404F30();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern unsigned int lbl_82191B24;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B817C;
extern unsigned int lbl_821B81AC;
extern unsigned int lbl_821B81BC;


undefined4 *
fn_8240D3E0(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  
  param_1[1] = (int)param_2;
  *param_1 = &lbl_821B817C;
  param_1[4] = (int)param_4;
  param_1[2] = &lbl_821B81BC;
  param_1[3] = param_3;
  fn_822BE6D0(param_1 + 5,param_4);
  param_1[0x11] = param_1 + 2;
  param_1[0x10] = lbl_82191B24;
  puVar3 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  param_1[0x16] = 0;
  param_1[8] = &lbl_821B81AC;
  fn_8229A560(param_1 + 0x18,param_2);
  uVar2 = fn_8251F720(param_6 + 0xa8,0);
  uVar1 = param_1[1];
  puVar3 = (undefined4 *)fn_8265C9E0(0x1350);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 1;
    *puVar3 = &lbl_821A8D8C;
    puVar3[2] = 1;
    if (puVar3 + 4 != (undefined4 *)0x0) {
      fn_82404F30(puVar3 + 4,uVar1,param_1,param_1 + 2,param_5,uVar2,param_7,param_8);
    }
  }
  puStack_50 = puVar3 + 4;
  puStack_4c = puVar3;
  fn_82359620(param_1[1],&puStack_50);
  if (puVar3 != (undefined4 *)0x0) {
    fn_822315A0(puVar3);
  }
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8251FA58(uVar2);
  }
  return param_1;
}

