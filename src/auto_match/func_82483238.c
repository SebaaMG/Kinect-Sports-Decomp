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
extern int fn_8225C590();
extern int fn_8225DA18();
extern int fn_82270180();
extern int fn_822750C8();
extern int fn_822A6998();
extern int fn_823AB478();
extern int fn_82512508();
extern int fn_828B8F40();
extern int fn_828EA648();
extern int fn_82A1BFB0();
extern int fn_82A1C0E0();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;
extern unsigned int lbl_83265A28;


void fn_82483238(int param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 uVar3;
  longlong lVar4;
  char cVar9;
  ulonglong uVar5;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int aiStack_80 [2];
  longlong alStack_78 [15];
  
  iVar11 = *(int *)(param_1 + 0x48);
  iVar6 = param_2;
  if (*(int *)(iVar11 + 0x18b8) == 1) {
    uVar10 = 0;
    iVar12 = 0;
    lVar15 = 4;
    do {
      if (*(int *)(iVar12 + iVar11 + 0x838) != 4) {
        uVar10 = uVar10 + 1;
      }
      iVar12 = iVar12 + 0x420;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    if ((uVar10 < 3) && (param_2 == 1)) {
      iVar6 = 2;
    }
  }
  iVar11 = iVar6 * 0x420 + iVar11;
  if ((*(int *)(iVar11 + 0x838) == 0) || (*(int *)(iVar11 + 0x838) == 1)) {
    uVar2 = fn_8225C590();
    iVar6 = fn_8225DA18(uVar2,*(undefined4 *)(iVar11 + 0x83c));
    if (iVar6 == 0) goto LAB_8248343c;
    plVar7 = (longlong *)fn_828B8F40();
    lVar15 = *plVar7;
  }
  else {
    lVar15 = *(longlong *)(iVar11 + 0xc30);
  }
  if ((lVar15 != 0) && (uVar2 = fn_822750C8(), lbl_832659CD != '\0')) {
    iVar6 = fn_8225C590();
    bVar1 = true;
    uVar10 = *(int *)(iVar6 + 0x14) - *(int *)(iVar6 + 0x10) >> 2;
    if (uVar10 != 0) {
      uVar13 = 0;
      if (uVar10 != 0) {
        iVar12 = 0;
        do {
          if (uVar13 < (uint)(*(int *)(iVar6 + 0x14) - *(int *)(iVar6 + 0x10) >> 2)) {
            iVar14 = *(int *)(*(int *)(iVar6 + 0x10) + iVar12);
          }
          else {
            iVar14 = 0;
          }
          if ((iVar14 != 0) && (*(char *)(iVar14 + 0xd8) == '\0')) {
            alStack_78[0] = lVar15;
            uVar8 = fn_828EA648(iVar14);
            if (uVar8 != 0) {
              if (uVar8 == 1) {
                aiStack_80[0] = 0;
                uVar3 = fn_823AB478(iVar14);
                fn_82A1BFB0(uVar3,alStack_78,1,aiStack_80,0);
                if (aiStack_80[0] == 0) goto LAB_824833c4;
              }
              else if (uVar8 < 3) {
LAB_824833c4:
                bVar1 = false;
              }
            }
          }
          uVar13 = uVar13 + 1;
          iVar12 = iVar12 + 4;
        } while (uVar13 < uVar10);
        if (!bVar1) goto LAB_8248343c;
      }
      iVar6 = lbl_83265988;
      if ((((lbl_83265988 != 0) && (lVar4 = fn_823AB478(lbl_83265988), -1 < lVar4)) &&
          ((int)lVar4 < 4)) &&
         (((*(int *)(iVar11 + 0x838) == 3 && (cVar9 = fn_82512508(iVar6), cVar9 != '\0')) &&
          (lVar15 = fn_82A1C0E0(uVar2,lVar4,lVar15), lVar15 == 0)))) {
        return;
      }
    }
  }
LAB_8248343c:
  uVar5 = fn_82270180(param_2);
  if ((uVar5 & 0xffffffff) != 0) {
    iVar11 = param_1 + 0x40;
    lVar15 = (longlong)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    lbl_83265A28 = (int)lVar15;
    if (lVar15 < 1) {
      iVar11 = param_1 + 0x44;
    }
    fn_822A6998(uVar5,iVar11);
  }
  return;
}

