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
extern int fn_82F691F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82A4D220(int param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 != 0) {
    sync(1);
    *(undefined4 *)(param_1 + 100) = 0;
    *(int *)(param_1 + 0x60) = iVar1;
    *(undefined4 *)(param_1 + 0x70) = 1;
  }
  if ((param_3[1] == 0) || (param_6 == 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(undefined4 *)(param_1 + 0x2c),0,*(int *)(param_1 + 0x38) << 2);
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    if (*(float *)(param_1 + 0x40) == lbl_821AAD20) goto LAB_82a4d2f0;
  }
  if (*(int *)(param_1 + 0x3c) == 2) {
    if (*(float *)(param_1 + 0x40) == lbl_82002AE0) {
LAB_82a4d2f0:
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 0x2c),0,*(int *)(param_1 + 0x38) << 2);
    }
  }
  *(undefined4 *)(param_1 + 0x24) = *param_3;
  *(undefined4 *)(param_1 + 0x28) = *param_3;
  *(int *)(param_1 + 0x34) = param_3[2] * *(int *)(param_1 + 0x38);
  (**(code **)(param_1 + 0x6c))(param_1 + 0x24);
  return;
}

