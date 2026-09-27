extern unsigned int *puRam83264404;
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
extern unsigned int *auStack_410;
extern unsigned int *auStack_420;
extern unsigned int *auStack_440;
extern unsigned int *auStack_bc;
extern int fn_82FA5190();
extern int fn_82FB36E8();
extern int fn_82FEE0F8();
extern int fn_82FEE0F8();
extern int fn_82FEC1E0();
extern int fn_83013D28();
extern int fn_8301BB18();
extern int fn_8301BB58();
extern int fn_8301BB18();
extern int fn_8301BB58();
extern int fn_8301D0D8();
extern int fn_8301D698();
extern int fn_83021E70();
extern int fn_830224E8();
extern int fn_83024258();
extern int fn_830242F0();
extern int fn_83024470();
extern int fn_83024AD8();
extern int fn_830250C0();
extern int fn_83025288();
extern int iRam83264408;
extern unsigned int iStack_d0;
extern unsigned int lbl_8217D040;
extern unsigned int lbl_831BC770;
extern unsigned int lbl_831BC774;
extern unsigned int lbl_831BC794;
extern unsigned int lbl_831BC798;
extern unsigned int lbl_831BC79C;
extern unsigned int lbl_831BC7A8;
extern unsigned int lbl_83264308;
extern unsigned int lbl_832643D4;
extern unsigned int lbl_832643F4;
extern unsigned int lbl_832643F8;
extern unsigned int lbl_83264400;
extern unsigned int uStack_3f8;
extern unsigned int uStack_3fc;
extern unsigned int uStack_400;
extern unsigned int uStack_402;
extern unsigned int uStack_404;
extern unsigned int uStack_80;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82FEE7F8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar7;
  char cVar8;
  undefined4 uVar6;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puStack_458;
  undefined4 *puStack_454;
  undefined4 *puStack_450;
  undefined4 *puStack_44c;
  undefined1 auStack_440 [32];
  undefined1 auStack_420 [4];
  undefined4 *puStack_41c;
  undefined4 *puStack_418;
  undefined4 auStack_410 [3];
  undefined2 uStack_404;
  undefined2 uStack_402;
  undefined2 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  int iStack_d0;
  char cStack_c0;
  char cStack_be;
  char cStack_bd;
  undefined1 auStack_bc [60];
  undefined4 uStack_80;
  char cStack_7c;

  fn_83013D28(lbl_83264308);
  piVar11 = lbl_832643F4;
  puVar1 = lbl_83264400;
  puVar2 = (undefined4 *)0x0;
  while (puVar3 = puVar1, lbl_832643F4 = piVar11, puVar3 != (undefined4 *)0x0) {
    if (puVar3[4] == 2) {
      puVar1 = lbl_831BC794;
      puVar12 = (undefined4 *)0x0;
      puVar4 = lbl_831BC794;
      while (puVar4 != (undefined4 *)0x0) {
        if (puVar3[5] == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)(*(int *)(puVar3[5] + 0xfc) + 8);
        }
        if (puVar4[1] == iVar10) {
          puStack_458 = (undefined4 *)*puVar4;
          puVar5 = puStack_458;
          if (puVar4 != puVar1) {
            *puVar12 = puStack_458;
            puVar5 = lbl_831BC794;
          }
          lbl_831BC794 = puVar5;
          if (puVar4 == lbl_831BC798) {
            lbl_831BC798 = puVar12;
          }
          *puVar4 = lbl_831BC79C;
          lbl_831BC7A8 = lbl_831BC7A8 + -1;
          puVar1 = lbl_831BC794;
          lbl_831BC79C = puVar4;
          puStack_454 = puVar12;
          puVar4 = puStack_458;
        }
        else {
          puVar12 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      puVar1 = (undefined4 *)*puVar3;
      puVar12 = puVar1;
      if (puVar3 != lbl_83264400) {
        *puVar2 = puVar1;
        puVar12 = lbl_83264400;
      }
      lbl_83264400 = puVar12;
      if (puVar3 == puRam83264404) {
        puRam83264404 = puVar2;
      }
      iRam83264408 = iRam83264408 + -1;
      puStack_450 = puVar1;
      puStack_44c = puVar2;
      fn_8301D0D8(puVar3 + 2);
      fn_83021E70(puVar3 + 0x6b);
      puVar3[0x68] = &lbl_8217D040;
      fn_82FA5190(lbl_831BC770,puVar3);
      piVar11 = lbl_832643F4;
    }
    else {
      if (puVar3[5] == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(*(int *)(puVar3[5] + 0xfc) + 8);
      }
      iVar9 = 0x400;
      if ((*(byte *)(iVar10 + 0xda) & 2) != 0) {
        iVar9 = 8;
      }
      *(int *)(iVar10 + 0x134) = *(int *)(iVar10 + 0x134) - iVar9;
      piVar11 = lbl_832643F4;
      puVar1 = (undefined4 *)*puVar3;
      puVar2 = puVar3;
    }
  }
  puVar2 = lbl_831BC774;
  puVar1 = (undefined4 *)0x0;
  if (piVar11 != lbl_832643F8) {
    do {
      puVar2 = (undefined4 *)*piVar11;
      if (puVar2[2] != 0) {
        cVar7 = fn_83025288(puVar2 + 0x20);
        for (puVar3 = (undefined4 *)*puVar2; puVar3 != (undefined4 *)0x0;
            puVar3 = (undefined4 *)*puVar3) {
          uStack_3fc = 0;
          uStack_404 = 0x400;
          cStack_be = '\0';
          auStack_410[0] = 0;
          uStack_400 = 0;
          cStack_bd = '\0';
          iStack_d0 = 0x2b;
          cStack_7c = -(*(char *)(puVar2 + 100) >> 7);
          uStack_80 = 0;
          if (cStack_7c != '\0') {
            uStack_404 = 8;
          }
          puVar12 = puVar3 + 2;
          cStack_c0 = cVar7;
          cVar8 = fn_8301D698(puVar12,auStack_410);
          if (cVar8 == '\0') {
LAB_82feeb14:
            if ((iStack_d0 != 0x11) && (iStack_d0 != 2)) goto LAB_82feeb28;
LAB_82feeb4c:
            fn_8301BB18(puVar12);
          }
          else {
            uStack_402 = 0;
            uStack_400 = 0;
            uStack_3fc = 0;
            uStack_3f8 = 0xffffffff;
            puStack_41c = puVar3;
            puStack_418 = puVar2;
            if (cVar7 != '\0') {
              if (puVar3[5] == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = *(undefined4 *)(*(int *)(puVar3[5] + 0xfc) + 8);
              }
              fn_82FEC1E0(uVar6,auStack_440);
              fn_82FEE0F8(puStack_41c + 0x5e,auStack_440,auStack_bc);
              fn_8301BB58(puStack_41c + 2,auStack_440);
            }
            fn_82FEE0F8(auStack_420);
            if ((iStack_d0 != 0x2e) || (puStack_41c[7] != 0)) {
              fn_8301BB18(puStack_41c + 2);
              goto LAB_82feeb14;
            }
LAB_82feeb28:
            if (cStack_bd != '\0') goto LAB_82feeb4c;
            if (cStack_be != '\0') {
              fn_8301BB58(puVar12);
            }
          }
        }
      }
      if ((*(byte *)(puVar2 + 100) & 0x80) == 0) {
        fn_830250C0(puVar2 + 4,&puStack_458);
        fn_83024258(lbl_832643D4,&puStack_458);
        fn_83024AD8(puVar2 + 4);
      }
      piVar11 = piVar11 + 1;
      puVar2 = lbl_831BC774;
    } while (piVar11 != lbl_832643F8);
  }
  while (puVar3 = puVar2, puVar3 != (undefined4 *)0x0) {
    iVar10 = puVar3[2];
    fn_830250C0(iVar10,&puStack_458);
    fn_83024258(lbl_832643D4,&puStack_458);
    fn_83024AD8(iVar10);
    if (*(int *)(iVar10 + 0x74) == 1) {
      puVar2 = (undefined4 *)*puVar3;
      puVar1 = puVar3;
    }
    else {
      fn_83024470(iVar10);
      fn_830224E8(iVar10 + 0x80);
      fn_82FA5190(lbl_831BC770,iVar10);
      puStack_450 = (undefined4 *)*puVar3;
      puStack_44c = puVar1;
      fn_82FB36E8(0xffffffff831bc774,puVar3,puVar1);
      puVar2 = puStack_450;
      puVar1 = puStack_44c;
    }
  }
  fn_830242F0(lbl_832643D4,0xffffffff83264428);
  return;
}
