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
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern int fn_82248B90();
extern int fn_823AA970();
extern int fn_8240D928();
extern int fn_8265CA20();
extern int fn_8288B408();
extern int fn_8288B7E8();
extern int fn_8288FAF8();
extern int fn_82892F98();
extern int fn_82893F40();
extern int fn_82897780();
extern int fn_828977F0();
extern int fn_8289EEE0();
extern int fn_8289EF40();
extern int fn_828A12E8();
extern int fn_828ACD00();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B5650();
extern int fn_82A4AAA8();
extern int fn_82F622E0();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_828952F8(undefined8 param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar7;
  ulonglong uVar5;
  int iVar8;
  char cVar10;
  int *piVar9;
  undefined8 uVar6;
  undefined4 **ppuVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  
  iVar7 = fn_828A12E8(param_2);
  *(undefined1 *)(iVar7 + 0x90) = 1;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  iVar7 = fn_828A12E8(param_2);
  puStack_90 = (undefined4 *)**(undefined4 **)(iVar7 + 8);
  do {
    while( true ) {
      puVar13 = puStack_90;
      iVar7 = fn_828A12E8(param_2);
      if (puVar13 == *(undefined4 **)(iVar7 + 8)) {
        iVar7 = fn_828A12E8(param_2);
        uVar3 = uStack_5c;
        uVar12 = (ulonglong)uStack_60;
        *(undefined1 *)(iVar7 + 0x90) = 0;
        uVar5 = uVar12;
        if (uVar12 != uStack_5c) {
          do {
            iVar7 = fn_828A12E8(param_2);
            puVar13 = (undefined4 *)(*(undefined4 **)(iVar7 + 8))[1];
            cVar10 = *(char *)((int)puVar13 + 0x19);
            puVar4 = *(undefined4 **)(iVar7 + 8);
            while (cVar10 == '\0') {
              cVar10 = fn_828B5650(puVar13 + 3,uVar5);
              if (cVar10 == '\0') {
                puVar2 = (undefined4 *)*puVar13;
              }
              else {
                puVar2 = (undefined4 *)puVar13[2];
                puVar13 = puVar4;
              }
              puVar4 = puVar13;
              puVar13 = puVar2;
              cVar10 = *(char *)((int)puVar2 + 0x19);
            }
            puStack_90 = puVar4;
            if ((puVar4 == *(undefined4 **)(iVar7 + 8)) ||
               (cVar10 = fn_828B5650(uVar5,puVar4 + 3), cVar10 != '\0')) {
              puStack_8c = *(undefined4 **)(iVar7 + 8);
              ppuVar11 = &puStack_8c;
            }
            else {
              ppuVar11 = &puStack_90;
            }
            if ((*ppuVar11 != *(undefined4 **)(iVar7 + 8)) &&
               (puVar13 = (undefined4 *)(*ppuVar11)[5], puVar13 != (undefined4 *)0x0)) {
              if (*(code **)(puVar13[0xe] + 0x2c) == (code *)0x0) {
                (**(code **)*puVar13)(puVar13,1);
              }
              else {
                (**(code **)(puVar13[0xe] + 0x2c))();
              }
            }
            uVar5 = uVar5 + 8;
          } while ((uVar5 & 0xffffffff) != (ulonglong)uVar3);
        }
        if (uVar12 != 0) {
          uVar5 = uVar12;
          if (uVar12 != uVar3) {
            do {
              fn_828B55B0(uVar5);
              uVar5 = uVar5 + 8;
            } while ((uVar5 & 0xffffffff) != (ulonglong)uVar3);
          }
          fn_8265CA20(uVar12);
        }
        return;
      }
      piVar1 = (int *)puVar13[5];
      uVar5 = fn_8240D928(param_3);
      if (-1 < (int)(uint)uVar5) {
        if ((ulonglong)(uint)piVar1[0x13] <= (uVar5 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82F622E0(0xffffffff82023604);
        }
        uVar3 = (uint)((uVar5 & 0xffffffff) >> 3) & 0x1ffffffc;
        *(uint *)(uVar3 + piVar1[0xf]) =
             *(uint *)(uVar3 + piVar1[0xf]) & ~(1 << ((uint)uVar5 & 0x1f));
      }
      fn_82897780(piVar1[0xd],param_3);
      iVar7 = fn_823AA970(*(undefined4 *)(piVar1[0xd] + 0x38));
      iVar8 = fn_823AA970(param_3);
      if (iVar8 == iVar7) break;
LAB_82895578:
      fn_82248B90(&puStack_90);
    }
    if ((*(char *)(param_3 + 0x26) != '\0') || (cVar10 = fn_828ACD00(param_2), cVar10 != '\0')) {
      fn_828B5580(auStack_70,piVar1 + 5);
      fn_82892F98(&uStack_60,auStack_70);
      fn_828B55B0(auStack_70);
      goto LAB_82895578;
    }
    cVar10 = (**(code **)(*piVar1 + 0x14))(piVar1);
    if ((cVar10 == '\0') || (cVar10 = fn_8289EF40(param_2), cVar10 == '\0')) {
      fn_828B5580(auStack_78,piVar1 + 5);
      fn_82892F98(&uStack_60,auStack_78);
      fn_828B55B0(auStack_78);
      fn_82248B90(&puStack_90);
    }
    else {
      piVar9 = (int *)fn_8289EEE0(param_2);
      iVar7 = fn_823AA970();
      iVar8 = fn_823AA970(param_3);
      if (iVar7 == iVar8) {
        fn_828B5580(auStack_88,piVar1 + 5);
        fn_82892F98(&uStack_60,auStack_88);
        fn_828B55B0(auStack_88);
        fn_82248B90(&puStack_90);
      }
      else if (*(char *)((int)piVar9 + 0x26) == '\0') {
        uVar6 = (**(code **)(*piVar9 + 0xc))(piVar9);
        iVar7 = fn_82A4AAA8();
        if (iVar7 == 1) {
          fn_8288B408(piVar1[0xd],uVar6);
          fn_828977F0(piVar1[0xd],*(undefined4 *)(piVar1[0xd] + 0x38),0);
          fn_8288B7E8(piVar1);
          uVar6 = fn_828A12E8(param_2);
          fn_8288FAF8(uVar6,piVar1);
          fn_82248B90(&puStack_90);
        }
        else {
          fn_828B5580(auStack_80,piVar1 + 5);
          fn_82892F98(&uStack_60,auStack_80);
          fn_828B55B0(auStack_80);
          fn_82248B90(&puStack_90);
        }
      }
      else {
        fn_82893F40(piVar1,piVar9,1);
        fn_82248B90(&puStack_90);
      }
    }
  } while( true );
}

