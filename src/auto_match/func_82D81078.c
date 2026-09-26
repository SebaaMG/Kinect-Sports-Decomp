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
extern unsigned int *auStack_40;
extern int fn_82CE4040();
extern int fn_82D899D8();
extern int fn_82D8F4C8();
extern int fn_82D91018();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DACA10();
extern int fn_82DAD7D0();
extern int fn_83080B30();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_38;


int * fn_82D81078(int param_1,int *param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  longlong lVar4;
  undefined1 auStack_40 [4];
  int *piStack_3c;
  undefined4 uStack_38;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    fn_82D899D8(param_2,param_1,param_2[4]);
    if (param_2[6] == 0) {
      iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
      param_2[6] = iVar2;
    }
    fn_83080B30((double)lbl_821AAD20);
    *(undefined2 *)((int)param_2 + 0xea) = 0;
    *(undefined2 *)(param_2 + 0x3b) = 0;
    iVar2 = *(int *)(param_1 + 0x108) + 1;
    *(undefined1 *)(param_1 + 0x9d) = 0;
    *(int *)(param_1 + 0x108) = iVar2;
    param_2[0x35] = iVar2;
    fn_82CE4040(param_2);
    fn_82D8F4C8(param_1,param_2,param_3);
    uVar3 = (ushort)*(byte *)(param_1 + 0x305);
    if ((*(byte *)(param_1 + 0x307) & 3) < (*(byte *)((int)param_2 + 0xe9) & 3)) {
      uVar3 = ~uVar3;
    }
    if (*(byte *)(param_1 + 0x307) < *(byte *)((int)param_2 + 0xe9)) {
      uVar1 = ~(ushort)*(byte *)(param_1 + 0x306) << 0xe;
    }
    else {
      uVar1 = (ushort)*(byte *)(param_1 + 0x306) << 0xe;
    }
    *(ushort *)((int)param_2 + 0xea) = *(ushort *)((int)param_2 + 0xea) & 0x3fff | uVar3 << 0xe;
    *(ushort *)(param_2 + 0x3b) = *(ushort *)(param_2 + 0x3b) & 0x3fff | uVar1;
    *(undefined1 *)(param_1 + 0x9d) = 1;
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
    fn_82D91018(param_1,param_2);
    fn_82DAD7D0(param_1,param_2);
    fn_82DACA10(param_2);
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
  }
  else {
    uStack_38 = (undefined4)param_3;
    auStack_40[0] = 1;
    piStack_3c = param_2;
    fn_82DA6530(*(undefined4 *)(param_1 + 0x88),auStack_40);
    param_2 = (int *)0x0;
  }
  return param_2;
}

