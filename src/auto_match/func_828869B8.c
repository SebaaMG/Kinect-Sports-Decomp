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
extern unsigned int lbl_83212A1C;


void fn_828869B8(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = *(uint **)(param_2 * 4 + param_1);
  uVar1 = *puVar2;
  uVar3 = *(uint *)(param_2 * 4 + lbl_83212A1C);
  *puVar2 = uVar1 + 1;
  if (uVar1 + 1 < (uint)(1 << (uVar3 & 0x3f))) {
    return;
  }
  *puVar2 = 0;
  return;
}

