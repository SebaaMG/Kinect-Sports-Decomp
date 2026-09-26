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
extern int fn_82A3FE48();
extern int fn_82A5F3B8();
extern int fn_82F691F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820143E0;
extern unsigned int lbl_82089DC0;
extern unsigned int lbl_82089DD4;
extern unsigned int lbl_82089DE8;
extern unsigned int lbl_821AAD20;


void fn_82A4C800(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fn_82A5F3B8(param_1,0xffffffff8315d988);
  uVar3 = lbl_821AAD20;
  uVar2 = lbl_820143E0;
  uVar1 = lbl_82002AE0;
  *param_1 = &lbl_82089DE8;
  param_1[0x16] = uVar3;
  param_1[0x17] = uVar2;
  param_1[8] = &lbl_82089DD4;
  param_1[0x18] = uVar1;
  param_1[9] = &lbl_82089DC0;
  param_1[0x19] = uVar1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  fn_82A3FE48(0xffffffff83219d50);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 10,0,0x28);
}

