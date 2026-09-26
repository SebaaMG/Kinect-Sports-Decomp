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
extern int fn_822ABA88();
extern int fn_82359698();
extern int fn_823693A0();
extern int fn_8236B008();
extern int fn_8236B4F0();
extern int fn_8236B8B0();
extern int fn_823CC298();
extern int fn_82508078();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_823D1440(int param_1,char param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_3 * 4 + **(int **)(param_1 + 8));
  uVar3 = fn_822ABA88(*(undefined4 *)(piVar2[4] * 4 + *piVar2),param_4);
  fn_823693A0(param_1,uVar3);
  uVar1 = lbl_8218E8E8;
  iVar4 = param_3 * 0x84 + *(int *)(param_1 + 0x4bc);
  *(int *)(iVar4 + 0x4c) = *(int *)(iVar4 + 0x4c) + 1;
  *(undefined4 *)(param_1 + 0x1024) = uVar1;
  *(undefined4 *)(param_1 + 0x1028) = 0;
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_82508078(*(undefined4 *)(param_1 + 0xa4),0xffffffff821b61dc,0);
  }
  fn_823CC298(*(undefined4 *)(param_1 + 0x4b8),1);
  piVar2 = *(int **)(((uint)LZCOUNT(param_3) >> 3 & 4) + **(int **)(param_1 + 8));
  iVar4 = *(int *)(piVar2[4] * 4 + *piVar2);
  if (param_2 == '\0') {
    fn_8236B008(param_1,*(undefined4 *)(iVar4 + 0x10));
    uVar3 = 9;
  }
  else {
    uVar1 = *(undefined4 *)(iVar4 + 0x10);
    uVar3 = 10;
    *(undefined4 *)(param_1 + 0xee4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xee0) = uVar1;
  }
  fn_82359698(param_1,uVar3);
  fn_8236B8B0(param_1,param_3,8);
  *(undefined4 *)(param_1 + 0xef4) = lbl_821CC160;
  if (*(int *)(*(int *)(param_1 + 0x4b0) + 0xd4) == 0) {
    fn_8236B4F0((double)lbl_821CA460,param_1);
  }
  return;
}

