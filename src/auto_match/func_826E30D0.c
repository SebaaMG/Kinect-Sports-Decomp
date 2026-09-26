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
extern int fn_826E1E10();
extern int fn_826E1F68();
extern unsigned int lbl_8200D0F8;


undefined4 * fn_826E30D0(undefined4 *param_1,ulonglong param_2,undefined1 param_3)

{
  ulonglong uVar1;
  uint *puVar2;
  
  param_1[1] = 1;
  *param_1 = &lbl_8200D0F8;
  param_1[4] = 0x400;
  param_1[2] = 0x30;
  param_1[3] = 3;
  param_1[5] = 0x400;
  puVar2 = param_1 + 6;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = param_3;
  uVar1 = (ulonglong)(uint)param_1[7];
  fn_826E1F68(puVar2,puVar2,param_2);
  if (uVar1 < (param_2 & 0xffffffff)) {
    fn_826E1E10(uVar1 * 0x28 + (ulonglong)*puVar2,param_2 - uVar1);
  }
  return param_1;
}

