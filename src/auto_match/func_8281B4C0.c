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
extern int fn_82819110();
extern int fn_82A1F248();
extern int fn_82F691F0();
extern unsigned int lbl_8320A5F8;
extern unsigned int lbl_8320A630;


void fn_8281B4C0(undefined4 *param_1,int param_2,int param_3,int param_4,ulonglong param_5)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = param_2 * 0x40 + param_3 + 0x10c;
  uVar1 = fn_82A1F248(param_3);
  if ((uVar1 & 0x600) != 0) {
    *param_1 = 0;
    return;
  }
  if (lbl_8320A630 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(0xffffffff8320a5f8,0,0x38);
  }
  if ((param_5 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(iVar2,0xee,param_4 - iVar2);
  }
  fn_82819110(param_3,param_4 - iVar2,param_5);
  *(undefined **)(param_3 + 0x10) = &lbl_8320A5F8;
  *(int *)(param_3 + 0x7c) = param_3 + 0x10c;
  *(undefined2 *)(param_3 + 0x82) = 0;
  *(undefined2 *)(param_3 + 0x84) = 0;
  *(short *)(param_3 + 0x80) = (short)param_2;
  *(undefined2 *)(param_3 + 0x108) = 0xffff;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_3 + 0x10c,0,(iVar2 - param_3) + -0x10c);
}

