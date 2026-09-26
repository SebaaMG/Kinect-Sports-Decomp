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
extern unsigned int *auStack_50;
extern int fn_825089A0();
extern int fn_828C0290();
extern int fn_828C0A70();
extern int fn_828C1318();
extern int fn_82A1E658();
extern unsigned int lbl_8202604C;
extern unsigned int lbl_82026780;


void fn_828C17D0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 auStack_50 [80];
  
  *param_1 = &lbl_8202604C;
  fn_82A1E658(param_1[10]);
  puVar7 = param_1 + 1;
  fn_828C1318(puVar7);
  piVar8 = param_1 + 0xb;
  piVar6 = *(int **)param_1[0xb];
  if (piVar6 != (int *)param_1[0xb]) {
    do {
      puVar1 = (undefined4 *)piVar6[2];
      piVar6[2] = 0;
      piVar2 = (int *)*piVar6;
      if (piVar6 != (int *)*piVar8) {
        *(int **)piVar6[1] = piVar2;
        *(int *)(*piVar6 + 4) = piVar6[1];
        piVar5 = (int *)fn_825089A0();
        (**(code **)(*piVar5 + 0x28))(piVar5,piVar6);
        param_1[0xc] = param_1[0xc] + -1;
      }
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      piVar6 = piVar2;
    } while (piVar2 != (int *)*piVar8);
  }
  fn_828C0A70(auStack_50,param_1 + 0xe,*(undefined4 *)param_1[0xf]);
  uVar3 = param_1[0xf];
  piVar6 = (int *)fn_825089A0();
  (**(code **)(*piVar6 + 0x28))(piVar6,uVar3);
  fn_828C0290(piVar8);
  iVar4 = *piVar8;
  piVar6 = (int *)fn_825089A0();
  (**(code **)(*piVar6 + 0x28))(piVar6,iVar4);
  piVar6 = (int *)param_1[8];
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))(piVar6,param_1 + 4 != piVar6);
    param_1[8] = 0;
  }
  fn_828C1318(puVar7);
  uVar3 = *puVar7;
  piVar6 = (int *)fn_825089A0();
  (**(code **)(*piVar6 + 0x28))(piVar6,uVar3);
  *param_1 = &lbl_82026780;
  return;
}

