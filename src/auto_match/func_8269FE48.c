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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_82683270();
extern int fn_826944C8();
extern int fn_82695DA0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696610();
extern int fn_82696B20();
extern int fn_8269EA50();
extern int fn_8269EAF0();
extern int fn_8269F500();
extern int fn_826A7398();
extern int fn_826A76D0();
extern int fn_826A8710();
extern int fn_826A9138();
extern int fn_826AEA50();
extern int fn_8270ED80();
extern unsigned int iStack_68;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_e4;
extern unsigned int iStack_e8;
extern unsigned int iStack_f4;
extern unsigned int uStack_78;


bool fn_8269FE48(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar4;
  int iVar5;
  char cVar7;
  longlong lVar3;
  undefined4 *puVar6;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  bool bVar13;
  undefined4 *apuStack_100 [2];
  int *piStack_f8;
  int iStack_f4;
  byte bStack_f0;
  int iStack_e8;
  int iStack_e4;
  byte bStack_e0;
  int iStack_d8;
  int iStack_d4;
  byte bStack_d0;
  int iStack_c8;
  int iStack_c4;
  byte bStack_c0;
  int iStack_b8;
  int iStack_b4;
  byte bStack_b0;
  char acStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  uint uStack_78;
  undefined1 auStack_70 [8];
  int iStack_68;
  
  if (param_1 != (int *)0x0) {
    param_1[1] = param_1[1] + 1;
  }
  iVar4 = (**(code **)(*param_1 + 0x5c))(param_1);
  iVar1 = *(int *)(iVar4 + 0x74);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  if (((*param_2 == 0x40) || (*param_2 == 0x80)) && (iVar5 = fn_826A7398(iVar4), iVar5 != 0)) {
    fn_8270ED80(*(undefined4 *)(iVar5 + 0x9e0),*(undefined2 *)(param_2 + 2),
                    *(undefined1 *)((int)param_2 + 10),param_2[1]);
  }
  acStack_a0[0] = '\0';
  lVar10 = 0;
  cVar7 = fn_8269EA50(param_1,param_2);
  if ((cVar7 != '\0') && (*(char *)(param_2 + 3) == '\0')) {
    fn_8269EAF0(param_1,iVar4,param_2);
    lVar10 = 1;
  }
  piVar8 = (int *)(iVar4 + 0x78);
  fn_826A76D0(apuStack_100,param_2,piVar8);
  if (apuStack_100[0][4] != 0) {
    piVar11 = param_1 + 0x1a;
    cVar7 = (**(code **)(param_1[0x1a] + 0x2c))(piVar11,piVar8,apuStack_100,acStack_a0);
    if (cVar7 != '\0') {
      if (acStack_a0[0] == '\t') {
        auStack_90[0] = 0;
        fn_82696610(acStack_a0,iVar4,piVar11,auStack_90);
        fn_82695FA0(acStack_a0,auStack_90);
        fn_82696330(auStack_90);
      }
      if (acStack_a0[0] != '\x01') {
        if (*(char *)(*piVar8 + 0x2a4) == '\x01') {
          lVar12 = 0;
          bVar13 = true;
          if (*(char *)(param_2 + 3) != '\0') {
            fn_82696B20(&piStack_f8,acStack_a0,iVar4);
            piVar8 = (int *)0x0;
            if (piStack_f8 != (int *)0x0) {
              lVar3 = (**(code **)(*piStack_f8 + 0x40))(piStack_f8);
              bVar13 = lVar3 - 2U < 0xffffffff7ffffffe;
              piVar8 = piStack_f8;
            }
            if (((bStack_f0 & 2) == 0) && (piVar8 != (int *)0x0)) {
              fn_826824B0(piVar8);
            }
            piStack_f8 = (int *)0x0;
            if (((bStack_f0 & 1) == 0) && (iStack_f4 != 0)) {
              fn_826824B0();
            }
            iStack_f4 = 0;
          }
          if (bVar13) {
            lVar10 = lVar10 + 1;
            cVar7 = fn_826A8710(iVar4);
            if (cVar7 != '\0') {
              iVar5 = param_1[0x20];
              if (iVar5 == 0) {
                iVar5 = fn_8269F500(param_1);
              }
              uVar2 = **(undefined4 **)(iVar5 + 0xc);
              puVar6 = (undefined4 *)fn_82696B20(&iStack_e8,acStack_a0,iVar4);
              fn_826A9138(iVar4,0xffffffff82006b18,*apuStack_100[0],*puVar6,uVar2);
              if (((bStack_e0 & 2) == 0) && (iStack_e8 != 0)) {
                fn_826824B0();
              }
              iStack_e8 = 0;
              if (((bStack_e0 & 1) == 0) && (iStack_e4 != 0)) {
                fn_826824B0();
              }
              iStack_e4 = 0;
            }
            iVar5 = *param_2;
            if ((((iVar5 == 0x2000) || (iVar5 == 0x4000)) || (iVar5 == 0x8000)) ||
               (iVar5 == 0x10000)) {
              auStack_80[0] = 4;
              uStack_78 = (uint)*(byte *)(param_2 + 3);
              uVar9 = *(int *)(iVar4 + 8) + 0x10;
              *(uint *)(iVar4 + 8) = uVar9;
              if (*(uint *)(iVar4 + 0x10) <= uVar9) {
                fn_826826A8((int *)(iVar4 + 8));
              }
              iVar5 = *(int *)(iVar4 + 8);
              if (iVar5 != 0) {
                fn_82695DA0(iVar5,auStack_80);
              }
              fn_82696330(auStack_80);
              lVar12 = 1;
            }
            if ((-1 < *(char *)((int)param_2 + 0xb)) || (lVar12 != 0)) {
              iStack_68 = (int)*(char *)((int)param_2 + 0xb);
              auStack_70[0] = 4;
              uVar9 = *(int *)(iVar4 + 8) + 0x10;
              *(uint *)(iVar4 + 8) = uVar9;
              if (*(uint *)(iVar4 + 0x10) <= uVar9) {
                fn_826826A8((int *)(iVar4 + 8));
              }
              iVar5 = *(int *)(iVar4 + 8);
              if (iVar5 != 0) {
                fn_82695DA0(iVar5,auStack_70);
              }
              fn_82696330(auStack_70);
              lVar12 = lVar12 + 1;
            }
            fn_826AEA50(acStack_a0,0,piVar11,iVar4,lVar12,
                              (longlong)(*(int *)(iVar4 + 8) - *(int *)(iVar4 + 0xc) >> 4) +
                              ((ulonglong)*(uint *)(iVar4 + 0x1c) & 0x7ffffff) * 0x20 + -0x20,
                              *apuStack_100[0]);
            if (lVar12 != 0) {
              fn_82683270(iVar4 + 8,lVar12);
            }
            cVar7 = fn_826A8710(iVar4);
            if (cVar7 != '\0') {
              iVar5 = param_1[0x20];
              if (iVar5 == 0) {
                iVar5 = fn_8269F500(param_1);
              }
              uVar2 = **(undefined4 **)(iVar5 + 0xc);
              puVar6 = (undefined4 *)fn_82696B20(&iStack_d8,acStack_a0,iVar4);
              fn_826A9138(iVar4,0xffffffff82006ae8,*apuStack_100[0],*puVar6,uVar2);
              if (((bStack_d0 & 2) == 0) && (iStack_d8 != 0)) {
                fn_826824B0();
              }
              iStack_d8 = 0;
              if (((bStack_d0 & 1) == 0) && (iStack_d4 != 0)) {
                fn_826824B0();
              }
              iStack_d4 = 0;
            }
          }
        }
        else if (*(char *)(param_2 + 3) == '\0') {
          lVar10 = lVar10 + 1;
          cVar7 = fn_826A8710(iVar4);
          if (cVar7 != '\0') {
            iVar5 = param_1[0x20];
            if (iVar5 == 0) {
              iVar5 = fn_8269F500(param_1);
            }
            uVar2 = **(undefined4 **)(iVar5 + 0xc);
            puVar6 = (undefined4 *)fn_82696B20(&iStack_c8,acStack_a0,iVar4);
            fn_826A9138(iVar4,0xffffffff82006b18,*apuStack_100[0],*puVar6,uVar2);
            if (((bStack_c0 & 2) == 0) && (iStack_c8 != 0)) {
              fn_826824B0();
            }
            iStack_c8 = 0;
            if (((bStack_c0 & 1) == 0) && (iStack_c4 != 0)) {
              fn_826824B0();
            }
            iStack_c4 = 0;
          }
          fn_826AEA50(acStack_a0,0,piVar11,iVar4,0,
                            (longlong)(*(int *)(iVar4 + 8) - *(int *)(iVar4 + 0xc) >> 4) +
                            ((ulonglong)*(uint *)(iVar4 + 0x1c) & 0x7ffffff) * 0x20 + -0x1f,0);
          cVar7 = fn_826A8710(iVar4);
          if (cVar7 != '\0') {
            iVar5 = param_1[0x20];
            if (iVar5 == 0) {
              iVar5 = fn_8269F500(param_1);
            }
            uVar2 = **(undefined4 **)(iVar5 + 0xc);
            puVar6 = (undefined4 *)fn_82696B20(&iStack_b8,acStack_a0,iVar4);
            fn_826A9138(iVar4,0xffffffff82006ae8,*apuStack_100[0],*puVar6,uVar2);
            if (((bStack_b0 & 2) == 0) && (iStack_b8 != 0)) {
              fn_826824B0();
            }
            iStack_b8 = 0;
            if (((bStack_b0 & 1) == 0) && (iStack_b4 != 0)) {
              fn_826824B0();
            }
            iStack_b4 = 0;
          }
        }
      }
    }
  }
  uVar9 = apuStack_100[0][2];
  apuStack_100[0][2] = (int)((ulonglong)uVar9 - 1);
  if ((ulonglong)uVar9 - 1 == 0) {
    fn_826944C8(apuStack_100[0]);
  }
  fn_82696330(acStack_a0);
  if (iVar1 != 0) {
    fn_8267C498(iVar1);
  }
  fn_8267C498(param_1);
  return lVar10 != 0;
}

