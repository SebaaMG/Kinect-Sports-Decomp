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
extern int fn_82579EF0();
extern int fn_82579F78();
extern int fn_8265C9E0();
extern int fn_8265CA60();


void fn_8245AE90(int param_1,longlong param_2)

{
  uint uVar2;
  undefined8 uVar1;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  *(int *)(param_1 + 4) = (int)param_2;
  param_2 = param_2 + 0x6c8;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar2 = fn_82579F78(param_2,0xffffffff821babd4);
  *(uint *)(param_1 + 8) = uVar2 & 0xff;
  uVar2 = fn_82579F78(param_2,0xffffffff821babe8);
  *(uint *)(param_1 + 0x10) = uVar2 & 0xff;
  uVar1 = fn_82579EF0(param_2,0xffffffff821bac10,0);
  if (((int)uVar1 < 1) || (0x80000 < (int)uVar1)) {
    uVar1 = 0x80000;
  }
  puVar3 = (undefined4 *)fn_8265C9E0(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar4 = fn_8265CA60(uVar1);
    *puVar3 = uVar4;
    puVar3[1] = (int)uVar1;
    puVar3[2] = 0;
  }
  *(undefined4 **)(param_1 + 0x20) = puVar3;
  return;
}

