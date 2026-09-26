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
extern int fn_82F67A88();
extern int fn_82F67DAC();
extern int fn_82F68240();
extern int fn_82F6AC80();
extern unsigned int uStack0000002c;


undefined4
fn_82F67CF8(undefined8 param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uStack0000002c;
  
  uStack0000002c = (undefined4)param_4;
  if (((param_2 & 0xffffffff) != 0) && ((param_3 & 0xffffffff) != 0)) {
    if (param_4 != 0) {
      fn_82F6AC80(param_4);
      uVar2 = fn_82F67A88(param_1,param_2,param_3,param_4,param_5,param_6);
      fn_82F67DAC();
      return uVar2;
    }
    puVar1 = (undefined4 *)fn_82F68240();
    *puVar1 = 0x16;
    fn_82F63BA0();
  }
  return 0;
}

