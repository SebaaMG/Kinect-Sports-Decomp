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
extern int fn_82F63BA0();
extern int fn_82F66B00();
extern int fn_82F68240();


undefined8 fn_82F66D08(undefined2 *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  undefined4 uVar3;
  
  if ((((param_3 & 0xffffffff) == 0) || (param_1 == (undefined2 *)0x0)) ||
     ((param_2 & 0xffffffff) == 0)) {
    puVar2 = (undefined4 *)fn_82F68240();
    uVar3 = 0x16;
  }
  else {
    uVar1 = fn_82F66B00(0xffffffff82f7ac58,param_1,param_2,param_3,0,param_4);
    if ((int)uVar1 < 0) {
      *param_1 = 0;
    }
    if ((int)uVar1 != -2) {
      return uVar1;
    }
    puVar2 = (undefined4 *)fn_82F68240();
    uVar3 = 0x22;
  }
  *puVar2 = uVar3;
  fn_82F63BA0();
  return 0xffffffffffffffff;
}

