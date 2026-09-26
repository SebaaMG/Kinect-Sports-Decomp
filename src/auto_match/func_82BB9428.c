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
extern int fn_82AB15D0();
extern int fn_82BA05E8();
extern int fn_82BB5528();
extern int fn_82BB62E0();
extern int fn_82BB7F78();
extern int fn_82BB8578();
extern int fn_82BD31A8();


void fn_82BB9428(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  if (*(int *)(param_2 + 0x1c) != -1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e035c,0xffffffff820e0168,0x6f4);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0344,0xffffffff820e0168,0x6f5);
  }
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_2 + 0x20)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0748,0xffffffff820e0168,0x6f6);
  }
  fn_82BB5528(*(undefined4 *)(param_1 + 0x20),param_2);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  if (*(int *)(param_2 + 0xc) < *(int *)(param_1 + 0x70)) {
    *(int *)(param_1 + 0x70) = *(int *)(param_2 + 0xc);
  }
  fn_82BB7F78(param_1,param_2);
  fn_82BB8578(param_1,param_2);
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x78) + 0x28) + 0xac);
    cVar4 = (**(code **)(**(int **)(param_2 + 0x28) + 0x44))();
    if (cVar4 == '\0') {
      iVar3 = *(int *)(param_2 + 0x28);
      if (iVar3 == iVar2) {
        if ((*(uint *)(iVar3 + 0xe4) >> 9 & 1) != 0) {
          uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x78) + 0x28) + 0xec);
          iVar2 = *(int *)(iVar3 + 0x14);
          if ((*(uint *)(iVar3 + 0xe4) >> 9 & 1) == 0) {
            *(int *)(iVar3 + 0x14) = iVar2 + 1;
            *(undefined4 *)((iVar2 + 0x3b) * 4 + iVar3) = uVar1;
            *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) | 0x200;
          }
          else {
            *(undefined4 *)((iVar2 + 0x3a) * 4 + iVar3) = uVar1;
          }
        }
      }
    }
    else {
      iVar3 = *(int *)(*(int *)(param_2 + 0x28) + 0xec);
      if ((*(int *)(iVar3 + 0x38) == *(int *)(iVar2 + 0x38)) && (iVar3 != iVar2)) {
        fn_82BA05E8(*(int *)(param_2 + 0x28),1,iVar2);
      }
    }
  }
  cVar4 = (**(code **)(**(int **)(param_2 + 0x28) + 0x44))();
  if (cVar4 != '\0') {
    *(int *)(param_1 + 0x78) = param_2;
  }
  (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),*(undefined4 *)(param_2 + 0x28))
  ;
  fn_82BD31A8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 0x28));
  fn_82BB62E0(*(undefined4 *)(param_1 + 0xc),param_2);
  return;
}

