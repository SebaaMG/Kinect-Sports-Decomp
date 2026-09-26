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
extern int fn_8263CBB0();


void fn_82652E80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar2 = (undefined4 *)0x831beb70;
  do {
    iVar1 = (int)((uVar3 & 0xffffffff) >> 2);
    *(undefined4 *)((iVar1 + 0x10) * 4 + param_1) = puVar2[1];
    *(undefined4 *)((iVar1 + 0x89) * 4 + param_1) = *puVar2;
    (**(code **)((int)uVar3 + param_1 + 0x40))(param_1,puVar2[2]);
    uVar3 = uVar3 + 4;
    puVar2 = puVar2 + 3;
  } while ((uVar3 & 0xffffffff) < 0x194);
  uVar3 = 0;
  puVar2 = (undefined4 *)0x831bf038;
  do {
    iVar1 = (int)((uVar3 & 0xffffffff) >> 2);
    *(undefined4 *)((iVar1 + 0x75) * 4 + param_1) = puVar2[-1];
    *(undefined4 *)((iVar1 + 0xee) * 4 + param_1) = puVar2[-2];
    (**(code **)((int)uVar3 + param_1 + 0x1d4))(param_1,0,*puVar2);
    uVar3 = uVar3 + 4;
    puVar2 = puVar2 + 3;
  } while ((uVar3 & 0xffffffff) < 0x50);
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(param_1,0,0,0x80000000);
}

