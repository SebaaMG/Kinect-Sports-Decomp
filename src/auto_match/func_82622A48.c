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
extern int fn_82540308();
extern int fn_826230E8();
extern int fn_8265C9E0();
extern unsigned int lbl_821CAD7C;


undefined4 *
fn_82622A48(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,ulonglong param_7)

{
  undefined4 uVar2;
  undefined4 *puVar3;
  ulonglong uVar1;
  longlong lVar4;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  *param_1 = &lbl_821CAD7C;
  param_1[5] = param_6;
  uVar2 = fn_82540308(0);
  param_1[6] = uVar2;
  puVar3 = (undefined4 *)fn_8265C9E0(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  param_1[7] = puVar3;
  if ((param_7 & 0xffffffff) == 0) {
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  else {
    puVar3 = param_1 + 8;
    lVar4 = 3;
    do {
      uVar1 = fn_8265C9E0(0x20);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_826230E8(uVar1,param_7);
      }
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 1;
      *puVar3 = uVar2;
    } while (lVar4 != 0);
  }
  return param_1;
}

