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
extern int fn_822975D8();
extern int fn_82A1C098();
extern int fn_82CE0EB0();
extern unsigned int lbl_82026038;


undefined4 *
fn_828C11D0(undefined4 *param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  *param_1 = &lbl_82026038;
  *(undefined8 *)(param_1 + 2) = *param_3;
  param_1[9] = 7;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  fn_822975D8(param_1 + 4,param_4,0,0xffffffffffffffff);
  param_1[0x12] = param_2;
  *(undefined1 *)(param_1 + 0x13) = 0;
  puVar2 = param_1 + 10;
  lVar3 = 7;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (7 < (uint)param_4[5]) {
    param_4 = (undefined4 *)*param_4;
  }
  iVar1 = fn_82CE0EB0(param_1[0x12],1,param_1 + 2,param_4,param_1 + 0xb);
  if (iVar1 != 0) {
    if (iVar1 == 0x3e5) {
      *(undefined1 *)(param_1 + 0x13) = 1;
      return param_1;
    }
    fn_82A1C098(param_1 + 0xb);
  }
  *(undefined1 *)(param_1 + 0x13) = 0;
  return param_1;
}

