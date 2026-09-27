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
extern int fn_82FA9208();
extern int fn_82FA9428();
extern int fn_82FA94A0();
extern int fn_82FA9920();
extern int fn_82FAB9C0();
extern int fn_82FAD1F0();
extern int fn_82FADD68();
extern int fn_82FAE150();
extern int fn_82FAE168();
extern int fn_82FAE490();
extern int fn_82FAE648();
extern float lbl_8216CC20;
extern unsigned int lbl_832642E0;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


int fn_82FB7070(int param_1,int param_2,int param_3,ulonglong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  
  uStack_60 = 0;
  uVar8 = 0;
  if (param_3 != 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_3 + 0x40) + 0x60);
    fn_82FAE490(uVar2,0,*(uint *)(param_2 + 0x14) >> 0x1b,1,&uStack_60);
    uVar11 = (ulonglong)*(uint *)(param_2 + 8);
    lVar10 = (ulonglong)*(uint *)(param_2 + 0x10) +
             (uVar11 + ((ulonglong)*(uint *)(param_2 + 8) & 0x7fffffff) * 2 & 0xfffffff) * -0x10;
    if ((int)lVar10 < (int)-(ulonglong)uStack_60) {
      uVar1 = (uint)((double)(longlong)(int)(*(uint *)(param_2 + 0x10) + uStack_60) * lbl_8216CC20);
      lStack_58 = (longlong)(int)uVar1;
      uVar11 = (ulonglong)uVar1;
      lVar10 = -(ulonglong)uStack_60;
    }
    if ((((int)lVar10 == 0) && ((int)uVar11 == 0)) && ((*(uint *)(param_2 + 0x14) & 0x4000000) != 0)
       ) {
      lVar10 = fn_82FAE150(uVar2);
    }
    lVar3 = fn_82FAE168(uVar2);
    fn_82FA94A0(param_3,uVar11,*(undefined4 *)(param_2 + 0xc),lVar3 + lVar10);
    uVar8 = *(undefined2 *)(param_3 + 0x30);
  }
  iVar5 = 0;
  puVar9 = (undefined4 *)(param_2 + 0x18);
  if ((param_4 & 0xffffffff) != 0) {
    piVar4 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,param_4);
    if (piVar4 == (int *)0x0) {
      *(undefined1 *)(param_1 + 0x74) = 0;
    }
    else {
      fn_82FAE648(piVar4,puVar9,0,&uStack_5c);
      iVar5 = fn_82FADD68(piVar4,param_1,*(undefined4 *)(*(int *)(param_1 + 0x38) + 0x28),
                                *(int *)(param_1 + 0x38) + 0x10);
      if (iVar5 == 0) {
        *(undefined1 *)(param_1 + 0x74) = 0;
      }
      (**(code **)(*piVar4 + 8))(piVar4);
    }
  }
  piVar4 = (int *)(param_1 + 0x40);
  iVar6 = fn_82FAD1F0(piVar4,uStack_60,iVar5);
  if (iVar5 != 0) {
    fn_82FA9208(iVar5);
  }
  if (iVar6 == 0) {
    iVar6 = (**(code **)(*piVar4 + 0x10))(piVar4);
  }
  else {
    if (iVar5 != 0) {
      if (((*(ushort *)(param_2 + 0x2c) & 0xe000) != 0) ||
         (uVar7 = 1, (*(ushort *)(param_2 + 0x2c) & 0x1000) == 0)) {
        uVar7 = 0;
      }
      lVar10 = fn_82FA9920(iVar6,uStack_5c,puVar9,uVar7);
      *(uint *)(iVar6 + 0xc) = uStack_60;
      fn_82FA9428(iVar6,*puVar9,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(iVar5 + 0x68),
                      -lVar10);
    }
    *(undefined2 *)(iVar6 + 0x30) = uVar8;
  }
  return iVar6;
}

