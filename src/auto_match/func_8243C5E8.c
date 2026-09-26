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
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_9c;
extern unsigned int *auStack_a0;
extern int fn_8223C478();
extern int fn_82248CC8();
extern int fn_822ABA88();
extern int fn_8242C410();
extern int fn_8242D5A8();
extern int fn_8243C320();
extern int fn_8243CD40();
extern int fn_82511350();
extern int fn_8265CA20();
extern int fn_82825F40();
extern int fn_8288B760();
extern int fn_828E9D28();
extern int fn_828E9DB8();
extern unsigned int iStack_48;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_84;


void fn_8243C5E8(int *param_1)

{
  byte bVar1;
  char cVar7;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  uint auStack_98 [2];
  undefined1 auStack_90 [4];
  undefined4 *puStack_8c;
  undefined4 uStack_84;
  int aiStack_80 [8];
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  iVar6 = param_1[0x20];
  if (iVar6 != 0) {
    aiStack_80[0] = (**(code **)(*param_1 + 8))();
    aiStack_80[0] = aiStack_80[0] + 0xf0;
    aiStack_80[1] = (**(code **)(*param_1 + 8))(param_1);
    aiStack_80[1] = aiStack_80[1] + 0x238;
    aiStack_80[2] = (**(code **)(*param_1 + 8))(param_1);
    aiStack_80[2] = aiStack_80[2] + 0x380;
    aiStack_80[4] = (**(code **)(*param_1 + 8))(param_1);
    aiStack_80[4] = aiStack_80[4] + 0x4c8;
    aiStack_80[3] = (**(code **)(*param_1 + 8))(param_1);
    aiStack_80[3] = aiStack_80[3] + 0x610;
    aiStack_80[5] = (**(code **)(*param_1 + 8))(param_1);
    aiStack_80[5] = aiStack_80[5] + 0x758;
    fn_8242D5A8(iVar6,aiStack_80);
    iVar2 = 0;
    aiStack_80[0] = 0;
    aiStack_80[1] = 0;
    aiStack_80[2] = 0;
    aiStack_80[3] = 0;
    aiStack_80[4] = 0;
    aiStack_80[5] = 0;
    aiStack_80[6] = 0;
    aiStack_80[7] = 0;
    cVar7 = fn_8288B760(param_1);
    if (cVar7 == '\0') {
      lVar10 = (**(code **)(*param_1 + 8))(param_1);
      fn_8243C320(lVar10 + 0x8a0,aiStack_80);
      lVar10 = 0;
      iVar3 = fn_8242C410(iVar6);
      if (0 < iVar3) {
        do {
          piVar5 = *(int **)(**(int **)(iVar6 + 8) + iVar2);
          iVar3 = fn_822ABA88(*(undefined4 *)(piVar5[4] * 4 + *piVar5),0);
          lVar10 = lVar10 + 1;
          puVar9 = (undefined4 *)((int)aiStack_80 + iVar2);
          iVar2 = iVar2 + 4;
          *(char *)(*(int *)(iVar3 + 0x1a0) + 0x44) = (char)*puVar9;
          iVar3 = fn_8242C410(iVar6);
        } while ((int)lVar10 < iVar3);
      }
    }
    else {
      fn_82511350(auStack_90,auStack_a0,auStack_a0);
      uVar8 = 0;
      iVar2 = fn_8242C410(iVar6);
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          piVar5 = *(int **)(**(int **)(iVar6 + 8) + iVar2);
          auStack_98[0] = uVar8;
          iVar3 = fn_822ABA88(*(undefined4 *)(piVar5[4] * 4 + *piVar5),0);
          bVar1 = *(byte *)(*(int *)(iVar3 + 0x1a0) + 0x44);
          puVar4 = (uint *)fn_8243CD40(auStack_90,auStack_98);
          uVar8 = uVar8 + 1;
          iVar2 = iVar2 + 4;
          *puVar4 = (uint)bVar1;
          iVar3 = fn_8242C410(iVar6);
        } while ((int)uVar8 < iVar3);
      }
      auStack_98[0] = 0;
      do {
        uVar8 = auStack_98[0];
        piVar5 = (int *)fn_8243CD40(auStack_90,auStack_98);
        auStack_98[0] = uVar8 + 1;
        aiStack_80[uVar8] = *piVar5;
      } while (auStack_98[0] < 8);
      iVar6 = (**(code **)(*param_1 + 8))(param_1);
      piVar5 = (int *)(iVar6 + 0x8a0);
      (**(code **)(*piVar5 + 0x40))(piVar5,auStack_9c);
      puStack_50 = auStack_9c;
      iStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_4c = 4;
      fn_828E9D28(auStack_60,auStack_9c,4);
      lVar10 = 8;
      puVar9 = &uStack_84;
      do {
        fn_8223C478(auStack_60,4,0);
        puVar9 = puVar9 + 1;
        fn_828E9DB8(auStack_60,*puVar9,4);
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      fn_82248CC8(piVar5,auStack_9c);
      if (iStack_48 != 0) {
        fn_8265CA20();
      }
      iStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      fn_82825F40(auStack_98,auStack_90,*puStack_8c);
      fn_8265CA20(puStack_8c);
    }
  }
  return;
}

