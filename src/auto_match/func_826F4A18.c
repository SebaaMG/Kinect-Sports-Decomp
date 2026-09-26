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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_82687270();
extern int fn_826DDC60();
extern int fn_826E4D70();
extern int fn_826F3E98();
extern int fn_826F47F0();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_74;


void fn_826F4A18(int param_1,undefined4 *param_2,ulonglong param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 auStack_80 [2];
  int *piStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  uint auStack_60 [7];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if ((((*(uint *)(param_1 + 0x2b8) & 0x80) == 0) &&
      (iVar3 = *(int *)(*(int *)(iVar2 + 8) + 0x10), iVar3 != 0)) &&
     (*(char *)(iVar3 + 0xc) == '\0')) {
    uVar7 = 0;
    uVar6 = 0;
    auStack_60[4] = 0;
    auStack_60[2] = 0;
    auStack_60[1] = 0;
    auStack_60[3] = 1;
    uStack_38 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c);
    uStack_3c = *(undefined4 *)(iVar2 + 0x2c);
    uStack_40 = *(undefined4 *)(iVar2 + 0x24);
    uStack_44 = *(undefined4 *)(iVar2 + 0xc);
    auStack_60[6] = *(undefined4 *)(iVar2 + 0x20);
    auStack_60[5] = 0;
    if ((*(char *)(iVar2 + 0x44) != '\0') || (uStack_34 = 0, *(int *)(iVar2 + 0x18) != 0)) {
      uStack_34 = 1;
    }
    bVar1 = (param_3 & 0xffffffff) != 0;
    if (bVar1) {
      auStack_60[4] = (uint)param_3;
    }
    auStack_60[0] = (uint)bVar1;
    piVar4 = *(int **)(*(int *)(iVar2 + 8) + 0x10);
    if (piVar4 != (int *)0x0) {
      uVar6 = (**(code **)(*piVar4 + 4))(piVar4,auStack_60);
    }
    uVar5 = fn_8267B890(uStack_38,0x1c,0);
    if ((uVar5 & 0xffffffff) != 0) {
      uVar7 = fn_826E4D70(uVar5,uVar6,1);
    }
    if (*(int *)(param_1 + 0x2e8) == 0) {
      auStack_80[0] = *param_2;
      fn_826DDC60(*(undefined4 *)(param_1 + 0x20),auStack_80,uVar7);
    }
    if ((uVar7 & 0xffffffff) != 0) {
      fn_82687270(uVar7);
    }
    if ((uVar6 & 0xffffffff) != 0) {
      fn_8267C498(uVar6);
    }
  }
  else {
    fn_826F3E98(&piStack_78,param_3);
    auStack_80[0] = *param_2;
    fn_826F47F0(&iStack_70,param_1,auStack_80,&piStack_78);
    if ((iStack_70 == 0) && (iStack_6c != 0)) {
      fn_82687270();
    }
    if (piStack_78 != (int *)0x0) {
      (**(code **)(*piStack_78 + 8))(piStack_78,uStack_74);
    }
  }
  return;
}

