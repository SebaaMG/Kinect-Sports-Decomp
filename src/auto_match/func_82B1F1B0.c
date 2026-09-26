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
extern int fn_82AC68F0();


void fn_82B1F1B0(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = -(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4);
  do {
    if (uVar3 == 0) {
      return;
    }
    if (*(int *)(uVar3 + 0x2c) == param_3) {
      uVar1 = fn_82AC68F0(param_1);
      *(uint *)(uVar1 + 0x50) = uVar3;
      *(uint *)(uVar3 + 0x50) = uVar1;
      puVar2 = (uint *)(uVar1 & 0xfffffffe);
      *puVar2 = *param_2;
      *(uint **)(*param_2 & 0xfffffffe) = puVar2;
      puVar2[1] = (uint)param_2 | 1;
      *param_2 = (uint)(puVar2 + 1);
    }
    uVar3 = *(uint *)((uVar3 & 0xfffffffe) + 4);
  } while ((uVar3 & 1) == 0);
  return;
}

