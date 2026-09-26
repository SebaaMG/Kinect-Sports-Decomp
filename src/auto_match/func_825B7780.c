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
extern unsigned int *auStack_180;
extern unsigned int *auStack_188;
extern unsigned int *auStack_1a0;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_82526C70();
extern int fn_8256BF18();
extern int fn_8256C7E8();
extern int fn_82580A78();
extern int fn_82599418();
extern int fn_825B7500();
extern int fn_8260C1A8();
extern int fn_8265C9E0();
extern int fn_827D59F0();
extern int fn_82A1E650();
extern int fn_82A1E658();
extern int fn_82A1E6A0();
extern int fn_82A1EFC0();
extern int fn_82A1F4F8();
extern unsigned int iStack_184;
extern unsigned int iStack_190;
extern unsigned int lbl_821C2258;
extern unsigned int lbl_821C2CF8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A24;
extern unsigned int lbl_8326F874;
extern unsigned int lbl_832767C8;
extern unsigned int uRam83281104;
extern unsigned int uRam832822a0;
extern unsigned int uStack_18c;
extern unsigned int uStack_194;
extern unsigned int uStack_198;


void fn_825B7780(void)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar6;
  ulonglong uVar5;
  undefined4 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  longlong lVar14;
  undefined4 auStack_1a0 [2];
  undefined4 uStack_198;
  undefined4 uStack_194;
  int iStack_190;
  uint uStack_18c;
  undefined1 auStack_188 [4];
  int iStack_184;
  undefined1 auStack_180 [384];
  
  fn_82526C70(auStack_180,0x104,0xffffffff821c8538,0xffffffff831c0ee8,0xffffffff821c84f8,
                    0xffffffff821c8528);
  uVar6 = fn_82A1F4F8(auStack_180);
  if (uVar6 == 0xffffffff) {
    uVar5 = thunk_FUN_82a2b798();
  }
  else {
    uVar5 = -(ulonglong)((uVar6 & 0x10) != 0) & 0x10b;
  }
  if ((int)uVar5 == 0) {
    iStack_190 = 0;
    uStack_18c = 0;
    lbl_8326F874 = fn_82A1E6A0(uVar5,0,0,0);
    auStack_1a0[0] = 0;
    fn_82580A78(auStack_1a0,auStack_180,&iStack_190,&uStack_18c,0xffffffff825b7728,0);
    fn_82A1E650(lbl_8326F874,0xffffffffffffffff);
    fn_82A1E658(lbl_8326F874);
    bVar4 = false;
    uVar5 = (ulonglong)(uStack_18c >> 5);
    if (uVar5 != 0) {
      pcVar13 = (char *)(iStack_190 + 2);
      do {
        cVar1 = pcVar13[-2];
        pcVar11 = pcVar13;
        pcVar9 = "AMLocal";
        if (cVar1 == '\0') {
          do {
            cVar1 = *pcVar11;
            cVar2 = *pcVar9;
            if (cVar1 == '\0') break;
            pcVar11 = pcVar11 + 1;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 == cVar2);
          uVar8 = 0xffffffff8328110c;
          pcVar11 = pcVar13;
          pcVar9 = "AMServer";
          if (cVar1 != cVar2) {
            do {
              cVar1 = *pcVar11;
              cVar2 = *pcVar9;
              if (cVar1 == '\0') break;
              pcVar11 = pcVar11 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 == cVar2);
            pcVar11 = pcVar13;
            pcVar9 = "AMLoctext";
            if (cVar1 == cVar2) {
              uVar8 = 0xffffffff83281110;
            }
            else {
              do {
                cVar1 = *pcVar11;
                cVar2 = *pcVar9;
                if (cVar1 == '\0') break;
                pcVar11 = pcVar11 + 1;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 != cVar2) goto LAB_825b79c0;
              uVar8 = 0xffffffff83281114;
            }
          }
          fn_825B7500(pcVar13,uVar8);
        }
        else if (cVar1 == '\x01') {
          if (!bVar4) {
            bVar4 = true;
          }
        }
        else if (cVar1 == '\x02') {
          fn_825B7500(pcVar13,0xffffffff83281118);
          fn_8256BF18();
          fn_8256C7E8();
                    /* WARNING: Subroutine does not return */
          fn_82A1EFC0(0xffffffff8326ba00,0,0x200);
        }
LAB_825b79c0:
        uVar5 = uVar5 - 1;
        pcVar13 = pcVar13 + 0x20;
      } while (uVar5 != 0);
    }
    auStack_1a0[0] = 2;
    uStack_198 = 4;
    puVar7 = (undefined4 *)
             fn_8260C1A8(auStack_188,*(undefined4 *)(lbl_83265A24 + 0x2c4),&uStack_198,
                               auStack_1a0);
    uVar3 = *puVar7;
    iVar12 = puVar7[1];
    *puVar7 = 0;
    puVar7[1] = 0;
    if (iStack_184 != 0) {
      fn_822315A0();
    }
    uStack_198 = 0;
    uStack_194 = 0;
    fn_82517978(&uStack_198,uVar3,iVar12,0);
    uRam83281104 = fn_827D59F0(lbl_83265A24,&uStack_198,1,0,0,0);
    fn_82599418();
    if (iVar12 != 0) {
      fn_822315A0(iVar12);
    }
    uRam832822a0 = 0;
    fn_825B7500(0xffffffff821caa88,0xffffffff83281108);
    puVar7 = (undefined4 *)fn_8265C9E0(0xb4);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = &lbl_821C2CF8;
      lVar14 = 0x10;
      puVar7[8] = 0;
      puVar10 = puVar7 + 0xc;
      puVar7[9] = 0;
      puVar7[10] = 0;
      puVar7[0x28] = 0;
      lbl_832767C8 = puVar7;
      do {
        puVar10 = puVar10 + 1;
        *puVar10 = 0;
        uVar3 = lbl_821CC160;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      iVar12 = 0;
      lVar14 = 4;
      puVar10 = puVar7 + 0x23;
      do {
        *(undefined1 *)((int)puVar7 + iVar12 + 0x74) = 0;
        *(undefined1 *)((int)puVar7 + iVar12 + 0x78) = 0;
        *(undefined1 *)((int)puVar7 + iVar12 + 0x7c) = 0;
        *(undefined1 *)((int)puVar7 + iVar12 + 0x80) = 0;
        *(undefined1 *)((int)puVar7 + iVar12 + 0x84) = 0;
        puVar10[6] = 0;
        *(undefined1 *)((int)puVar7 + iVar12 + 0x88) = 0;
        puVar10 = puVar10 + 1;
        *puVar10 = uVar3;
        *(undefined1 *)((int)puVar7 + iVar12 + 0x8c) = 0;
        iVar12 = iVar12 + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      RtlInitializeCriticalSection(puVar7 + 1);
      *puVar7 = &lbl_821C2258;
    }
  }
  return;
}

