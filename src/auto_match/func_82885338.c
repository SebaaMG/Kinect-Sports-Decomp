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
extern unsigned int *auStack_480;
extern unsigned int *auStack_4b0;
extern unsigned int *auStack_4f0;
extern int fn_825089A0();
extern int fn_8265CA20();
extern int fn_8287D588();
extern int fn_8287FD98();
extern int fn_828804C0();
extern int fn_828821A0();
extern int fn_82882218();
extern int fn_828824C0();
extern int fn_828825A0();
extern int fn_82883118();
extern int fn_82884B90();
extern int fn_828865A0();
extern int fn_82886C90();
extern int fn_82887CC8();
extern int fn_828886F0();
extern int fn_828E9D28();
extern int fn_828E9D40();
extern unsigned int iStack_498;
extern unsigned int iStack_4cc;
extern unsigned int iStack_4dc;
extern unsigned int uStack_490;
extern unsigned int uStack_494;
extern unsigned int uStack_49c;
extern unsigned int uStack_4c0;
extern unsigned int uStack_4c4;
extern unsigned int uStack_4c8;
extern unsigned int uStack_4d0;
extern unsigned int uStack_4d4;
extern unsigned int uStack_4d8;


void fn_82885338(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int *piVar7;
  ulonglong uVar5;
  char cVar10;
  char cVar11;
  undefined8 uVar6;
  uint uVar8;
  int iVar9;
  char cVar12;
  uint uVar13;
  undefined4 auStack_4f0 [4];
  undefined1 *puStack_4e0;
  int iStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  int iStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined1 uStack_4c0;
  undefined1 auStack_4b0 [16];
  undefined1 *puStack_4a0;
  undefined4 uStack_49c;
  int iStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined1 auStack_480 [1152];
  
  auStack_4f0[0] = (undefined4)param_1;
  piVar7 = (int *)fn_82883118(0xffffffff83212a00,auStack_4f0);
  iVar2 = *piVar7;
  piVar7 = (int *)fn_825089A0();
  uVar5 = (**(code **)(*piVar7 + 0xc))();
  fn_828804C0(iVar2,uVar5);
  uVar8 = 0;
  cVar10 = fn_828821A0(param_1);
  cVar11 = fn_82882218(param_1);
  if ((cVar10 == '\0') && (cVar11 == '\0')) {
    uVar6 = fn_8287FD98();
    uVar8 = fn_8287D588(uVar6,param_1);
  }
  uVar13 = 0;
  do {
    if (((cVar10 == '\0') && (cVar11 == '\0')) && (uVar8 <= uVar13)) break;
    bVar4 = false;
    if ((*(int *)(iVar2 + 0x70) != 0) && (*(ulonglong *)(*(int *)(iVar2 + 0x70) + 0x10) <= uVar5)) {
      bVar4 = true;
    }
    if (!bVar4) break;
    puStack_4a0 = auStack_480;
    iStack_498 = 0;
    uStack_494 = 0;
    uStack_490 = 0;
    uStack_49c = 0x400;
    fn_828E9D28(auStack_4b0,auStack_480,0x400);
    bVar1 = *(byte *)(iVar2 + 5);
    fn_828E9D40(0xffffffff831599fc);
    fn_828E9D40(0xffffffff83159a24);
    puStack_4e0 = auStack_4b0;
    iStack_4dc = 0;
    uStack_4d8 = 0;
    uStack_4d4 = 0;
    uStack_4d0 = 0;
    iStack_4cc = 0;
    uStack_4c8 = 0;
    uStack_4c4 = 0;
    uStack_4c0 = 0;
    if ((uint)LZCOUNT((uint)bVar1) >> 5 != 0) {
      fn_828824C0(iVar2);
    }
    fn_828886F0();
    piVar7 = *(int **)(iVar2 + 0x70);
    if (*(int **)(iVar2 + 0x70) != (int *)0x0) {
LAB_828854b8:
      if (piVar7 != (int *)0x0) {
        do {
          (**(code **)(*piVar7 + 4))(piVar7);
          iVar9 = fn_82886C90();
          if ((iVar9 == 0) || (*(char *)(piVar7 + 9) != '\0')) {
LAB_82885520:
            cVar12 = (**(code **)(*piVar7 + 0x40))(piVar7);
            if (cVar12 != '\0') goto LAB_82885550;
          }
          else {
            iVar9 = piVar7[10];
            uVar6 = (**(code **)(*piVar7 + 4))(piVar7);
            cVar12 = fn_82887CC8(*(undefined4 *)(iVar2 + 0xb4),uVar6,iVar9);
            if (cVar12 != '\0') goto LAB_82885520;
          }
          piVar7 = (int *)piVar7[0xc];
          if (piVar7 == (int *)0x0) break;
        } while( true );
      }
    }
LAB_82885584:
    if (iStack_4cc != 0) {
      *(ulonglong *)(iStack_4cc + 0x40) = uVar5;
      piVar7 = (int *)fn_82883118(iVar2 + 0x88,&uStack_4d0);
      *piVar7 = iStack_4cc;
      iStack_4cc = 0;
      *(int *)(iVar2 + 0xb0) = *(int *)(iVar2 + 0xb0) + 1;
    }
    if (iStack_4dc == 0) {
      bVar4 = false;
    }
    else {
      cVar12 = fn_82884B90(iVar2,param_1,uVar5,&puStack_4e0);
      uVar13 = (cVar12 != '\0') + uVar13;
    }
    fn_828886F0();
    if (iStack_498 != 0) {
      fn_8265CA20();
    }
    iStack_498 = 0;
    uStack_494 = 0;
    uStack_490 = 0;
  } while (bVar4);
  if (uVar13 != 0) {
    piVar7 = *(int **)(iVar2 + 0x70);
    while (piVar3 = piVar7, piVar3 != (int *)0x0) {
      piVar7 = (int *)piVar3[0xc];
      cVar10 = fn_828865A0(piVar3);
      if ((cVar10 == '\0') && (cVar10 = (**(code **)(*piVar3 + 0x44))(piVar3), cVar10 != '\0')) {
        (**(code **)*piVar3)(piVar3,1);
      }
    }
  }
  return;
LAB_82885550:
  piVar3 = (int *)piVar7[0xc];
  cVar12 = fn_828825A0(iVar2,param_1,uVar5,piVar7,&puStack_4e0);
  if ((cVar12 == '\0') || (piVar7 = piVar3, piVar3 == (int *)0x0)) goto LAB_82885584;
  goto LAB_828854b8;
}

