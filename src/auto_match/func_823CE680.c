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
extern int fn_82359698();
extern int fn_8236B4F0();
extern int fn_8236B7E0();
extern int fn_823CC298();
extern int fn_823D6088();
extern int fn_82508078();
extern int fn_82F68CC0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;


void fn_823CE680(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = lbl_8218E8E8;
  iVar3 = *param_2 * 0x84 + *(int *)(param_1 + 0x4bc);
  *(int *)(iVar3 + 0x54) = *(int *)(iVar3 + 0x54) + 1;
  *(undefined4 *)(param_1 + 0x1024) = uVar2;
  *(undefined4 *)(param_1 + 0x1028) = 0;
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_82508078(*(undefined4 *)(param_1 + 0xa4),0xffffffff821b60a4,0);
  }
  fn_823CC298(*(undefined4 *)(param_1 + 0x4b8),0x11);
  fn_8236B7E0(param_1,*param_2,3);
  piVar1 = *(int **)(*param_2 * 4 + *(int *)(param_1 + 0x20));
  if (piVar1[1] - *piVar1 >> 2 != 0) {
    *(undefined4 *)(param_1 + 0xe38) = 1;
  }
  if (*(int *)(*(int *)(param_1 + 0x4b0) + 0xd4) == 0) {
    fn_8236B4F0((double)lbl_821CA460,param_1);
  }
  *(undefined1 *)(param_1 + 0xd51) = 0;
  *(undefined1 *)(param_1 + 0xd52) = 0;
  *(undefined1 *)(param_1 + 0xd50) = 0;
  *(undefined4 *)(param_1 + 0x1390) = 8;
  fn_82F68CC0(param_1 + 0x13a0,param_2,0x90);
  fn_82359698(param_1,0x15);
  fn_823D6088(param_1 + 0x9f8);
  return;
}

