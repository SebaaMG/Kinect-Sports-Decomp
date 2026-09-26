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
extern int fn_822AF138();
extern int fn_822F05B8();
extern int fn_822F06B0();
extern int fn_82397F30();
extern int fn_8288B760();


void fn_822EFF10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x168) == 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x16c);
  }
  else {
    uVar1 = fn_8288B760();
    uVar1 = uVar1 & 0xff;
  }
  if (uVar1 == 0) {
    iVar2 = fn_822F06B0(param_1);
  }
  else {
    iVar2 = fn_822F05B8();
  }
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x178) == 2) {
    uVar3 = 5;
  }
  else {
    iVar2 = fn_82397F30();
    if ((iVar2 != 0) && (iVar2 = *(int *)(param_1 + 0xc), *(int *)(iVar2 + 0x24) == 0)) {
      uVar3 = 6;
      goto LAB_822effa8;
    }
    uVar3 = 7;
  }
  iVar2 = *(int *)(param_1 + 0xc);
LAB_822effa8:
                    /* WARNING: Subroutine does not return */
  fn_822AF138(*(undefined4 *)(iVar2 + 0x110),uVar3);
}

