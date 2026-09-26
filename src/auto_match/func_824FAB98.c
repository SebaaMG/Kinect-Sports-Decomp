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
extern unsigned int *auStack_38;
extern int fn_824FAC80();
extern int fn_8251F720();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F2D60();
extern unsigned int iStack_3c;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_40;


void fn_824FAB98(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  undefined4 uStack_40;
  int iStack_3c;
  undefined1 auStack_38 [56];
  
  uStack_40 = *(undefined4 *)((*(int *)(param_1 + 0x210) + 0x84) * 4 + param_1);
  iVar1 = *(int *)((*(int *)(param_1 + 0x210) + 0x89) * 4 + param_1);
  iStack_3c = iVar1;
  fn_8255F880(auStack_38,&uStack_40);
  dVar3 = (double)lbl_821CC160;
  uVar2 = fn_8255F8D0(dVar3,(double)lbl_821CA460,auStack_38);
  *(undefined4 *)(param_1 + 0x208) = uVar2;
  if (*(int *)(param_1 + 0x20c) == 0) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x20c) = 0;
    }
    else {
      uVar2 = fn_8251F720(&iStack_3c,0);
      *(undefined4 *)(param_1 + 0x20c) = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x208) != 0) {
    fn_827F2D60(dVar3,*(undefined4 *)(param_1 + 0x204));
  }
  fn_824FAC80(dVar3,param_1);
  *(undefined4 *)(param_1 + 0x70) = 2;
  return;
}

