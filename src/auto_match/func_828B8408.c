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
extern int fn_8265C9E0();
extern int fn_828B7E20();
extern int fn_828ED4C0();
extern unsigned int lbl_820252D0;


undefined4 *
fn_828B8408(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  
  fn_828B7E20(param_1,param_2,param_5,param_7);
  puVar3 = (undefined1 *)((int)param_1 + 0x37);
  *param_1 = &lbl_820252D0;
  lVar4 = 8;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  param_1[0x10] = param_3;
  param_1[0x11] = param_4;
  param_1[0x12] = param_6;
  *(undefined1 *)(param_1 + 0x13) = 0;
  iVar1 = fn_8265C9E0(0x448);
  if (iVar1 == 0) {
    param_1[0x14] = 0;
  }
  else {
    uVar2 = fn_828ED4C0();
    param_1[0x14] = uVar2;
  }
  return param_1;
}

