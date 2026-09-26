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
extern unsigned int *auStack_240;
extern unsigned int *auStack_250;
extern int fn_8260A488();
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CED628();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82D93880();
extern int fn_82D93B08();
extern int fn_82D93C00();
extern int fn_82D962A8();
extern int fn_82D976F0();
extern int fn_82D97750();
extern int fn_82D977B0();
extern int fn_82D97C48();
extern int fn_82D97CB8();
extern int fn_82DED890();
extern unsigned int *lbl_8323B464;


void fn_82DED8F0(int param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar8;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar9;
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [576];
  
  piVar1 = *(int **)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  iVar8 = (**(code **)(*piVar1 + 0x20))(piVar1);
  if (iVar8 == 2) {
    iVar8 = fn_82CE5410();
    iVar8 = (**(code **)(**(int **)(iVar8 + 0x10) + 4))(*(int **)(iVar8 + 0x10),0xe0);
    *(undefined2 *)(iVar8 + 4) = 0xe0;
    iVar8 = fn_82D93C00();
    fn_8260A488(iVar8 + 0x10,piVar1 + 4);
    if (*(int *)(iVar8 + 0xb0) != 0) {
      fn_82CE4040();
    }
    fn_82D93880(iVar8,param_2);
    fn_82D93B08(iVar8,0,param_3);
    iVar9 = fn_82CE5410();
    iVar9 = (**(code **)(**(int **)(iVar9 + 0x10) + 4))(*(int **)(iVar9 + 0x10),0x38);
    *(undefined2 *)(iVar9 + 4) = 0x38;
    lVar6 = fn_82D962A8(iVar9,uVar2,uVar3,iVar8,*(undefined1 *)(param_1 + 0x1c));
    fn_82CE4118(iVar8);
                    /* WARNING: Subroutine does not return */
    fn_82CED628(lVar6 + 0x28,*(uint *)(param_1 + 0x28) & 0xfffffffe);
  }
  if (iVar8 != 7) {
    fn_82CEE578(auStack_250,auStack_240,0x200);
    uVar4 = *(uint *)(param_1 + 0x28);
    uVar5 = fn_82CEDB38(auStack_250,0xffffffff821454d4);
    uVar5 = fn_82CEDB38(uVar5,uVar4 & 0xfffffffe);
    fn_82CEDB38(uVar5,0xffffffff821454b8);
    (**(code **)(*lbl_8323B464 + 0xc))
              (lbl_8323B464,1,0xffffffffabba1b34,auStack_240,0xffffffff82145380,0x6f);
                    /* WARNING: Subroutine does not return */
    fn_82CED958(auStack_250);
  }
  iVar8 = fn_82CE5410();
  iVar8 = (**(code **)(**(int **)(iVar8 + 0x10) + 4))(*(int **)(iVar8 + 0x10),0x140);
  *(undefined2 *)(iVar8 + 4) = 0x140;
  lVar6 = fn_82D97CB8();
  fn_82DED890(piVar1 + 4,lVar6 + 0x10);
  fn_82D976F0(lVar6,param_2);
  fn_82D977B0(lVar6,param_2);
  fn_82D97750(lVar6,param_2);
  fn_82D97C48(lVar6,0,param_3);
  iVar8 = fn_82CE5410();
  iVar8 = (**(code **)(**(int **)(iVar8 + 0x10) + 4))(*(int **)(iVar8 + 0x10),0x38);
  *(undefined2 *)(iVar8 + 4) = 0x38;
  lVar7 = fn_82D962A8(iVar8,uVar2,uVar3,lVar6,*(undefined1 *)(param_1 + 0x1c));
  fn_82CE4118(lVar6);
                    /* WARNING: Subroutine does not return */
  fn_82CED628(lVar7 + 0x28,*(uint *)(param_1 + 0x28) & 0xfffffffe);
}

