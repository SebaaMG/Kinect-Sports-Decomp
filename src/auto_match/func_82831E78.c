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
extern unsigned int *auStack_a0;
extern int fn_8265CA20();
extern int fn_828223C8();
extern int fn_82824270();
extern int fn_82826568();
extern int fn_82827980();
extern int fn_82832368();
extern int fn_82F691F0();
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_ac;


/* WARNING: Removing unreachable block (ram,0x82832210) */
/* WARNING: Removing unreachable block (ram,0x82832224) */
/* WARNING: Removing unreachable block (ram,0x82832260) */
/* WARNING: Removing unreachable block (ram,0x82832290) */
/* WARNING: Removing unreachable block (ram,0x82832298) */
/* WARNING: Removing unreachable block (ram,0x828322c4) */
/* WARNING: Removing unreachable block (ram,0x828322d0) */

void fn_82831E78(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar5;
  char cVar6;
  int iVar4;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *piStack_b0;
  undefined4 uStack_ac;
  int aiStack_a8 [2];
  undefined4 auStack_a0 [4];
  int aiStack_90 [4];
  int *piStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  auStack_a0[0] = 0;
  cVar5 = fn_82827980(param_1,0xffffffff8201f118,auStack_a0);
  cVar6 = fn_82827980(param_1,0xffffffff8201f124,auStack_a0);
  if ((cVar5 != '\0') && (cVar6 != '\0')) {
    aiStack_90[0] = 0;
    aiStack_90[1] = 0;
    aiStack_90[2] = 0;
    fn_82832368(aiStack_90,(ulonglong)*(uint *)(param_1 + 0x24) + 1);
    piStack_80 = (int *)0x0;
    uStack_7c = 0;
    uStack_78 = 0;
    fn_82832368(&piStack_80,(ulonglong)*(uint *)(param_1 + 0x24) + 1);
    piVar1 = piStack_80;
    iVar2 = aiStack_90[0];
    uVar8 = 0;
    iVar10 = aiStack_90[0] - (int)piStack_80;
    piVar9 = piStack_80;
    do {
      *(undefined4 *)(iVar10 + (int)piVar9) = 0;
      uVar8 = uVar8 + 1;
      *piVar9 = 0;
      piVar9 = piVar9 + 1;
    } while (uVar8 <= *(uint *)(param_1 + 0x24));
    iVar4 = param_1 + 0x2fc;
    while (fn_828223C8(iVar4,aiStack_a8), aiStack_a8[0] != 0) {
      if (*(char *)(aiStack_a8[0] + 0x28) == cVar5) {
        *(undefined4 *)(*(int *)(aiStack_a8[0] + 0x10) * 4 + iVar2) =
             *(undefined4 *)(aiStack_a8[0] + 0xc);
      }
      iVar4 = aiStack_a8[0];
      if (*(char *)(aiStack_a8[0] + 0x28) == cVar6) {
        piVar1[*(int *)(aiStack_a8[0] + 0x10)] = *(int *)(aiStack_a8[0] + 0xc);
      }
    }
    uVar8 = *(uint *)(param_1 + 0x24);
    bVar3 = false;
    uVar7 = 1;
    piVar9 = piVar1;
    if (uVar8 != 0) {
      do {
        piVar9 = piVar9 + 1;
        if ((*(int *)(iVar10 + (int)piVar9) != 0) && (*piVar9 != 0)) {
          bVar3 = true;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 <= uVar8);
    }
    if ((bVar3) && (uVar7 = 1, 1 < uVar8)) {
      iVar10 = iVar2;
      do {
        iVar10 = iVar10 + 4;
        iVar4 = *(int *)((int)piVar1 + (iVar10 - iVar2));
        if (iVar4 != 0) {
          uStack_ac = 0;
          fn_82826568(param_1,iVar4,&uStack_ac);
          piStack_b0 = (int *)0x0;
          fn_82824270(uStack_ac,&piStack_b0,0xffffffff8201f140,0xffffffff8201f12c,0xc,1,1,1);
          piStack_b0[1] = 0;
          piStack_b0[2] = 0;
          fn_82824270(uStack_ac,piStack_b0,0xffffffff8201f170,0xffffffff8201f158,0x10,1,1,1);
          piVar1 = (int *)*piStack_b0;
          iVar2 = (*(int **)(param_1 + 0x3bc))[1] - **(int **)(param_1 + 0x3bc) >> 2;
          *piVar1 = iVar2;
          fn_82824270(uStack_ac,piVar1 + 1,0xffffffff8201f1a0,0xffffffff8201f198,4,iVar2,1,1);
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(piVar1[1],0,*piVar1 << 2);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x24));
    }
    if (piVar1 != (int *)0x0) {
      fn_8265CA20(piVar1);
    }
    if (iVar2 != 0) {
      fn_8265CA20(iVar2);
    }
  }
  return;
}

