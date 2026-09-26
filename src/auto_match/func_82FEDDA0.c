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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82FECAA8();
extern int fn_82FEDCA8();
extern int fn_8301BB18();
extern int fn_8301BB58();
extern int fn_8301BBB0();
extern int fn_8301BD18();
extern int fn_8301BE38();
extern int fn_8301D458();
extern unsigned int lbl_831BC794;
extern unsigned int lbl_831BC798;
extern unsigned int lbl_831BC79C;
extern unsigned int lbl_831BC7A8;
extern unsigned int uStack_70;


void fn_82FEDDA0(void)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar5;
  ulonglong uVar4;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined8 uStack_70;
  
LAB_82feddb4:
  uVar8 = 0;
  uVar1 = lbl_831BC794;
LAB_82feddbc:
  uVar10 = (ulonglong)uVar1;
  uStack_70 = CONCAT44(uVar1,(int)uVar8);
LAB_82feddc4:
  do {
    if (uVar10 == 0) {
      return;
    }
    bVar3 = false;
    puVar11 = (uint *)uVar10;
    uVar1 = puVar11[3];
    uVar4 = uStack_70 & 0xffffffff;
    uVar7 = uStack_70 >> 0x20;
    do {
      puVar9 = (uint *)uVar7;
      if (uVar1 != puVar9[3]) break;
      if ((puVar9[4] == 0) &&
         (((puVar9[2] == 0 || (puVar9[2] == 1)) && (*(int *)(puVar9[5] + 0x10) != 2)))) {
        iVar5 = fn_82FEDCA8(puVar9[1],puVar9[5],uVar7 + 0x10);
        if (iVar5 == 2) {
          uVar1 = *puVar9;
          if (uVar7 != lbl_831BC794) {
            *(uint *)uVar4 = *puVar9;
            uVar1 = lbl_831BC794;
          }
          lbl_831BC794 = uVar1;
          if (uVar7 == ZEXT48(lbl_831BC798)) {
            lbl_831BC798 = (uint *)uVar4;
          }
          *puVar9 = (uint)lbl_831BC79C;
          lbl_831BC7A8 = lbl_831BC7A8 + -1;
          lbl_831BC79C = puVar9;
          goto LAB_82feddb4;
        }
        if (*(int *)(uVar7 + 0x10) == 0) {
          bVar3 = true;
          break;
        }
      }
      uVar4 = uVar7;
      uVar7 = (ulonglong)*puVar9;
    } while ((ulonglong)*puVar9 != 0);
    if (bVar3) {
      do {
        uVar8 = uVar10;
        uVar2 = *(uint *)uVar8;
        uVar10 = (ulonglong)uVar2;
        uStack_70 = CONCAT44(uVar2,(uint *)uVar8);
        if (uVar10 == 0) {
          return;
        }
      } while (uVar1 == *(uint *)(uVar2 + 0xc));
      goto LAB_82feddc4;
    }
    lVar6 = uVar10 + 4;
    uVar7 = 1;
    uVar4 = 0;
    puVar9 = (uint *)uVar8;
    if ((puVar11[5] == 0) && (uVar4 = fn_82FECAA8(lVar6), (uVar4 & 0xffffffff) == 0)) {
      uVar1 = *puVar11;
      uVar2 = uVar1;
      if (uVar10 != lbl_831BC794) {
        *puVar9 = uVar1;
        uVar2 = lbl_831BC794;
      }
      lbl_831BC794 = uVar2;
      if (uVar10 == ZEXT48(lbl_831BC798)) {
        lbl_831BC798 = puVar9;
      }
      uVar7 = 0;
      uStack_70 = CONCAT44(uVar1,puVar9);
      *puVar11 = (uint)lbl_831BC79C;
      uVar10 = (ulonglong)uVar1;
      lbl_831BC7A8 = lbl_831BC7A8 + -1;
      lbl_831BC79C = puVar11;
    }
    if ((uVar7 & 0xff) != 0) {
      iVar5 = (int)lVar6;
      uVar1 = *(uint *)(iVar5 + 4);
      puVar11 = (uint *)uVar10;
      if (*(int *)(iVar5 + 0xc) == 0) {
        if ((uVar1 != 2) || ((uVar4 & 0xffffffff) == 0)) break;
        fn_8301BB18(uVar4 + 8);
        uVar1 = *puVar11;
        uVar2 = uVar1;
        if (uVar10 != lbl_831BC794) {
          *puVar9 = uVar1;
          uVar2 = lbl_831BC794;
        }
        lbl_831BC794 = uVar2;
        if (uVar10 == ZEXT48(lbl_831BC798)) {
          lbl_831BC798 = puVar9;
        }
        uStack_70 = CONCAT44(uVar1,puVar9);
        *puVar11 = (uint)lbl_831BC79C;
        lbl_831BC7A8 = lbl_831BC7A8 + -1;
        uVar10 = (ulonglong)uVar1;
        lbl_831BC79C = puVar11;
      }
      else {
        lVar6 = (ulonglong)*(uint *)(iVar5 + 0x10) + 8;
        if (uVar1 < 7) {
          if (uVar1 == 1) {
            fn_8301BE38(lVar6);
LAB_82fedf80:
            fn_8301BB58(lVar6);
          }
          else if (uVar1 == 2) {
            fn_8301BB18(lVar6);
          }
          else {
            if (uVar1 == 3) goto LAB_82fedf80;
            if (uVar1 == 4) {
              fn_8301BBB0(lVar6);
            }
            else if (uVar1 == 5) {
              fn_8301D458(lVar6);
            }
            else if (uVar1 == 0) {
              fn_8301BE38(lVar6);
            }
            else {
              fn_8301BD18(lVar6);
            }
          }
        }
        uVar1 = *puVar11;
        uVar2 = uVar1;
        if (uVar10 != lbl_831BC794) {
          *puVar9 = uVar1;
          uVar2 = lbl_831BC794;
        }
        lbl_831BC794 = uVar2;
        if (uVar10 == ZEXT48(lbl_831BC798)) {
          lbl_831BC798 = puVar9;
        }
        uStack_70 = CONCAT44(uVar1,puVar9);
        *puVar11 = (uint)lbl_831BC79C;
        lbl_831BC7A8 = lbl_831BC7A8 + -1;
        uVar10 = (ulonglong)uVar1;
        lbl_831BC79C = puVar11;
      }
    }
  } while( true );
  uVar1 = *puVar11;
  uVar8 = uVar10;
  goto LAB_82feddbc;
}

