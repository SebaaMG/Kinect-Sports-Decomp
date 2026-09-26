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
extern unsigned int uStack00000020;
extern unsigned int uStack00000024;
extern unsigned int uStack00000028;
extern unsigned int uStack0000002c;


undefined8 fn_82E5C890(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  
  uStack00000020 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack00000024 = (undefined4)param_2;
  uStack00000028 = (undefined4)((ulonglong)param_3 >> 0x20);
  uStack0000002c = (undefined4)param_3;
  *(undefined4 *)(param_1 + 0x58) = uStack00000020;
  *(undefined4 *)(param_1 + 0x5c) = uStack00000024;
  *(undefined4 *)(param_1 + 0x60) = uStack00000028;
  *(undefined4 *)(param_1 + 100) = uStack0000002c;
  return 0;
}

