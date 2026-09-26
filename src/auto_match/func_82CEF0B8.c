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
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern int fn_82CEAF18();
extern int fn_82CEAF20();
extern int fn_82CEB1A8();
extern int fn_82CEE7F8();
extern int fn_82CEE880();
extern int fn_82CEE8F8();
extern int fn_82CEEA70();
extern int fn_82CEEAF0();
extern int fn_82CEEE70();
extern int fn_82CEEF50();
extern int fn_82CFD5A8();
extern int fn_82CFD5C0();
extern int fn_82CFFA08();
extern int fn_82CFFC68();
extern int fn_82CFFD88();
extern int fn_82CFFD98();
extern int fn_82CFFEB8();
extern int fn_82CFFEC8();
extern unsigned int uStack_80;


void fn_82CEF0B8(int param_1,undefined8 param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar14;
  int *piVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [112];
  
  if (param_1 != 0) {
    iVar10 = fn_82CEAF18(param_2);
    lVar16 = 0;
    if (0 < iVar10) {
      do {
        puVar11 = (uint *)fn_82CEAF20(param_2,lVar16);
        if ((*(ushort *)(puVar11 + 4) >> 9 & 1) == 0) {
          switch(*(undefined1 *)(puVar11 + 3)) {
          case 0x14:
            if (*(char *)((int)puVar11 + 0xd) == '\x19') {
              uVar2 = *puVar11;
              uVar3 = *(undefined4 *)((uint)*(ushort *)((int)puVar11 + 0x12) + param_1);
              uVar8 = fn_82CFD5A8(puVar11);
              fn_82CEE7F8(uVar2,uVar3,uVar8,param_3);
            }
            break;
          case 0x16:
            puVar12 = (undefined4 *)((uint)*(ushort *)((int)puVar11 + 0x12) + param_1);
            uVar2 = puVar12[2];
            if (((uVar2 & 0x80000000) == 0) || (*(char *)(param_3 + 4) != '\0')) {
              uVar3 = puVar12[1];
              uVar8 = fn_82CEEAF0(puVar11);
              if (-1 < (int)uVar8) {
                bVar6 = *(char *)((int)puVar11 + 0xd) != '\x14';
                if (bVar6) {
                  uVar9 = (ulonglong)*puVar11;
                }
                else {
                  (**(code **)(*param_3 + 0x18))(param_3,*puVar11);
                  uVar9 = 0xffffffff82132fc4;
                }
                fn_82CEE880(uVar9,*puVar12,uVar3,uVar2 & 0x3fffffff,uVar8,param_3);
                fn_82CEEF50(puVar11,*puVar12,uVar3,param_3);
                if (!bVar6) {
                  (**(code **)(*param_3 + 0x1c))(param_3);
                }
              }
            }
            break;
          case 0x19:
            uVar1 = *(ushort *)((int)puVar11 + 0x12);
            uVar2 = *puVar11;
            uVar8 = fn_82CFD5A8(puVar11);
            fn_82CEE8F8(uVar2,(uint)uVar1 + param_1,uVar8,param_3);
            break;
          case 0x1a:
            fn_82CFFC68(auStack_78,param_1,puVar11);
            puVar14 = (undefined8 *)fn_82CFFEB8(auStack_78,0);
            uStack_80 = *puVar14;
            uVar8 = fn_82CEEAF0(puVar11);
            if (-1 < (int)uVar8) {
              (**(code **)(*param_3 + 0x18))(param_3,*puVar11);
              uVar7 = (((U64)(uStack_80) >> 32) & 0xFFFFFFFF);
              uVar3 = (((U64)(uStack_80) >> 0) & 0xFFFFFFFF);
              fn_82CEE880(*puVar11,(((U64)(uStack_80) >> 0) & 0xFFFFFFFF),(((U64)(uStack_80) >> 32) & 0xFFFFFFFF),(((U64)(uStack_80) >> 32) & 0xFFFFFFFF),uVar8,param_3);
              fn_82CEEF50(puVar11,uVar3,uVar7,param_3);
              (**(code **)(*param_3 + 0x1c))(param_3);
            }
            break;
          case 0x1b:
            fn_82CFFC68(auStack_70,param_1,puVar11);
            piVar15 = (int *)fn_82CFFEC8(auStack_70,0);
            iVar13 = piVar15[2];
            iVar5 = *piVar15;
            iVar4 = piVar15[1];
            if (((0 < iVar13) && (iVar5 != 0)) && (iVar4 != 0)) {
              (**(code **)(*param_3 + 0x18))(param_3,*puVar11);
              uVar2 = *puVar11;
              uVar8 = fn_82CEB1A8(iVar5);
              fn_82CEE880(uVar2,iVar4,iVar13,iVar13,uVar8,param_3);
              fn_82CEEE70(*puVar11,iVar5,iVar4,iVar13,param_3);
              (**(code **)(*param_3 + 0x1c))(param_3);
            }
            break;
          case 0x1c:
            piVar15 = (int *)((uint)*(ushort *)((int)puVar11 + 0x12) + param_1);
            iVar13 = *piVar15;
            if ((iVar13 != 0) && (iVar5 = piVar15[1], iVar5 != 0)) {
              fn_82CEE7F8(*puVar11,iVar13,iVar5,param_3);
            }
            break;
          case 0x1d:
            fn_82CFFC68(auStack_90,param_1,puVar11);
            iVar13 = fn_82CFD5C0(puVar11);
            if (iVar13 < 2) {
              puVar12 = (undefined4 *)fn_82CFFD88(auStack_90,0);
              fn_82CEEA70(puVar11,*puVar12,param_3);
            }
            else {
              lVar17 = 0;
              if (0 < iVar13) {
                do {
                  puVar12 = (undefined4 *)fn_82CFFD88(auStack_90,lVar17);
                  fn_82CEEA70(puVar11,*puVar12,param_3);
                  lVar17 = lVar17 + 1;
                } while ((int)lVar17 < iVar13);
              }
            }
            break;
          case 0x21:
            fn_82CFFC68(auStack_88,param_1,puVar11);
            iVar13 = fn_82CFD5C0(puVar11);
            if (iVar13 < 2) {
              uVar2 = *puVar11;
              uVar8 = fn_82CFFD98(auStack_88,0);
              fn_82CFFA08(param_3,uVar2,uVar8);
            }
            else {
              lVar17 = 0;
              if (0 < iVar13) {
                do {
                  uVar2 = *puVar11;
                  uVar8 = fn_82CFFD98(auStack_88,lVar17);
                  fn_82CFFA08(param_3,uVar2,uVar8);
                  lVar17 = lVar17 + 1;
                } while ((int)lVar17 < iVar13);
              }
            }
          }
        }
        lVar16 = lVar16 + 1;
      } while ((int)lVar16 < iVar10);
    }
  }
  return;
}

