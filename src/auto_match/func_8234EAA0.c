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
extern int fn_82564518();
extern int fn_8265CA20();
extern unsigned int uStack_28;


void fn_8234EAA0(int param_1,int *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  ushort *puVar2;
  ushort *puStack_30;
  ushort *puStack_2c;
  undefined4 uStack_28;
  
  uVar1 = (**(code **)(*param_2 + 0x14))(param_2,param_3);
  puStack_30 = (ushort *)0x0;
  puStack_2c = (ushort *)0x0;
  uStack_28 = 0;
  fn_82564518(&puStack_30,param_2,uVar1);
  for (puVar2 = puStack_30; puVar2 != puStack_2c; puVar2 = puVar2 + 1) {
    *(undefined4 *)((uint)*puVar2 * 4 + *(int *)(param_1 + 0x60)) = param_4;
  }
  if (puStack_30 != (ushort *)0x0) {
    fn_8265CA20(puStack_30);
  }
  return;
}

