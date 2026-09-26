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
extern int fn_8267BED0();


void fn_827A8420(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)fn_8267BED0(param_1,param_2,0);
  uVar1 = (uint)param_2 & 0xfffffff;
  *puVar2 = *puVar2 & 0xf0000000 | uVar1;
  if (param_3 == 0) {
    *puVar2 = uVar1 | 0xc0000000;
    *(undefined1 *)(puVar2 + 7) = 0;
    *(undefined2 *)((int)puVar2 + 0x1a) = 0;
    *(undefined1 *)((int)puVar2 + 0x1d) = 0;
    *(undefined2 *)((int)puVar2 + 0x16) = 0;
    *(undefined2 *)(puVar2 + 5) = 0;
  }
  else {
    *puVar2 = uVar1 | 0x40000000;
    puVar2[1] = 0;
    *(undefined2 *)((int)puVar2 + 0x26) = 0;
    *(undefined2 *)(puVar2 + 10) = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[8] = 0;
  }
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = 0;
  return;
}

