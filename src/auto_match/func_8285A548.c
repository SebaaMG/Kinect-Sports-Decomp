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
extern int fn_82859D60();
extern int fn_8285F118();
extern int fn_8285F128();
extern unsigned int lbl_8321132C;
extern unsigned int lbl_83211330;


void fn_8285A548(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  iVar1 = *(int *)(param_1 + 0x34);
  lbl_8321132C = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    lbl_8321132C = *(uint *)(*(int *)(param_1 + 0x44) + 0x44);
  }
  lbl_83211330 = iVar1;
  if (iVar1 != 0) {
    iVar3 = fn_8285F128();
    piVar7 = (int *)(iVar3 + *(int *)(param_2 + 8));
    iVar3 = fn_8285F128(iVar1);
    piVar6 = (int *)(iVar3 + *(int *)(param_3 + 8));
    iVar3 = 0;
    uVar4 = (ulonglong)lbl_8321132C;
    *(undefined1 *)*piVar6 = *(undefined1 *)*piVar7;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      iVar2 = *piVar7 + iVar3;
      iVar5 = *piVar6 + iVar3;
      iVar3 = iVar3 + 1;
      *(undefined1 *)(iVar5 + 1) = *(undefined1 *)(iVar2 + 1);
    }
    iVar3 = fn_8285F118(iVar1);
    if (iVar3 == 0) {
      fn_82859D60(iVar1,param_2,param_3);
    }
  }
  return;
}

