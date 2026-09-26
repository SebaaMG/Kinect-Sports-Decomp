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
extern unsigned int *auStack_70;
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82D909F0();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DAD620();
extern int fn_82DAFB58();
extern int fn_83081A78();
extern unsigned int iStack_5c;
extern unsigned int uStack_58;


int * fn_82D888D0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_70 [4];
  int *piStack_6c;
  int *piStack_60;
  int iStack_5c;
  uint uStack_58;
  int aiStack_54 [21];
  
  if (*(int *)(param_1 + 0x94) != 0) {
    auStack_70[0] = 10;
    piStack_6c = param_2;
    fn_82DA6530(*(undefined4 *)(param_1 + 0x88),auStack_70);
    return (int *)0x0;
  }
  fn_82CE4040(param_2);
  piStack_60 = aiStack_54;
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  iStack_5c = 0;
  uStack_58 = 0x80000004;
  (**(code **)(*param_2 + 0x10))(param_2,&piStack_60);
  iVar3 = 0;
  param_2[2] = param_1;
  iVar5 = 0;
  if (0 < iStack_5c) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(iVar6 + (int)piStack_60);
      if (*(ushort *)(iVar1 + 0x20c) == (*(ushort *)(iVar1 + 0x20e) & 0x3fff)) {
        fn_83081A78((int *)(iVar1 + 0x208),4);
      }
      *(int **)((uint)*(ushort *)(iVar1 + 0x20c) * 4 + *(int *)(iVar1 + 0x208)) = param_2;
      *(short *)(iVar1 + 0x20c) = *(short *)(iVar1 + 0x20c) + 1;
      iVar2 = *(int *)(iVar6 + (int)piStack_60);
      iVar1 = *(int *)(iVar2 + 0xcc);
      if (*(short *)(iVar1 + 0x20) != -1) {
        if (iVar3 == 0) {
          fn_82DAFB58(iVar1,param_2);
          iVar3 = iVar2;
        }
        else if (*(int *)(iVar3 + 0xcc) != iVar1) {
          fn_82D909F0(param_1,iVar3);
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < iStack_5c);
    if (iVar3 != 0) goto LAB_82d88a38;
  }
  fn_82DAFB58(*(undefined4 *)(*piStack_60 + 0xcc),param_2);
LAB_82d88a38:
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x94) - 1;
  *(int *)(param_1 + 0x94) = (int)lVar4;
  if ((lVar4 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
    if (*(int *)(param_1 + 0x8c) != 0) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      fn_82DA6BA8(*(undefined4 *)(param_1 + 0x88));
    }
    if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      fn_82DA6A58(*(undefined4 *)(param_1 + 0x88));
    }
  }
  fn_82DAD620(param_1,param_2);
  iVar3 = fn_82CE5410();
  iStack_5c = 0;
  if ((uStack_58 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
              (*(int **)(iVar3 + 0x10),piStack_60,uStack_58 & 0x3fffffff,4);
  }
  return param_2;
}

