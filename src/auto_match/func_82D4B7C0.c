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
extern int fn_82D4B3C0();
extern int fn_82D535C0();


/* WARNING: Removing unreachable block (ram,0x82d4b840) */

undefined1 *
fn_82D4B7C0(undefined1 *param_1,longlong param_2,int *param_3,int *param_4,int param_5,
             int *param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined1 auStack_240 [576];
  int *piVar2;
  
  uVar5 = (**(code **)(*param_6 + 0x10))(param_6,param_7);
  if ((int)uVar5 == -1) {
    iVar1 = *(int *)(param_5 + 0xc);
    while (iVar4 = iVar1, iVar4 != 0) {
      param_5 = iVar4;
      iVar1 = *(int *)(iVar4 + 0xc);
    }
    uVar5 = (ulonglong)*(uint *)(param_5 + 0x1c);
  }
  if ((int *)param_4[3] == (int *)0x0) {
    uVar6 = (ulonglong)(uint)param_4[7];
  }
  else {
    piVar9 = param_4;
    piVar8 = (int *)param_4[3];
    do {
      piVar2 = piVar8;
      iVar1 = *piVar2;
      uVar3 = *(uint *)((*(int *)(iVar1 + 0xc) + 0x44) * 4 + *param_3);
      if ((uVar3 & 0x80) != 0) {
        uVar6 = (**(code **)(*(int *)(iVar1 + 0x10) + 0x10))(iVar1 + 0x10,piVar9[1]);
        goto LAB_82d4b8b8;
      }
      if ((uVar3 & 0x100) != 0) {
        piVar8 = (int *)fn_82D535C0(piVar2,auStack_240);
        uVar6 = (**(code **)(*piVar8 + 0x10))(piVar8,piVar9[1]);
        goto LAB_82d4b8b8;
      }
      if ((uVar3 & 0x400000) != 0) {
        piVar9 = (int *)param_4[3];
        while (piVar8 = piVar9, piVar8 != (int *)0x0) {
          param_4 = piVar8;
          piVar9 = (int *)piVar8[3];
        }
        uVar6 = (ulonglong)(uint)param_4[7];
        goto LAB_82d4b8b8;
      }
      if ((uVar3 & 0x800000) != 0) {
        *param_1 = 1;
        return param_1;
      }
      piVar9 = piVar2;
      piVar8 = (int *)piVar2[3];
    } while ((int *)piVar2[3] != (int *)0x0);
    uVar6 = (ulonglong)(uint)piVar2[7];
  }
LAB_82d4b8b8:
  puVar7 = (undefined1 *)fn_82D4B3C0(param_1,param_2 + -0xc,uVar6,uVar5);
  return puVar7;
}

