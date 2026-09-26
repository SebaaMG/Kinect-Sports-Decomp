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
extern int fn_82F63CA0();
extern int fn_82F68240();


undefined4 fn_82F640F0(ulonglong param_1,uint param_2,ulonglong param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((uint)param_4 == 0) {
LAB_82f6416c:
    uVar2 = 0;
  }
  else {
    if ((param_1 & 0xffffffff) == 0) {
      puVar1 = (undefined4 *)fn_82F68240();
      *puVar1 = 0x16;
      fn_82F63BA0();
      return 0x16;
    }
    if ((param_3 & 0xffffffff) == 0) {
      puVar1 = (undefined4 *)fn_82F68240();
      uVar2 = 0x16;
    }
    else {
      if ((uint)param_4 <= param_2) {
        fn_82F63CA0(param_1,param_3,param_4);
        goto LAB_82f6416c;
      }
      puVar1 = (undefined4 *)fn_82F68240();
      uVar2 = 0x22;
    }
    *puVar1 = uVar2;
    fn_82F63BA0();
  }
  return uVar2;
}

