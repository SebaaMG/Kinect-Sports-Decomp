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
extern int fn_82E4FE08();
extern int fn_82F68CC0();


uint * fn_82EE00C0(ulonglong param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 < 0xfffffffb) {
    puVar1 = (uint *)fn_82E4FE08(param_2 + 0x15 & 0xfffffff0);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = param_2;
      puVar1 = puVar1 + 1;
      if ((param_1 & 0xffffffff) != 0) {
        fn_82F68CC0(puVar1,param_1,param_2);
      }
      *(undefined1 *)((int)puVar1 + param_2) = 0;
      *(undefined2 *)((param_2 + 1 & 0xfffffffe) + (int)puVar1) = 0;
    }
  }
  else {
    puVar1 = (uint *)0x0;
  }
  return puVar1;
}

