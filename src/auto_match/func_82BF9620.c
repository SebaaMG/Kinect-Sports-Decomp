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
extern int fn_82BF9038();
extern int fn_82BF95B0();
extern unsigned int lbl_8322FD08;
extern unsigned int *lbl_8322FD0C;


undefined8 fn_82BF9620(ulonglong param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  
  piVar2 = lbl_8322FD08;
  piVar4 = lbl_8322FD0C;
  if ((int **)lbl_8322FD0C != &lbl_8322FD08) {
    do {
      piVar5 = piVar4;
      piVar4 = piVar5;
      if ((ulonglong)*(ushort *)(piVar5 + 2) == (param_1 & 0xffffffff)) break;
      piVar4 = (int *)piVar5[1];
    } while ((int **)piVar4 != &lbl_8322FD08);
    if ((int **)piVar4 != &lbl_8322FD08) goto LAB_82bf96b8;
  }
  fn_82BF95B0();
  if ((param_3 == 0) &&
     (uVar3 = fn_82BF9038(piVar2 + 4,0x2000,(param_1 + 2 & 0x7ffff) << 0xd,1), (int)uVar3 == 0)) {
    *(undefined2 *)(piVar2 + 2) = 0xffff;
    return uVar3;
  }
  *(short *)(piVar2 + 2) = (short)param_1;
  piVar5 = piVar2;
LAB_82bf96b8:
  if (param_2 != 0) {
    piVar5[3] = param_2;
  }
  iVar1 = *piVar5;
  piVar4 = (int *)piVar5[1];
  *piVar4 = iVar1;
  *(int **)(iVar1 + 4) = piVar4;
  *piVar5 = (int)&lbl_8322FD08;
  piVar5[1] = (int)lbl_8322FD0C;
  *lbl_8322FD0C = (int)piVar5;
  lbl_8322FD0C = piVar5;
  *param_4 = piVar5 + 4;
  return 1;
}

