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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_82680AC8();
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826DF4E8();
extern int fn_826DF848();
extern int fn_826DFA28();
extern int fn_826E20C0();
extern int fn_826F4A18();
extern unsigned int lbl_831E7E64;


void fn_826E26C0(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int *piVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar9;
  char cVar15;
  uint uVar10;
  uint uVar11;
  undefined8 uVar8;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  int iVar21;
  char *pcVar22;
  longlong lVar23;
  uint auStack_60 [24];
  
  uVar9 = fn_826A6A38();
  cVar15 = fn_826DF4E8(param_1);
  uVar10 = fn_826A6A38(param_1);
  uVar11 = fn_826A6A38(param_1);
  uVar11 = uVar11 & 0xffff;
  uVar6 = uVar10 & 0xffff;
  fn_826A9280(param_1 + 0x14,0xffffffff8200d048,*param_2,uVar9 & 0xffff,cVar15,uVar6,uVar11);
  iVar12 = 0;
  piVar3 = *(int **)(*(int *)(param_1 + 0x10) + 0x28);
  if (piVar3 == (int *)0x0) {
    fn_826DFA28(param_1 + 0x14,0xffffffff8200cfd0);
  }
  else {
    uVar8 = fn_826DF848(param_1);
    if (*param_2 == 0x14) {
      iVar12 = fn_82680AC8(2,uVar6,uVar11,uVar8);
      if (cVar15 == '\x03') {
        uVar13 = fn_826DF4E8(param_1);
        uVar10 = uVar6 + 3 & 0xfffffffc;
        iVar16 = ((uVar13 & 0xff) + 1) * 3;
        iVar20 = uVar11 * uVar10 + iVar16;
        iVar14 = fn_8267B890(lbl_831E7E64,iVar20,0);
        iVar21 = *(int *)(param_1 + 0x314);
        if (iVar21 == 0) {
          iVar21 = param_1 + 0x28;
        }
        (**(code **)(*piVar3 + 8))(piVar3,iVar21,iVar14,iVar20);
        iVar21 = 0;
        if (uVar11 != 0) {
          iVar16 = iVar16 + iVar14;
          do {
            iVar20 = 0;
            if (uVar6 != 0) {
              puVar19 = (undefined1 *)
                        (*(int *)(iVar12 + 0x14) * iVar21 + *(int *)(iVar12 + 0x18) + -1);
              do {
                pbVar4 = (byte *)(iVar16 + iVar20);
                iVar20 = iVar20 + 1;
                puVar17 = (undefined1 *)((uint)*pbVar4 * 3 + iVar14);
                puVar19[1] = *puVar17;
                puVar19[2] = puVar17[1];
                puVar19 = puVar19 + 3;
                *puVar19 = puVar17[2];
              } while (iVar20 < (int)uVar6);
            }
            iVar21 = iVar21 + 1;
            iVar16 = iVar16 + uVar10;
          } while (iVar21 < (int)uVar11);
        }
      }
      else if (cVar15 == '\x04') {
        uVar10 = (uVar10 & 0xffff) * 2 + 3 & 0xfffffffc;
        lVar23 = (longlong)(int)uVar11 * (longlong)(int)uVar10;
        iVar14 = fn_8267B890(lbl_831E7E64,lVar23,0);
        iVar21 = *(int *)(param_1 + 0x314);
        if (iVar21 == 0) {
          iVar21 = param_1 + 0x28;
        }
        (**(code **)(*piVar3 + 8))(piVar3,iVar21,iVar14,lVar23);
        iVar16 = 0;
        iVar21 = iVar14;
        if (uVar11 != 0) {
          do {
            iVar20 = 0;
            if (uVar6 != 0) {
              puVar19 = (undefined1 *)(iVar21 + -1);
              pcVar22 = (char *)(*(int *)(iVar12 + 0x14) * iVar16 + *(int *)(iVar12 + 0x18) + -1);
              do {
                cVar15 = puVar19[1];
                iVar20 = iVar20 + 1;
                puVar19 = puVar19 + 2;
                uVar7 = CONCAT11(*puVar19,cVar15);
                pcVar22[1] = (byte)(uVar7 >> 7) & 0xf8;
                pcVar22[2] = (byte)(uVar7 >> 2) & 0xf8;
                pcVar22 = pcVar22 + 3;
                *pcVar22 = cVar15 << 3;
              } while (iVar20 < (int)uVar6);
            }
            iVar16 = iVar16 + 1;
            iVar21 = iVar21 + uVar10;
          } while (iVar16 < (int)uVar11);
        }
      }
      else {
        if (cVar15 != '\x05') goto LAB_826e2cb8;
        iVar16 = (uVar10 & 0xffff) * 4;
        lVar23 = (longlong)(int)uVar11 * (longlong)iVar16;
        iVar14 = fn_8267B890(lbl_831E7E64,lVar23,0);
        iVar21 = *(int *)(param_1 + 0x314);
        if (iVar21 == 0) {
          iVar21 = param_1 + 0x28;
        }
        (**(code **)(*piVar3 + 8))(piVar3,iVar21,iVar14,lVar23);
        iVar21 = 0;
        if (uVar11 != 0) {
          iVar20 = iVar14 + 3;
          do {
            iVar18 = 0;
            if (uVar6 != 0) {
              puVar17 = (undefined1 *)
                        (iVar21 * *(int *)(iVar12 + 0x14) + *(int *)(iVar12 + 0x18) + -1);
              puVar19 = (undefined1 *)(iVar20 + -6);
              do {
                puVar5 = puVar19 + 5;
                iVar18 = iVar18 + 1;
                uVar1 = puVar19[6];
                puVar19 = puVar19 + 4;
                uVar2 = *puVar19;
                puVar17[2] = *puVar5;
                puVar17[1] = uVar2;
                puVar17 = puVar17 + 3;
                *puVar17 = uVar1;
              } while (iVar18 < (int)uVar6);
            }
            iVar21 = iVar21 + 1;
            iVar20 = iVar20 + iVar16;
          } while (iVar21 < (int)uVar11);
        }
      }
    }
    else {
      iVar12 = fn_82680AC8(1,uVar6,uVar11,uVar8);
      if (cVar15 == '\x03') {
        uVar13 = fn_826DF4E8(param_1);
        uVar10 = uVar6 + 3 & 0xfffffffc;
        iVar16 = ((uVar13 & 0xff) + 1) * 4;
        iVar20 = uVar11 * uVar10 + iVar16;
        iVar14 = fn_8267B890(lbl_831E7E64,iVar20,0);
        iVar21 = *(int *)(param_1 + 0x314);
        if (iVar21 == 0) {
          iVar21 = param_1 + 0x28;
        }
        (**(code **)(*piVar3 + 8))(piVar3,iVar21,iVar14,iVar20);
        iVar21 = 0;
        if (uVar11 != 0) {
          iVar16 = iVar14 + iVar16;
          do {
            iVar20 = 0;
            if (uVar6 != 0) {
              puVar19 = (undefined1 *)
                        (iVar21 * *(int *)(iVar12 + 0x14) + *(int *)(iVar12 + 0x18) + -1);
              do {
                pbVar4 = (byte *)(iVar16 + iVar20);
                iVar20 = iVar20 + 1;
                puVar17 = (undefined1 *)((uint)*pbVar4 * 4 + iVar14);
                puVar19[1] = *puVar17;
                puVar19[2] = puVar17[1];
                puVar19[3] = puVar17[2];
                puVar19 = puVar19 + 4;
                *puVar19 = puVar17[3];
              } while (iVar20 < (int)uVar6);
            }
            iVar21 = iVar21 + 1;
            iVar16 = iVar16 + uVar10;
          } while (iVar21 < (int)uVar11);
        }
      }
      else {
        if (cVar15 != '\x04') {
          if (cVar15 == '\x05') {
            iVar21 = *(int *)(param_1 + 0x314);
            if (iVar21 == 0) {
              iVar21 = param_1 + 0x28;
            }
            (**(code **)(*piVar3 + 8))
                      (piVar3,iVar21,*(undefined4 *)(iVar12 + 0x18),
                       (longlong)(int)uVar6 * (longlong)(int)uVar11 * 4 & 0xfffffffc);
            iVar21 = 0;
            if (uVar11 != 0) {
              do {
                iVar14 = 0;
                if (uVar6 != 0) {
                  puVar19 = (undefined1 *)
                            (iVar21 * *(int *)(iVar12 + 0x14) + *(int *)(iVar12 + 0x18) + -1);
                  do {
                    iVar14 = iVar14 + 1;
                    uVar1 = puVar19[1];
                    puVar19[1] = puVar19[2];
                    puVar19[2] = puVar19[3];
                    puVar19[3] = puVar19[4];
                    puVar19 = puVar19 + 4;
                    *puVar19 = uVar1;
                  } while (iVar14 < (int)uVar6);
                }
                iVar21 = iVar21 + 1;
              } while (iVar21 < (int)uVar11);
            }
            fn_826E20C0(iVar12);
          }
          goto LAB_826e2cb8;
        }
        uVar10 = (uVar10 & 0xffff) * 2 + 3 & 0xfffffffc;
        lVar23 = (longlong)(int)uVar11 * (longlong)(int)uVar10;
        iVar14 = fn_8267B890(lbl_831E7E64,lVar23,0);
        iVar21 = *(int *)(param_1 + 0x314);
        if (iVar21 == 0) {
          iVar21 = param_1 + 0x28;
        }
        (**(code **)(*piVar3 + 8))(piVar3,iVar21,iVar14,lVar23);
        iVar16 = 0;
        iVar21 = iVar14;
        if (uVar11 != 0) {
          do {
            iVar20 = 0;
            if (uVar6 != 0) {
              puVar19 = (undefined1 *)(iVar21 + -1);
              pcVar22 = (char *)(*(int *)(iVar12 + 0x14) * iVar16 + *(int *)(iVar12 + 0x18) + -1);
              do {
                cVar15 = puVar19[1];
                puVar19 = puVar19 + 2;
                uVar1 = *puVar19;
                iVar20 = iVar20 + 1;
                pcVar22[1] = -1;
                uVar7 = CONCAT11(uVar1,cVar15);
                pcVar22[2] = (byte)(uVar7 >> 7) & 0xf8;
                pcVar22[3] = (byte)(uVar7 >> 2) & 0xf8;
                pcVar22 = pcVar22 + 4;
                *pcVar22 = cVar15 << 3;
              } while (iVar20 < (int)uVar6);
            }
            iVar16 = iVar16 + 1;
            iVar21 = iVar21 + uVar10;
          } while (iVar16 < (int)uVar11);
        }
      }
    }
    fn_8267BE38(iVar14);
  }
LAB_826e2cb8:
  auStack_60[0] = uVar9 & 0xffff;
  fn_826F4A18(param_1,auStack_60,iVar12);
  if (iVar12 != 0) {
    fn_8267C498(iVar12);
  }
  return;
}

