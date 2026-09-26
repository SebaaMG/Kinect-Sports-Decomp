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
extern int fn_82859CE0();
extern int fn_8285F118();
extern int fn_8285F128();
extern unsigned int lbl_8321132C;
extern unsigned int lbl_83211330;


void fn_8285A3A8(int param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(int *)(param_1 + 0x54) + *(int *)(param_3 + 8));
  lbl_83211330 = *(undefined4 *)(param_1 + 0x34);
  if ((param_2 & 0xff) != 0) {
    *piVar5 = (int)(piVar5 + 1);
  }
  lbl_8321132C = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    lbl_8321132C = *(uint *)(*(int *)(param_1 + 0x44) + 0x44);
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    iVar2 = fn_8285F128();
    piVar5 = (int *)(iVar2 + *(int *)(param_3 + 8));
    if ((param_2 & 0xff) != 0) {
      *piVar5 = (int)(piVar5 + 1);
    }
    iVar2 = 0;
    uVar3 = (ulonglong)lbl_8321132C;
    *(undefined1 *)*piVar5 = 0;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      iVar4 = *piVar5 + iVar2;
      iVar2 = iVar2 + 1;
      *(undefined1 *)(iVar4 + 1) = 0;
    }
    iVar2 = fn_8285F118(iVar1);
    if (iVar2 == 0) {
      fn_82859CE0(iVar1,param_2,param_3);
    }
  }
  return;
}

