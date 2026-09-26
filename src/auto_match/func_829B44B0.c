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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_8296CF68();
extern int fn_82F691F0();


undefined8 fn_829B44B0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(*(int *)(param_1 + 4) + 0xc);
  fn_8296CF68();
  iVar1 = fn_8265C940(*(int *)(param_1 + 0x38) << 2,0x24810000);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 != 0) {
    iVar1 = fn_8265C940(*(int *)(param_1 + 0x38) << 2,0x24810000);
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 8),0,*(int *)(param_1 + 0x38) << 2);
    }
  }
  fn_8265C990(*(undefined4 *)(param_1 + 8),0x24810000);
  fn_8265C990(*(undefined4 *)(param_1 + 0xc),0x24810000);
  fn_8265C990(*(undefined4 *)(param_1 + 0x10),0x24810000);
  fn_8265C990(*(undefined4 *)(param_1 + 0x14),0x24810000);
  fn_8265C990(*(undefined4 *)(param_1 + 0x18),0x24810000);
  fn_8265C990(*(undefined4 *)(param_1 + 0x1c),0x24810000);
  fn_8265C990(*(undefined4 *)(param_1 + 0x20),0x24810000);
  fn_8265C990(*(undefined4 *)(param_1 + 0x24),0x24810000);
  fn_8265C990(*(undefined4 *)(param_1 + 0x28),0x24810000);
  fn_8265C990(*(undefined4 *)(param_1 + 0x2c),0x24810000);
  fn_8265C990(*(undefined4 *)(param_1 + 0x30),0x24810000);
  fn_8265C990(*(undefined4 *)(param_1 + 0x34),0x24810000);
  fn_8265C990(*(undefined4 *)(param_1 + 0x3c),0x24810000);
  fn_8265C990(*(undefined4 *)(param_1 + 0x40),0x24810000);
  fn_8265C990(*(undefined4 *)(param_1 + 0x44),0x24810000);
  return 0xffffffff8007000e;
}

