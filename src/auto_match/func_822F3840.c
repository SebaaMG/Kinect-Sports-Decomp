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
extern int fn_822F3B50();
extern int fn_822F3EC0();
extern int fn_82397F30();
extern int fn_8288B760();


void fn_822F3840(undefined8 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  piVar1 = *(int **)(param_2 + 0x30);
  if ((piVar1 == (int *)0x0) || ((*piVar1 == 0 && (piVar1[1] == 0)))) {
    if (*(int *)(*(int *)(param_2 + 0xc) + 0x168) == 0) {
      uVar2 = *(uint *)(*(int *)(param_2 + 0xc) + 0x16c);
    }
    else {
      uVar2 = fn_8288B760();
      uVar2 = uVar2 & 0xff;
    }
    if (uVar2 == 0) {
      iVar3 = fn_822F3EC0(param_2);
    }
    else {
      iVar3 = fn_822F3B50(param_1);
    }
    if (iVar3 == 0) {
      return;
    }
  }
  if (*(int *)(*(int *)(param_2 + 0x10) + 0x178) == 2) {
    return;
  }
  iVar3 = fn_82397F30();
  if ((iVar3 == 0) || (iVar3 = *(int *)(param_2 + 0xc), *(int *)(iVar3 + 0x24) != 0)) {
    iVar3 = *(int *)(param_2 + 0xc);
    uVar4 = 7;
  }
  else {
    uVar4 = 6;
  }
                    /* WARNING: Subroutine does not return */
  fn_822AF138(*(undefined4 *)(iVar3 + 0x110),uVar4);
}

