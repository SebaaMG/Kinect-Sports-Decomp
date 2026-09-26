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
extern int fn_823AA970();
extern int fn_825089A0();
extern int fn_8288CDC8();
extern int fn_8288DDF8();
extern int fn_8288E040();
extern int fn_8288FA78();
extern int fn_82890F00();
extern int fn_828910B8();
extern int fn_828920B0();
extern int fn_828922B0();
extern int fn_828977F0();
extern int fn_82897BD0();
extern int fn_828A12E8();
extern int fn_828CAF50();
extern int fn_828CB310();
extern unsigned int iStack_40;


void fn_82893DB8(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char cVar7;
  int iStack_40;
  int aiStack_3c [15];
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0x38);
  if ((*(int *)(param_1 + 0x34) == 0) || (iVar1 == 0)) {
    cVar7 = '\0';
  }
  else {
    cVar7 = *(char *)(iVar1 + 0x26);
  }
  bVar2 = *(char *)(param_2 + 0x26) == '\0';
  fn_828922B0(param_1 + 0x3c,*(undefined4 *)(param_1 + 0x4c),0);
  if (bVar2) {
    uVar3 = fn_828A12E8(*(undefined4 *)(param_1 + 0x10));
    fn_8288FA78(uVar3,param_1);
  }
  iStack_40 = param_1;
  iVar4 = fn_828A12E8(*(undefined4 *)(param_1 + 0x10));
  fn_8288E040(aiStack_3c,iVar4 + 0x5c,&iStack_40);
  if (aiStack_3c[0] != *(int *)(iVar4 + 0x60)) {
    fn_8288CDC8(aiStack_3c,iVar4 + 0x5c);
  }
  iVar4 = *(int *)(param_1 + 0x34);
  *(int *)(iVar4 + 0x38) = param_2;
  uVar5 = fn_82897BD0(param_2);
  *(undefined4 *)(iVar4 + 0x3c) = uVar5;
  uVar5 = fn_823AA970(param_2);
  *(undefined4 *)(iVar4 + 0x40) = uVar5;
  fn_828977F0(*(int *)(param_1 + 0x34),*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x38),0);
  if (cVar7 == '\0') {
    if (!bVar2) {
      uVar3 = fn_828A12E8(*(undefined4 *)(param_1 + 0x10));
      fn_828920B0(uVar3,param_1);
      fn_82890F00(uVar3,param_1);
    }
  }
  else if (bVar2) {
    uVar3 = fn_828A12E8(*(undefined4 *)(param_1 + 0x10));
    fn_828910B8(uVar3,param_1);
    fn_8288DDF8(uVar3,param_1);
  }
  uVar3 = fn_828CB310();
  fn_828CAF50(uVar3,param_1,iVar1);
  piVar6 = (int *)fn_825089A0();
  uVar3 = (**(code **)(*piVar6 + 0xc))();
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  return;
}

