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
extern int fn_8267BE38();
extern int fn_826C6368();


void fn_827552C8(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_2 != (int *)0x0) {
    *param_2 = *param_2 + 1;
  }
  puVar1 = *(uint **)(param_1 + 0x28);
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
    *puVar1 = (uint)((ulonglong)uVar2 - 1);
    if ((ulonglong)uVar2 - 1 == 0) {
      fn_826C6368(puVar1);
      fn_8267BE38(puVar1);
    }
  }
  *(int **)(param_1 + 0x28) = param_2;
  return;
}

