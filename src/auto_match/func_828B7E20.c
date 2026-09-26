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
extern unsigned int *auStack_20;
extern int fn_8288C1B8();
extern int fn_8289E3C8();
extern int fn_8289EC50();
extern unsigned int lbl_820252A8;
extern unsigned int lbl_83214048;


undefined4 *
fn_828B7E20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_20 [8];
  
  *param_1 = &lbl_820252A8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = param_2;
  lbl_83214048 = lbl_83214048 + 1;
  param_1[6] = lbl_83214048;
  param_1[7] = param_4;
  param_1[8] = 0;
  param_1[9] = param_3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  fn_8288C1B8(param_1 + 10,10);
  uVar1 = param_1[5];
  iVar2 = fn_8289E3C8((ulonglong)uVar1 + 0x1c0);
  if ((undefined4 *)(iVar2 + 0xc) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar2 + 0xc) = param_1;
  }
  fn_8289EC50(auStack_20,(ulonglong)uVar1 + 0x1c0,iVar2,0);
  return param_1;
}

