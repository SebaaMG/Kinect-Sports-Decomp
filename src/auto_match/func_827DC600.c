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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_827DC918();
extern int fn_827DE048();
extern int fn_827E0DD8();
extern int fn_82F691F0();


void fn_827DC600(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar2;
  undefined8 uVar1;
  undefined4 *puStack00000014;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [64];
  
  puStack00000014 = param_1;
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  *param_1 = uVar2;
  uVar1 = fn_827DE048(auStack_60);
  fn_827DC918(param_1 + 1,uVar1);
  uVar1 = fn_827DE048(auStack_40);
  fn_827DC918(param_1 + 0xb,uVar1);
  param_1[0x2d6] = param_3;
  uVar1 = fn_827DE048(auStack_60);
  fn_827E0DD8(param_1 + 0x2d7,auStack_70,uVar1);
  uVar1 = fn_827DE048(auStack_40);
  fn_827DC918(param_1 + 0x2f5,uVar1);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x15,0,0xa00);
}

