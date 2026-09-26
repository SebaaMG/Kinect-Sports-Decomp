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
extern int fn_82AA8FD0();
extern int fn_82B68CA8();
extern int fn_82B68D38();
extern int fn_82B68DA8();
extern int fn_82B690E8();
extern unsigned int iStack00000034;


void fn_82AAB000(int param_1,int param_2,longlong param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iStack00000034;
  
  uVar4 = param_2 * (int)param_3;
  if (0 < (int)param_3) {
    iVar3 = 0;
    iStack00000034 = param_5;
    do {
      lVar9 = 0;
      lVar8 = 0;
      iVar6 = 0;
      if (0 < param_1) {
        lVar5 = ((ulonglong)uVar4 & 0x3fffffff) * 4;
        do {
          lVar16 = ((ulonglong)(iVar6 * uVar4 + iVar3) & 0x3fffffff) * 4 + param_4;
          lVar14 = lVar5 + lVar16;
          lVar12 = lVar5 + lVar14;
          lVar10 = lVar5 + lVar12;
          if (iVar6 != 0) {
            lVar9 = lVar16 + ((ulonglong)uVar4 & 0x1fffffff) * -8;
            lVar8 = lVar5 + lVar9;
          }
          if (iStack00000034 != 0) {
            fn_82AA8FD0(lVar16,lVar14,lVar12,lVar10);
          }
          fn_82B68DA8(lVar16,lVar14,lVar12,lVar10);
          if (iVar6 != 0) {
            fn_82B68D38(lVar9,lVar8,lVar16,lVar14);
          }
          lVar9 = lVar9 + 8;
          lVar8 = lVar8 + 8;
          lVar17 = lVar16 + 0x10;
          lVar15 = lVar14 + 0x10;
          iVar7 = 0;
          if (0 < param_2 + -4) {
            lVar16 = lVar16 + 8;
            lVar14 = lVar14 + 8;
            do {
              lVar13 = lVar12 + 0x10;
              lVar11 = lVar10 + 0x10;
              if (iStack00000034 != 0) {
                fn_82AA8FD0(lVar17,lVar15,lVar13,lVar11);
              }
              fn_82B68DA8(lVar17,lVar15,lVar13,lVar11);
              lVar1 = lVar16;
              lVar2 = lVar14;
              if (iVar6 == 0) {
LAB_82aab168:
                fn_82B68CA8(lVar1,lVar2);
              }
              else {
                fn_82B690E8(lVar9,lVar8,lVar16,lVar14);
                if (iVar6 == param_1 + -4) {
                  lVar1 = lVar12 + 8;
                  lVar2 = lVar10 + 8;
                  goto LAB_82aab168;
                }
              }
              iVar7 = iVar7 + 4;
              lVar17 = lVar17 + 0x10;
              lVar16 = lVar16 + 0x10;
              lVar15 = lVar15 + 0x10;
              lVar14 = lVar14 + 0x10;
              lVar9 = lVar9 + 0x10;
              lVar8 = lVar8 + 0x10;
              lVar10 = lVar11;
              lVar12 = lVar13;
            } while (iVar7 < param_2 + -4);
          }
          if (iVar6 != 0) {
            fn_82B68D38(lVar9,lVar8,lVar17 + -8,lVar15 + -8);
          }
          iVar6 = iVar6 + 4;
        } while (iVar6 < param_1);
      }
      param_3 = param_3 + -1;
      iVar3 = iVar3 + param_2;
    } while (param_3 != 0);
  }
  return;
}

