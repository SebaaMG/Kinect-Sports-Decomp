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
#define TBLr 0
extern unsigned int *auStack_474;
extern unsigned int *auStack_884;
extern unsigned int *auStack_8a8;
extern unsigned int *auStack_8b0;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D7D230();
extern int fn_82D808D0();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DB06D0();
extern int fn_83088518();
extern int fn_83088640();
extern int fn_83089DB0();
extern int fn_83089DD8();
extern unsigned int iStack_88c;
extern unsigned int iStack_8a4;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_478;
extern unsigned int uStack_47c;
extern unsigned int uStack_888;
extern unsigned int uStack_89f;
extern unsigned int uStack_8a0;


void fn_82D85148(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_8b0 [8];
  undefined1 auStack_8a8 [4];
  int iStack_8a4;
  undefined1 uStack_8a0;
  undefined1 uStack_89f;
  undefined1 *puStack_890;
  int iStack_88c;
  uint uStack_888;
  undefined1 auStack_884 [1028];
  undefined1 *puStack_480;
  uint uStack_47c;
  uint uStack_478;
  undefined1 auStack_474 [1140];
  
  if (*(int *)(param_1 + 0x94) == 0) {
    iVar5 = KeTlsGetValue(lbl_8323B4A0);
    puVar11 = *(undefined4 **)(iVar5 + 4);
    if (puVar11 < *(undefined4 **)(iVar5 + 0xc)) {
      *puVar11 = "LtUpdateFilterOnEntity";
      puVar11[3] = "Stinit";
      uVar3 = TBLr;
      puVar11[1] = (int)uVar3;
      *(undefined4 **)(iVar5 + 4) = puVar11 + 4;
    }
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
    if (*(char *)(param_2 + 0xe8) == '\x05') {
      fn_83089DD8(param_2 + 0x10);
    }
    puStack_890 = auStack_884;
    iStack_88c = 0;
    uStack_888 = 0x80000080;
    if (param_3 == 0) {
      iVar5 = KeTlsGetValue(lbl_8323B4A0);
      puVar11 = *(undefined4 **)(iVar5 + 4);
      if (puVar11 < *(undefined4 **)(iVar5 + 0xc)) {
        *puVar11 = "Stbroadphase";
        uVar3 = TBLr;
        puVar11[1] = (int)uVar3;
        *(undefined4 **)(iVar5 + 4) = puVar11 + 3;
      }
      (**(code **)(**(int **)(param_1 + 0x58) + 0x48))
                (*(int **)(param_1 + 0x58),param_2 + 0x24,&puStack_890);
      iVar5 = KeTlsGetValue(lbl_8323B4A0);
      puVar11 = *(undefined4 **)(iVar5 + 4);
      if (puVar11 < *(undefined4 **)(iVar5 + 0xc)) {
        *puVar11 = "Stphantom";
        uVar3 = TBLr;
        puVar11[1] = (int)uVar3;
        *(undefined4 **)(iVar5 + 4) = puVar11 + 3;
      }
      iVar5 = 0;
      if (0 < iStack_88c) {
        iVar7 = 0;
        puVar12 = puStack_890;
        iVar13 = iStack_88c;
        do {
          iVar10 = (int)*(char *)(*(int *)(puVar12 + 4) + 5) + *(int *)(puVar12 + 4);
          if ((*(char *)(iVar10 + 0x18) == '\x02') &&
             (piVar6 = (int *)(*(char *)(iVar10 + 0x10) + iVar10), piVar6 != (int *)0x0)) {
            fn_82D808D0(piVar6,param_2 + 0x10,*(undefined4 *)(param_1 + 0x7c));
            if (param_4 != 0) {
              (**(code **)(*piVar6 + 0x30))(piVar6);
            }
            iVar13 = iStack_88c + -1;
            if (iVar13 != iVar5) {
              puVar11 = (undefined4 *)(puStack_890 + iVar7);
              iVar10 = iVar13 * 8 - (int)puVar11;
              lVar14 = 2;
              do {
                *puVar11 = *(undefined4 *)(puStack_890 + iVar10 + (int)puVar11);
                puVar11 = puVar11 + 1;
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
            }
            iVar5 = iVar5 + -1;
            iVar7 = iVar7 + -8;
            iStack_88c = iVar13;
          }
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + 8;
          puVar12 = puStack_890 + iVar7;
        } while (iVar5 < iVar13);
      }
      piVar6 = (int *)fn_83089DB0(param_2 + 0x10);
      uStack_47c = 0;
      puStack_480 = auStack_474;
      uStack_478 = 0x80000080;
      iVar5 = 0;
      if (0 < piVar6[1]) {
        iVar13 = 0;
        do {
          iVar7 = fn_82CE5410();
          if (uStack_47c == (uStack_478 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),&puStack_480,8);
          }
          uVar9 = uStack_47c + 1;
          iVar5 = iVar5 + 1;
          *(int *)(puStack_480 + uStack_47c * 8) =
               *(int *)(*(int *)(iVar13 + *piVar6) + 0x10) + 0x14;
          piVar4 = (int *)(iVar13 + *piVar6);
          iVar13 = iVar13 + 8;
          *(int *)((int)(puStack_480 + uStack_47c * 8) + 4) = *(int *)(*piVar4 + 0x14) + 0x14;
          uStack_47c = uVar9;
        } while (iVar5 < piVar6[1]);
      }
      fn_83088640(&puStack_480,&puStack_890);
      iVar5 = fn_82CE5410();
      uStack_47c = 0;
      if ((uStack_478 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
                  (*(int **)(iVar5 + 0x10),puStack_480,uStack_478 & 0x3fffffff,8);
      }
      puStack_480 = (undefined1 *)0x0;
      uStack_478 = 0x80000000;
    }
    iVar5 = KeTlsGetValue(lbl_8323B4A0);
    puVar11 = *(undefined4 **)(iVar5 + 4);
    if (puVar11 < *(undefined4 **)(iVar5 + 0xc)) {
      *puVar11 = "StcheckAgts";
      uVar3 = TBLr;
      puVar11[1] = (int)uVar3;
      *(undefined4 **)(iVar5 + 4) = puVar11 + 3;
    }
    cVar1 = *(char *)(param_2 + 0x2a);
    piVar6 = (int *)fn_83089DB0(param_2 + 0x10);
    iVar5 = 0;
    if (0 < piVar6[1]) {
      iVar13 = 0;
      do {
        puVar11 = (undefined4 *)(iVar13 + *piVar6);
        pcVar8 = (char *)(**(code **)(*(int *)(*(int *)(param_1 + 0x7c) + 8) + 4))
                                   (auStack_8b0,*(int *)(param_1 + 0x7c) + 8,param_2 + 0x10,
                                    puVar11[1]);
        if ((*pcVar8 == '\0') ||
           (iVar7 = puVar11[1],
           *(char *)((int)*(char *)(iVar7 + 0x1a) + cVar1 * 10 + *(int *)(param_1 + 0x80) + 0x1bb0)
           == '\0')) {
          fn_82DB06D0(*puVar11);
          iVar5 = iVar5 + -1;
          iVar13 = iVar13 + -8;
          *(byte *)(*(int *)(param_2 + 0xcc) + 0x25) =
               *(byte *)(*(int *)(param_2 + 0xcc) + 0x25) & 0x3f | 0x40;
        }
        else if (param_4 == 1) {
          if (*(char *)(param_2 + 0xe8) == '\x05') {
            uVar2 = *(undefined4 *)(*(char *)(iVar7 + 0x10) + iVar7 + 0xcc);
          }
          else {
            uVar2 = *(undefined4 *)(param_2 + 0xcc);
          }
          fn_82D7D230(*puVar11,*(undefined4 *)(param_1 + 0x78),uVar2);
        }
        iVar5 = iVar5 + 1;
        iVar13 = iVar13 + 8;
      } while (iVar5 < piVar6[1]);
    }
    if (0 < iStack_88c) {
      iVar5 = KeTlsGetValue(lbl_8323B4A0);
      puVar11 = *(undefined4 **)(iVar5 + 4);
      if (puVar11 < *(undefined4 **)(iVar5 + 0xc)) {
        *puVar11 = "StaddAgts";
        uVar3 = TBLr;
        puVar11[1] = (int)uVar3;
        *(undefined4 **)(iVar5 + 4) = puVar11 + 3;
      }
      lVar14 = (ulonglong)*(uint *)(param_1 + 0x7c) + 8;
      if ((ulonglong)*(uint *)(param_1 + 0x7c) == 0) {
        lVar14 = 0;
      }
      fn_83088518(*(undefined4 *)(param_1 + 100),puStack_890,iStack_88c,lVar14);
    }
    lVar14 = (ulonglong)*(uint *)(param_1 + 0x94) - 1;
    *(int *)(param_1 + 0x94) = (int)lVar14;
    if ((lVar14 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
      if (*(int *)(param_1 + 0x8c) != 0) {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        fn_82DA6BA8(*(undefined4 *)(param_1 + 0x88));
      }
      if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        fn_82DA6A58(*(undefined4 *)(param_1 + 0x88));
      }
    }
    iVar5 = fn_82CE5410();
    iStack_88c = 0;
    if ((uStack_888 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
                (*(int **)(iVar5 + 0x10),puStack_890,uStack_888 & 0x3fffffff,8);
    }
    puStack_890 = (undefined1 *)0x0;
    uStack_888 = 0x80000000;
    iVar5 = KeTlsGetValue(lbl_8323B4A0);
    puVar11 = *(undefined4 **)(iVar5 + 4);
    if (puVar11 < *(undefined4 **)(iVar5 + 0xc)) {
      *puVar11 = &lbl_8202CF7C;
      uVar3 = TBLr;
      puVar11[1] = (int)uVar3;
      *(undefined4 **)(iVar5 + 4) = puVar11 + 3;
    }
  }
  else {
    uStack_8a0 = (undefined1)param_3;
    auStack_8a8[0] = 0x12;
    uStack_89f = (undefined1)param_4;
    iStack_8a4 = param_2;
    fn_82DA6530(*(undefined4 *)(param_1 + 0x88),auStack_8a8);
  }
  return;
}

