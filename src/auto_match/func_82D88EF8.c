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
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern int fn_82D888D0();
extern int fn_82D8E938();
extern int fn_82D96238();
extern int fn_82DA6530();
extern int fn_82DA6BA8();
extern unsigned int uStack_2a;
extern unsigned int uStack_2e;
extern unsigned int uStack_40;


undefined8 fn_82D88EF8(int param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 uStack_40;
  undefined1 auStack_38 [4];
  int *piStack_34;
  undefined1 auStack_30 [2];
  undefined2 uStack_2e;
  undefined2 uStack_2a;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    iVar2 = (**(code **)(*(int *)param_2[3] + 0x20))();
    if ((iVar2 == 0xc) && (iVar2 = param_2[3], *(short *)(iVar2 + 0x1c) == 0)) {
      (**(code **)(**(int **)(iVar2 + 0x18) + 0x24))(*(int **)(iVar2 + 0x18),uStack_40,auStack_30);
      *(undefined2 *)(iVar2 + 0x1c) = uStack_2e;
      *(undefined2 *)(iVar2 + 0x1e) = uStack_2a;
    }
    *(undefined1 *)(param_1 + 0x9c) = 1;
    fn_82D96238(param_2);
    iVar2 = *(int *)(param_1 + 0x110) + 1;
    *(int *)(param_1 + 0x110) = iVar2;
    param_2[0xd] = iVar2;
    uVar1 = fn_82D8E938(param_1,param_2,1);
    iVar2 = (**(code **)(*param_2 + 0x18))(param_2);
    if (iVar2 == 1) {
      if (*(int *)(param_2[0x11] + 8) == 0) {
        fn_82D888D0(param_1);
      }
      (**(code **)(*(int *)param_2[3] + 0x40))();
    }
    *(undefined1 *)(param_1 + 0x9c) = 0;
    if ((*(int *)(param_1 + 0x94) == 0) && (*(int *)(param_1 + 0x8c) != 0)) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      fn_82DA6BA8(*(undefined4 *)(param_1 + 0x88));
    }
  }
  else {
    auStack_38[0] = 8;
    piStack_34 = param_2;
    fn_82DA6530(*(undefined4 *)(param_1 + 0x88),auStack_38);
    uVar1 = 0;
  }
  return uVar1;
}

