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
extern unsigned int *auStack_830;
extern int fn_822315A0();
extern int fn_822A0EB8();
extern int fn_822A1210();
extern int fn_822A12F8();
extern int fn_822ABA88();
extern int fn_82358FD8();
extern int fn_82397F30();
extern int fn_82397F88();
extern int fn_823980B0();
extern int fn_8239FF60();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821922D4;


void fn_823A4048(int param_1,int param_2)

{
  int *piVar1;
  int iVar3;
  int iVar4;
  longlong lVar2;
  undefined4 uVar5;
  undefined1 auStack_830 [2096];
  
  if (*(int *)(param_1 + 0x14) == 1) {
    fn_823980B0(*(undefined4 *)(param_1 + 8),0,0);
    fn_823980B0(*(undefined4 *)(param_1 + 8),1,0);
    fn_822A0EB8(*(undefined4 *)(*(int *)(param_1 + 8) + 0xd4));
    *(undefined4 *)(param_1 + 0x10) = lbl_821917B0;
  }
  *(int *)(param_1 + 0x14) = param_2;
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x18) = lbl_821922D4;
    fn_823980B0(*(undefined4 *)(param_1 + 8),0,1);
    iVar3 = fn_82397F88(*(undefined4 *)(param_1 + 8));
    if (iVar3 != 0) {
      fn_823980B0(*(undefined4 *)(param_1 + 8),1,1);
    }
    iVar3 = *(int *)(param_1 + 8);
    iVar4 = fn_82397F30(iVar3);
    if (iVar4 != 0) {
      piVar1 = *(int **)(*(int *)(iVar3 + 0xcc) * 4 + **(int **)(iVar3 + 8));
      iVar4 = *(int *)(piVar1[4] * 4 + *piVar1);
      lVar2 = fn_822ABA88(iVar4,*(undefined4 *)((*(int *)(iVar4 + 0x10) + 7) * 4 + param_1));
      iVar3 = *(int *)(iVar3 + 0xd4);
      if (*(int *)(iVar3 + 0x44) == 0) {
        fn_82358FD8(*(undefined4 *)(iVar3 + 0x1c),auStack_830,0x400,0xffffffff821abd54);
        iVar4 = fn_8265C9E0(0x10);
        if (iVar4 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = fn_822A1210();
        }
        iVar4 = *(int *)(iVar3 + 0x44);
        *(undefined4 *)(iVar3 + 0x44) = uVar5;
        if (iVar4 != 0) {
          if (*(int *)(iVar4 + 4) != 0) {
            fn_822315A0();
          }
          fn_8265CA20(iVar4);
        }
        fn_822A12F8(*(undefined4 *)(iVar3 + 0x44),lVar2 + 0x30,auStack_830);
      }
    }
    *(uint *)(*(int *)(param_1 + 8) + 0x260) = *(uint *)(*(int *)(param_1 + 8) + 0x260) | 8;
  }
  else if (param_2 == 2) {
    *(uint *)(*(int *)(param_1 + 8) + 0x260) = *(uint *)(*(int *)(param_1 + 8) + 0x260) | 0x10;
    if (*(int *)(*(int *)(param_1 + 8) + 0x178) == 0) {
      fn_8239FF60(*(undefined4 *)(*(int *)(param_1 + 8) + 0x2dc),2);
    }
  }
  return;
}

