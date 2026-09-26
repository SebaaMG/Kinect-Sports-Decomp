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
extern int fn_8225F160();
extern int fn_822ACAD8();
extern int fn_822AF138();
extern int fn_8236BA88();


void fn_823C44A0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  fn_8236BA88(*(undefined4 *)**(undefined4 **)(param_1 + 8));
  fn_8236BA88(*(undefined4 *)(**(int **)(param_1 + 8) + 4));
  uVar1 = *(uint *)(*(int *)(param_1 + 0x4bc) + 0xc);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x4bc) + 0x90);
  if (uVar2 < uVar1) {
    iVar6 = 0;
    iVar5 = 1;
  }
  else {
    if (uVar2 <= uVar1) {
      return;
    }
    iVar6 = 1;
    iVar5 = 0;
  }
  piVar3 = *(int **)(iVar6 * 4 + **(int **)(param_1 + 8));
  piVar4 = *(int **)(iVar5 * 4 + **(int **)(param_1 + 8));
  fn_822ACAD8(*(undefined4 *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x48),0xffffffff821ac494,
                    0xffffffff821b6034);
  fn_822ACAD8(*(undefined4 *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x48),0xffffffff821ac494,
                    0xffffffff821b6040);
  iVar5 = fn_8225F160();
  if (*(int *)(iVar5 + 8) == 0) {
    *(undefined4 *)(param_1 + 0x9ac) = 1;
  }
                    /* WARNING: Subroutine does not return */
  fn_822AF138(*(undefined4 *)(iVar6 * 4 + *(int *)(param_1 + 0xc)),1);
}

