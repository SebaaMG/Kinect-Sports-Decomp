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
extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82685480();
extern int fn_82685680();
extern int fn_82685AA8();
extern int fn_82693410();
extern int fn_826A8E58();
extern int fn_826EEB08();
extern int fn_826EEBC0();
extern int fn_826F7AE0();
extern int fn_826FCDB0();
extern int fn_8270D350();
extern int fn_8270D6C0();
extern int fn_827741E8();
extern int fn_8278C110();
extern unsigned int iStack_188;
extern unsigned int iStack_18c;
extern unsigned int iStack_1a4;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;


void fn_826FE0A0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong lVar4;
  char cVar9;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 in_r7;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int *piStack_1a8;
  int iStack_1a4;
  int aiStack_1a0 [5];
  int iStack_18c;
  int iStack_188;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    return;
  }
  lVar4 = fn_82693410();
  iVar6 = 0;
  bVar3 = false;
  uVar7 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar12 = 0;
    do {
      cVar9 = (**(code **)(**(int **)(iVar12 + *(int *)(param_1 + 0x5c) + 4) + 8))();
      if (cVar9 != '\0') {
        bVar3 = true;
        break;
      }
      uVar7 = uVar7 + 1;
      iVar12 = iVar12 + 8;
    } while (uVar7 < *(uint *)(param_1 + 0x60));
  }
  if (bVar3) {
    lVar5 = (ulonglong)*(uint *)(param_1 + 0x100) + 8;
    if ((ulonglong)*(uint *)(param_1 + 0x100) == 0) {
      lVar5 = 0;
    }
    fn_8270D6C0((double)*(float *)(param_1 + 0xac),aiStack_1a0,lVar5,
                      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x14) + 0x18),
                      (ulonglong)*(uint *)(*(int *)(param_1 + 0x6c) + 0x1c) + 0x18,in_r7,
                      param_1 + 0xe8,param_1 + 0xb70);
    if ((aiStack_1a0[0] == 0) || (*(int *)(aiStack_1a0[0] + 0xc) == 0)) {
      fn_8270D350(aiStack_1a0);
      lVar5 = fn_82693410();
      lVar10 = (lVar5 - lVar4) + *(longlong *)(param_1 + 0xb68);
      goto LAB_826fe3b0;
    }
    *(uint *)(param_1 + 0xb00) = *(uint *)(param_1 + 0xb00) | 2;
    if (iStack_18c != 0) {
      fn_8267C4C8();
    }
    if (*(int *)(param_1 + 0x108) != 0) {
      fn_8267C4F0();
    }
    *(int *)(param_1 + 0x108) = iStack_18c;
    uStack_1b0 = *(undefined4 *)(param_1 + 0x940);
    (**(code **)(**(int **)(aiStack_1a0[0] + 0xc) + 0x18))
              ((double)*(float *)(param_1 + 200),(double)*(float *)(param_1 + 0xd0),
               (double)*(float *)(param_1 + 0xcc),(double)*(float *)(param_1 + 0xd4),
               *(int **)(aiStack_1a0[0] + 0xc),&uStack_1b0,param_1 + 0x78);
    if ((*(int **)(param_1 + 0x104) != (int *)0x0) && (**(int **)(param_1 + 0x104) != 0)) {
      fn_8278C110(&piStack_1a8,param_1 + 0x104);
      uStack_1b0 = 0;
      uStack_1ac = 0;
      cVar9 = fn_826A8E58(&piStack_1a8,&uStack_1b0);
      if (cVar9 == '\0') {
        uStack_1b0 = 0;
        uStack_1ac = 0;
        do {
          iVar11 = iStack_1a4 * 0xc + *piStack_1a8;
          iVar12 = *(int *)(iVar11 + 0x10);
          if (iVar12 != 0) {
            *(int *)(iVar12 + 4) = *(int *)(iVar12 + 4) + 1;
          }
          piVar1 = *(int **)(iVar11 + 0x10);
          (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(aiStack_1a0[0] + 0xc));
          fn_8267C498(piVar1);
          fn_827741E8(&piStack_1a8);
          cVar9 = fn_826A8E58(&piStack_1a8,&uStack_1b0);
        } while (cVar9 == '\0');
      }
    }
    uVar7 = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      do {
        piVar1 = *(int **)(iVar6 + *(int *)(param_1 + 0x5c) + 4);
        (**(code **)(*piVar1 + 0x60))(piVar1,aiStack_1a0);
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 8;
      } while (uVar7 < *(uint *)(param_1 + 0x60));
    }
    fn_826F7AE0(param_1,aiStack_1a0);
    fn_826FCDB0(param_1,aiStack_1a0);
    (**(code **)(**(int **)(aiStack_1a0[0] + 0xc) + 0x1c))();
    *(uint *)(param_1 + 0xb00) = *(uint *)(param_1 + 0xb00) & 0xfffffffd;
    fn_82685AA8(iStack_188);
    fn_82685680(iStack_188);
    iVar6 = fn_82685480(iStack_188);
    if (iVar6 != 0) {
      uVar2 = *(undefined4 *)(iStack_188 + 0x10);
      uVar7 = fn_82685480();
      uVar8 = fn_826EEB08(uVar2);
      if (uVar7 < uVar8) {
        fn_826EEBC0(uVar2);
      }
    }
    fn_8270D350(aiStack_1a0);
    lVar10 = fn_82693410();
    lVar5 = *(longlong *)(param_1 + 0xb68);
    lVar10 = lVar10 - lVar4;
  }
  else {
    lVar5 = fn_82693410();
    lVar10 = *(longlong *)(param_1 + 0xb68);
    lVar5 = lVar5 - lVar4;
  }
  lVar10 = lVar10 + lVar5;
LAB_826fe3b0:
  *(longlong *)(param_1 + 0xb68) = lVar10;
  return;
}

