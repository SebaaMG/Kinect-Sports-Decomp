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


/* WARNING: Removing unreachable block (ram,0x82820f10) */
/* WARNING: Removing unreachable block (ram,0x82820f08) */
/* WARNING: Removing unreachable block (ram,0x82820f0c) */
/* WARNING: Removing unreachable block (ram,0x82820fac) */

void fn_8282B8A0(undefined8 param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x14) != 0) {
    uVar1 = **(uint **)(param_2 + 0x10);
    **(uint **)(param_2 + 0x10) =
         (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
         ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
    return;
  }
  return;
}

