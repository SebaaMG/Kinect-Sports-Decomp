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
extern int fn_822315A0();
extern int fn_823AB478();
extern int fn_82522ED8();
extern int fn_827D50B8();
extern unsigned int *lbl_832767C8;


void fn_82521F68(undefined4 *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_2 + 0x14);
  iVar4 = fn_827D50B8(*param_1);
  piVar3 = lbl_832767C8;
  if (iVar4 == 0) {
    *(int *)(*piVar1 + 0x120) = piVar1[4];
    piVar3 = lbl_832767C8;
    if (piVar1[2] == 0) {
      iVar4 = fn_823AB478(*piVar1);
      *(undefined1 *)((int)piVar3 + iVar4 + 0x80) = 1;
    }
    else {
      (**(code **)(*lbl_832767C8 + 0xc))(lbl_832767C8,*piVar1,0xffffffff825223a8);
    }
  }
  else {
    iVar4 = fn_823AB478(*piVar1);
    *(undefined1 *)((int)piVar3 + iVar4 + 0x78) = 1;
    *(undefined4 *)(*piVar1 + 0x120) = 0xffffffff;
  }
  uVar2 = piVar1[3];
  piVar1[3] = (int)((ulonglong)uVar2 - 1);
  if ((longlong)((ulonglong)uVar2 - 1) < 1) {
    fn_82522ED8(piVar1);
  }
  fn_82522ED8(param_2);
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

