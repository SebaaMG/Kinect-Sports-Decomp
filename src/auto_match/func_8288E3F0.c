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
extern int fn_82F63CA0();


/* WARNING: Removing unreachable block (ram,0x8288e410) */

void fn_8288E3F0(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1];
  uVar3 = param_2 + 0x1f >> 5;
  if (((ulonglong)uVar3 < (ulonglong)(uint)((int)(uVar1 - *param_1) >> 2)) &&
     (uVar4 = (ulonglong)uVar3 * 4 + (ulonglong)*param_1, (uVar4 & 0xffffffff) != (ulonglong)uVar1))
  {
    fn_82F63CA0(uVar4,(ulonglong)uVar1,0);
    param_1[1] = (uint)uVar4;
  }
  param_1[4] = param_2;
  if ((param_2 & 0x1f) != 0) {
    iVar2 = uVar3 * 4 + *param_1;
    *(uint *)(iVar2 + -4) = (1 << (param_2 & 0x1f)) - 1U & *(uint *)(iVar2 + -4);
  }
  return;
}

