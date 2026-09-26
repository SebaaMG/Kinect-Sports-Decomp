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
extern unsigned int *auStack_80;
extern unsigned int *auStack_ae;
extern int fn_82A49AC8();
extern int fn_82A49DF8();
extern int fn_82A51C60();
extern int fn_82F691F0();


void fn_82A4A0A0(int param_1,ulonglong param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  uint uVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined1 auStack_ae [46];
  undefined1 auStack_80 [128];
  
  piVar6 = (int *)(param_1 + 4);
  iVar4 = fn_82A51C60(piVar6,param_2,0);
  uVar5 = (uint)*(ushort *)(param_3 + 0x406);
  uVar7 = (ulonglong)*(uint *)(param_3 + 0x418);
  if ((param_2 & 0x1000) != 0) {
    puVar1 = *(uint **)(param_1 + 0x38);
    if (puVar1 == (uint *)0x0) {
      uVar5 = *(uint *)(param_1 + 0x40);
    }
    else {
      uVar5 = *puVar1;
    }
    uVar5 = uVar5 & 0xffff;
    if (puVar1 == (uint *)0x0) {
      uVar7 = (**(code **)(*piVar6 + 0x6c))(piVar6);
    }
    else {
      uVar7 = (ulonglong)puVar1[1];
    }
  }
  if (-1 < iVar4) {
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    uVar3 = fn_82A49AC8(param_3 + 0x404);
    fn_82A49DF8(auStack_80,0x28,uVar3,uVar5,uVar2,*(undefined2 *)(param_3 + 0x412),
                  *(undefined2 *)(param_3 + 0x412),uVar7);
    piVar6 = *(int **)(*(int *)(param_1 + 0x34) + 0xb0);
    (**(code **)(*piVar6 + 0x18))(piVar6,param_3,0,auStack_80,0,param_1 + 0x8c);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_ae,0,0x26);
}

