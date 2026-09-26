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
extern unsigned int iStack00000010;


undefined8 fn_82AF5968(undefined8 param_1,ulonglong param_2)

{
  uint *puVar1;
  uint uVar2;
  int iStack00000010;
  
  iStack00000010 = (int)((ulonglong)param_1 >> 0x20);
  if ((((*(uint *)(iStack00000010 + 8) >> 0x17 & 1) == 0) &&
      ((*(uint *)(iStack00000010 + 8) & 0x1c000) == 0x4000)) && ((param_2 & 0x1e00000000) == 0)) {
    for (puVar1 = *(uint **)(iStack00000010 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2])
    {
      uVar2 = puVar1[4];
      if (((uVar2 != 0) && ((*(uint *)(uVar2 + 8) & 0x3f80) == 0x3700)) &&
         ((*puVar1 & 0xe000000) != 0)) goto LAB_82af59d8;
    }
    uVar2 = 0;
LAB_82af59d8:
    if (uVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

