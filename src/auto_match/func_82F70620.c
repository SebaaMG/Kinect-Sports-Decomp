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
extern int fn_82A277E0();
extern int fn_82A2A360();
extern int fn_82F63BA0();
extern int fn_82F68240();


undefined8 fn_82F70620(ulonglong param_1)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  
  if ((param_1 & 0xffffffff) == 0) {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = fn_82A2A360();
    uVar1 = fn_82A277E0(uVar1,0,param_1);
  }
  return uVar1;
}

