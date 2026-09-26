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
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_82CEAE80();
extern int fn_82CEAEA8();
extern int fn_82CEB1A8();
extern int fn_82CFD5A8();
extern int fn_82CFD5C0();
extern int fn_82CFFC68();
extern int fn_82CFFD68();
extern int fn_82CFFEB8();
extern int fn_82CFFEC8();
extern int fn_82E09C88();


void fn_82E0A830(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar8;
  int iVar9;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar10;
  undefined8 uVar7;
  int *piVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [96];
  
  lVar13 = 0;
  iVar8 = fn_82CEAE80(param_3);
  if (0 < iVar8) {
    do {
      iVar8 = fn_82CEAEA8(param_3,lVar13);
      if (((*(ushort *)(iVar8 + 0x10) >> 10 & 1) == 0) &&
         (uVar12 = (uint)*(byte *)(iVar8 + 0xc), uVar12 - 0x16 < 8)) {
        if (uVar12 == 0x16) {
LAB_82e0a928:
          lVar2 = param_2;
          lVar3 = param_4;
          if (*(char *)(iVar8 + 0xd) == '\x19') {
            while (-1 < lVar3 + -1) {
              fn_82CFFC68(auStack_78,lVar2,iVar8);
              puVar10 = (undefined4 *)fn_82CFFEB8(auStack_78,0);
              uVar1 = puVar10[1];
              uVar4 = fn_82CFD5A8(iVar8);
              fn_82E0A830(param_1,*puVar10,uVar4,uVar1);
              lVar6 = fn_82CEB1A8(param_3);
              lVar2 = lVar6 + lVar2;
              lVar3 = lVar3 + -1;
            }
          }
          else if (*(char *)(iVar8 + 0xd) == '\x1d') {
            while (-1 < lVar3 + -1) {
              fn_82CFFC68(auStack_70,lVar2,iVar8);
              puVar10 = (undefined4 *)fn_82CFFEB8(auStack_70,0);
              fn_82E09C88(param_1,*puVar10,puVar10[1]);
              lVar6 = fn_82CEB1A8(param_3);
              lVar2 = lVar6 + lVar2;
              lVar3 = lVar3 + -1;
            }
          }
        }
        else if ((uVar12 != 0x17) && (uVar12 != 0x18)) {
          if (uVar12 == 0x19) {
            iVar9 = fn_82CFD5C0(iVar8);
            lVar2 = param_2;
            lVar3 = param_4;
            if (iVar9 == 0) {
              uVar4 = 1;
            }
            else {
              uVar4 = fn_82CFD5C0(iVar8);
            }
            while (-1 < lVar3 + -1) {
              fn_82CFFC68(auStack_68,lVar2,iVar8);
              uVar5 = fn_82CFD5A8(iVar8);
              uVar7 = fn_82CFFD68(auStack_68);
              fn_82E0A830(param_1,uVar7,uVar5,uVar4);
              lVar6 = fn_82CEB1A8(param_3);
              lVar2 = lVar6 + lVar2;
              lVar3 = lVar3 + -1;
            }
          }
          else {
            if (uVar12 == 0x1a) goto LAB_82e0a928;
            lVar2 = param_2;
            lVar3 = param_4;
            if (uVar12 == 0x1b) {
              while (-1 < lVar3 + -1) {
                fn_82CFFC68(auStack_60,lVar2,iVar8);
                piVar11 = (int *)fn_82CFFEC8(auStack_60,0);
                if ((piVar11[1] != 0) && (*piVar11 != 0)) {
                  fn_82E0A830(param_1,piVar11[1],*piVar11,piVar11[2]);
                }
                lVar6 = fn_82CEB1A8(param_3);
                lVar2 = lVar6 + lVar2;
                lVar3 = lVar3 + -1;
              }
            }
            else if (uVar12 != 0x1c) {
              iVar9 = fn_82CFD5C0(iVar8);
              if (iVar9 == 0) {
                uVar4 = 1;
              }
              else {
                uVar4 = fn_82CFD5C0(iVar8);
              }
              while (-1 < lVar3 + -1) {
                fn_82CFFC68(auStack_80,lVar2,iVar8);
                uVar5 = fn_82CFFD68(auStack_80);
                fn_82E09C88(param_1,uVar5,uVar4);
                lVar6 = fn_82CEB1A8(param_3);
                lVar2 = lVar6 + lVar2;
                lVar3 = lVar3 + -1;
              }
            }
          }
        }
      }
      lVar13 = lVar13 + 1;
      iVar8 = fn_82CEAE80(param_3);
    } while ((int)lVar13 < iVar8);
  }
  return;
}

