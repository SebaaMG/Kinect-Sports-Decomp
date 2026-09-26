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
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_82684338();
extern int fn_82687270();
extern int fn_826D74A0();
extern int fn_826D8580();
extern int fn_826DEB00();
extern int fn_826E4D70();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_826E5868(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  ulonglong uVar9;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar8 = 0;
  uVar9 = 0;
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x38) + 0x2c);
  uVar5 = fn_82684338(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),1,
                            *(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x24),
                            *(undefined4 *)(iVar1 + 0x2c),uVar2);
  if (uVar5 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    uStack_34 = 1;
    uStack_48 = *(undefined4 *)(iVar1 + 0x20);
    uStack_60 = 1;
    uStack_58 = 0;
    uStack_5c = 0;
    uStack_54 = 1;
    uStack_4c = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    if ((*(char *)(iVar1 + 0x44) == '\0') && (*(int *)(iVar1 + 0x18) == 0)) {
      uStack_34 = 0;
    }
    piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 0x10) + 8) + 0x10);
    uStack_50 = (int)uVar5;
    uStack_38 = uVar2;
    uVar9 = (**(code **)(*piVar3 + 4))(piVar3,&uStack_60);
    if (uVar9 != 0) {
      uVar6 = fn_8267B890(uVar2,0x1c,0);
      if ((uVar6 & 0xffffffff) != 0) {
        uVar8 = fn_826E4D70(uVar6,uVar9,1);
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        fn_82687270();
      }
      *(undefined4 *)(param_1 + 0x24) = uVar8;
    }
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    uVar7 = 4;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14);
    uVar7 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
    fn_826DEB00(*(undefined4 *)(iVar4 + 0x20),uVar7,iVar1,1);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c);
    uVar8 = *(undefined4 *)((*(int **)(param_1 + 0x14))[8] + 0x28);
    uVar7 = (**(code **)(**(int **)(param_1 + 0x14) + 0x40))();
    fn_826D8580(uVar2,uVar7,uVar8);
    uVar7 = 0x302;
  }
  fn_826D74A0(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c),uVar7);
  if ((uVar9 & 0xffffffff) != 0) {
    fn_8267C498(uVar9);
  }
  if ((uVar5 & 0xffffffff) != 0) {
    fn_8267C498(uVar5);
  }
  return;
}

