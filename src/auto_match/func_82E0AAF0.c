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
extern int fn_82CEAF18();
extern int fn_82CEAF20();
extern int fn_82CEB1A8();
extern int fn_82CFD5A8();
extern int fn_82CFD5C0();
extern int fn_82CFFC68();
extern int fn_82CFFD68();
extern int fn_82CFFEB8();
extern int fn_82CFFEC8();
extern int fn_82E09F28();


void fn_82E0AAF0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar7;
  int iVar8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar9;
  longlong lVar6;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [96];
  
  lVar11 = 0;
  iVar7 = fn_82CEAF18(param_3);
  if (0 < iVar7) {
    do {
      iVar7 = fn_82CEAF20(param_3,lVar11);
      if (((*(ushort *)(iVar7 + 0x10) >> 10 & 1) == 0) &&
         (uVar10 = (uint)*(byte *)(iVar7 + 0xc), uVar10 - 0x16 < 6)) {
        if (uVar10 == 0x16) {
LAB_82e0abf4:
          lVar1 = param_2;
          lVar2 = param_4;
          if (*(char *)(iVar7 + 0xd) == '\x19') {
            while (-1 < lVar2 + -1) {
              fn_82CFFC68(auStack_68,lVar1,iVar7);
              piVar9 = (int *)fn_82CFFEB8(auStack_68,0);
              if ((*piVar9 != 0) && (iVar8 = piVar9[1], iVar8 != 0)) {
                uVar5 = fn_82CFD5A8(iVar7);
                fn_82E0AAF0(param_1,*piVar9,uVar5,iVar8);
              }
              lVar6 = fn_82CEB1A8(param_3);
              lVar1 = lVar6 + lVar1;
              lVar2 = lVar2 + -1;
            }
          }
        }
        else if ((uVar10 != 0x17) && (uVar10 != 0x18)) {
          if (uVar10 == 0x19) {
            iVar8 = fn_82CFD5C0(iVar7);
            lVar1 = param_2;
            lVar2 = param_4;
            if (iVar8 == 0) {
              uVar5 = 1;
            }
            else {
              uVar5 = fn_82CFD5C0(iVar7);
            }
            while (-1 < lVar2 + -1) {
              fn_82CFFC68(auStack_70,lVar1,iVar7);
              uVar3 = fn_82CFD5A8(iVar7);
              uVar4 = fn_82CFFD68(auStack_70);
              fn_82E0AAF0(param_1,uVar4,uVar3,uVar5);
              lVar6 = fn_82CEB1A8(param_3);
              lVar1 = lVar6 + lVar1;
              lVar2 = lVar2 + -1;
            }
          }
          else {
            lVar1 = param_2;
            lVar2 = param_4;
            if (uVar10 == 0x1a) goto LAB_82e0abf4;
            while (-1 < lVar2 + -1) {
              fn_82CFFC68(auStack_60,lVar1,iVar7);
              piVar9 = (int *)fn_82CFFEC8(auStack_60,0);
              fn_82E09F28(param_1,*piVar9);
              if (((*piVar9 != 0) && (piVar9[1] != 0)) && (piVar9[2] != 0)) {
                ((int (*)())fn_82E0AAF0)(param_1);
              }
              lVar6 = fn_82CEB1A8(param_3);
              lVar1 = lVar6 + lVar1;
              lVar2 = lVar2 + -1;
            }
          }
        }
      }
      lVar11 = lVar11 + 1;
      iVar7 = fn_82CEAF18(param_3);
    } while ((int)lVar11 < iVar7);
  }
  return;
}

