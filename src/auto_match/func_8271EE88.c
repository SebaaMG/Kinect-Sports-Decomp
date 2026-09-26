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
extern int fn_8267C498();
extern int fn_826944C8();
extern int fn_82695370();
extern int fn_82695608();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696480();
extern int fn_82696D38();
extern int fn_826A7398();
extern int fn_826FE548();
extern int fn_82700F80();
extern int fn_82701088();
extern int fn_82711FA8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_44;
extern unsigned int uStack_45;
extern unsigned int uStack_46;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;


void fn_8271EE88(int param_1)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
  char *pcVar9;
  undefined8 uVar7;
  uint uVar10;
  uint *puVar11;
  undefined8 uVar8;
  char *pcVar13;
  longlong lVar12;
  char *pcVar14;
  undefined1 auStack_70 [4];
  undefined4 *puStack_6c;
  int aiStack_68 [2];
  uint auStack_60 [3];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  
  puVar3 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar3);
  *puVar3 = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  uVar6 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x1c) < 2) {
LAB_8271ef50:
    puVar11 = (uint *)fn_82711FA8(aiStack_68,uVar6);
    uVar10 = *puVar11;
    if (uVar10 != 0) {
      *(int *)(uVar10 + 4) = *(int *)(uVar10 + 4) + 1;
    }
    if (aiStack_68[0] != 0) {
      fn_8267C498();
    }
  }
  else {
    pcVar9 = (char *)fn_826957D0(param_1,1);
    if ((*pcVar9 == '\0') || (bVar5 = false, *pcVar9 == '\n')) {
      bVar5 = true;
    }
    if ((bVar5) || (pcVar9 = (char *)fn_826957D0(param_1,1), *pcVar9 == '\x01')) goto LAB_8271ef50;
    uVar4 = *(undefined4 *)(param_1 + 0x18);
    uVar7 = fn_826957D0(param_1,1);
    uVar10 = fn_82695370(uVar7,uVar4);
    if (uVar10 != 0) {
      *(int *)(uVar10 + 4) = *(int *)(uVar10 + 4) + 1;
    }
  }
  if (*(int *)(param_1 + 0x1c) < 3) {
    uVar7 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x18);
    uVar7 = fn_826957D0(param_1,2);
    uVar7 = fn_82695608(uVar7,uVar4);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar8 = fn_826957D0(param_1,0);
  fn_82696D38(&puStack_6c,uVar8,uVar4,0xffffffffffffffff,0);
  auStack_70[0] = 0;
  pcVar13 = "up";
  pcVar9 = (char *)*puStack_6c;
  pcVar14 = pcVar9;
  do {
    cVar1 = *pcVar14;
    cVar2 = *pcVar13;
    if (cVar1 == '\0') break;
    pcVar14 = pcVar14 + 1;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    uVar8 = 0x26;
  }
  else {
    pcVar13 = "down";
    pcVar14 = pcVar9;
    do {
      cVar1 = *pcVar14;
      cVar2 = *pcVar13;
      if (cVar1 == '\0') break;
      pcVar14 = pcVar14 + 1;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      uVar8 = 0x28;
    }
    else {
      pcVar13 = "left";
      pcVar14 = pcVar9;
      do {
        cVar1 = *pcVar14;
        cVar2 = *pcVar13;
        if (cVar1 == '\0') break;
        pcVar14 = pcVar14 + 1;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar8 = 0x25;
      }
      else {
        pcVar13 = "right";
        pcVar14 = pcVar9;
        do {
          cVar1 = *pcVar14;
          cVar2 = *pcVar13;
          if (cVar1 == '\0') break;
          pcVar14 = pcVar14 + 1;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          uVar8 = 0x27;
        }
        else {
          pcVar13 = "tab";
          pcVar14 = pcVar9;
          do {
            cVar1 = *pcVar14;
            cVar2 = *pcVar13;
            if (cVar1 == '\0') break;
            pcVar14 = pcVar14 + 1;
            pcVar13 = pcVar13 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 != cVar2) {
            pcVar14 = "shifttab";
            do {
              cVar1 = *pcVar9;
              cVar2 = *pcVar14;
              if (cVar1 == '\0') break;
              pcVar9 = pcVar9 + 1;
              pcVar14 = pcVar14 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 != cVar2) {
              lVar12 = (ulonglong)(uint)puStack_6c[2] - 1;
              puStack_6c[2] = (int)lVar12;
              goto LAB_8271f238;
            }
            auStack_70[0] = 1;
          }
          uVar8 = 9;
        }
      }
    }
  }
  auStack_60[0] = 0;
  uStack_48 = 0;
  uStack_46 = 0;
  auStack_60[1] = 0xffffffff;
  uStack_45 = 0;
  uStack_44 = 0;
  auStack_60[2] = lbl_821AAD20;
  uStack_54 = lbl_821AAD20;
  uStack_50 = lbl_821AAD20;
  uStack_4c = lbl_821AAD20;
  fn_82700F80(uVar6,auStack_60,uVar7);
  if (uVar10 != 0) {
    *(int *)(uVar10 + 4) = *(int *)(uVar10 + 4) + 1;
  }
  if (auStack_60[0] != 0) {
    fn_8267C498();
  }
  uStack_46 = 1;
  auStack_60[0] = uVar10;
  fn_82701088(uVar6,uVar8,5,auStack_70,auStack_60);
  fn_826FE548(uVar6,auStack_60);
  fn_82696480(*(undefined4 *)(param_1 + 4),auStack_60[0]);
  if (auStack_60[0] != 0) {
    fn_8267C498();
  }
  lVar12 = (ulonglong)(uint)puStack_6c[2] - 1;
  puStack_6c[2] = (int)lVar12;
LAB_8271f238:
  if (lVar12 == 0) {
    fn_826944C8(puStack_6c);
  }
  if (uVar10 != 0) {
    fn_8267C498(uVar10);
  }
  return;
}

