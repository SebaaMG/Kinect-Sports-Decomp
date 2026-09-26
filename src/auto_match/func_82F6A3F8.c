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
extern int fn_82F68240();
extern int fn_82F68CC0();
extern int fn_82F691F0();


undefined4 fn_82F6A3F8(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((int)param_4 != 0) {
    if ((param_1 & 0xffffffff) == 0) {
      puVar1 = (undefined4 *)fn_82F68240();
      *puVar1 = 0x16;
      fn_82F63BA0();
      return 0x16;
    }
    if (((param_3 & 0xffffffff) == 0) || ((param_2 & 0xffffffff) < (param_4 & 0xffffffff))) {
      fn_82F691F0(param_1,0,param_2);
      if ((param_3 & 0xffffffff) == 0) {
        puVar1 = (undefined4 *)fn_82F68240();
        uVar2 = 0x16;
      }
      else {
        if ((param_4 & 0xffffffff) <= (param_2 & 0xffffffff)) {
          return 0x16;
        }
        puVar1 = (undefined4 *)fn_82F68240();
        uVar2 = 0x22;
      }
      *puVar1 = uVar2;
      fn_82F63BA0();
      return uVar2;
    }
    fn_82F68CC0(param_1,param_3,param_4);
  }
  return 0;
}

