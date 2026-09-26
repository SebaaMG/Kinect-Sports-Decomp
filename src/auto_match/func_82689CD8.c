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
extern unsigned int *auStack_70;
extern int fn_82681D00();
extern int fn_826826A8();
extern int fn_82683270();
extern int fn_82689C60();
extern int fn_82693410();
extern int fn_826944C8();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_826C9858();
extern int fn_82700B38();
extern int fn_82704A98();


undefined4 fn_82689CD8(int param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar8;
  longlong lVar6;
  char cVar9;
  undefined8 uVar7;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  int aiStack_80 [4];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar5 = fn_82693410();
    auStack_70[0] = 0;
    *(int *)(param_1 + 0xb88) = *(int *)(param_1 + 0xb88) + 1;
    iVar8 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
    uVar11 = param_4 - 1;
    if (-1 < (longlong)uVar11) {
      puVar12 = (uint *)(iVar8 + 8);
      param_3 = (uVar11 & 0xfffffff) * 0x10 + param_3;
      do {
        auStack_60[0] = 0;
        fn_82681D00(param_1,param_3,auStack_60);
        uVar1 = *puVar12;
        *puVar12 = uVar1 + 0x10;
        if (*(uint *)(iVar8 + 0x10) <= uVar1 + 0x10) {
          fn_826826A8(puVar12);
        }
        if (*puVar12 != 0) {
          fn_82695DA0(*puVar12,auStack_60);
        }
        fn_82696330(auStack_60);
        uVar11 = uVar11 - 1;
        param_3 = param_3 + -0x10;
      } while (-1 < (longlong)uVar11);
    }
    if ((*(int *)(param_1 + 0xa00) == 0) || (lVar6 = fn_82704A98(param_1,param_2), lVar6 == 0)
       ) {
      cVar9 = fn_826C9858(*(undefined4 *)(param_1 + 0x68),param_2,auStack_70,param_4);
    }
    else {
      cVar9 = fn_82700B38(param_1,param_2,lVar6,auStack_70,param_4);
    }
    fn_82683270(iVar8 + 8,param_4);
    if (cVar9 != '\0') {
      *(undefined4 *)(*(int *)(param_1 + 0x9e8) + 0x18) = 0;
      iVar8 = *(int *)(*(int *)(param_1 + 0x9e8) + 0x18);
      *(int *)(*(int *)(param_1 + 0x9e8) + 0x18) = iVar8 + 1;
      if (*(uint *)(*(int *)(param_1 + 0x9e8) + 0xc) < *(uint *)(*(int *)(param_1 + 0x9e8) + 0x18))
      {
        iVar10 = *(int *)(*(int *)(param_1 + 0x9e8) + 0x18);
        if (iVar10 == 0) {
          iVar10 = 1;
        }
        fn_82689C60(*(int *)(param_1 + 0x9e8) + 8,iVar10);
      }
      uVar7 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
      fn_82696D38(aiStack_80,auStack_70,uVar7,0xffffffffffffffff,0);
      iVar4 = aiStack_80[0];
      iVar8 = iVar8 * 4;
      iVar10 = *(int *)(*(int *)(param_1 + 0x9e8) + 8);
      *(int *)(aiStack_80[0] + 8) = *(int *)(aiStack_80[0] + 8) + 1;
      iVar3 = *(int *)(iVar10 + iVar8);
      lVar6 = (ulonglong)*(uint *)(iVar3 + 8) - 1;
      *(int *)(iVar3 + 8) = (int)lVar6;
      if (lVar6 == 0) {
        fn_826944C8();
      }
      *(int *)(iVar10 + iVar8) = iVar4;
      lVar6 = (ulonglong)*(uint *)(aiStack_80[0] + 8) - 1;
      *(int *)(aiStack_80[0] + 8) = (int)lVar6;
      if (lVar6 == 0) {
        fn_826944C8(aiStack_80[0]);
      }
      uVar2 = **(undefined4 **)(*(int *)(*(int *)(param_1 + 0x9e8) + 8) + iVar8);
      fn_82696330(auStack_70);
      lVar6 = fn_82693410();
      *(longlong *)(param_1 + 0xb58) = *(longlong *)(param_1 + 0xb58) + (lVar6 - lVar5);
      return uVar2;
    }
    fn_82696330(auStack_70);
    lVar6 = fn_82693410();
    *(longlong *)(param_1 + 0xb58) = *(longlong *)(param_1 + 0xb58) + (lVar6 - lVar5);
  }
  return 0;
}

