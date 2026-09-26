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
extern int fn_8295D318();


void fn_8295E268(int param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = *(uint **)(param_1 + 0x104);
  uVar3 = (ulonglong)puVar1[2];
  uVar2 = (ulonglong)*puVar1;
  fn_8295D318(param_1,0x5a,puVar1[4],puVar1[3],uVar3,(uVar2 & 0xfffff) * 4 + uVar3,
                    (uVar2 & 0xfffff) * 8 + uVar3,uVar2 & 0xfffff);
  return;
}

