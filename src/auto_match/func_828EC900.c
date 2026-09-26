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
extern int fn_82CE1258();
extern int fn_82F68CC0();
extern int fn_82F691F0();


void fn_828EC900(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (*(char *)(param_1 + 0x1e1) == '\0') {
      if (*(char *)(param_1 + 0x1e2) != '\0') {
        if (*(int *)(param_1 + 0x224) == 1) {
          cVar1 = *(char *)(param_1 + 0x14e);
          cVar2 = *(char *)(param_1 + 0x14b);
          cVar3 = *(char *)(param_1 + 0x14a);
          cVar4 = *(char *)(param_1 + 0x148);
          cVar5 = *(char *)(param_1 + 0x14f);
          cVar6 = *(char *)(param_1 + 0x14d);
          cVar7 = *(char *)(param_1 + 0x14c);
          cVar8 = *(char *)(param_1 + 0x149);
          lVar15 = 8;
          puVar13 = (undefined1 *)(param_1 + 0x1e7);
          puVar12 = (undefined1 *)(param_1 + 0x13);
          do {
            puVar13 = puVar13 + 1;
            puVar12 = puVar12 + 1;
            *puVar12 = *puVar13;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          fn_82F68CC0(param_1 + 0x40,param_1 + 0x1f0,0x10);
          fn_82F68CC0(param_1 + 0x1c,param_1 + 0x200,0x24);
          *(undefined4 *)(param_1 + 300) = 0;
          *(undefined4 *)(param_1 + 0x130) = 0;
          puVar14 = (undefined4 *)(param_1 + 0x58);
          lVar15 = 7;
          do {
            puVar14 = puVar14 + 1;
            *puVar14 = 0;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          iVar10 = fn_82CE1258(-(ulonglong)(cVar1 != '\0') & 0x200 |
                                     -(ulonglong)(cVar2 != '\0') & 0x20 |
                                     -(ulonglong)(cVar3 != '\0') & 8 |
                                     -(ulonglong)(cVar4 != '\0') & 2 |
                                     -(ulonglong)(cVar5 != '\0') & 0x400 |
                                     -(ulonglong)(cVar6 != '\0') & 0x100 |
                                     -(ulonglong)(cVar7 != '\0') & 0x10 |
                                     -(ulonglong)(cVar8 != '\0') & 4,
                                     *(undefined4 *)(param_1 + 0x1e4),
                                     *(undefined4 *)(param_1 + 0x150),
                                     *(undefined4 *)(param_1 + 0x154),param_1 + 0x50,param_1 + 0x14,
                                     param_1 + 0x5c,param_1 + 0x58);
          if (iVar10 == 0x3e5) {
            *(undefined4 *)(param_1 + 8) = 3;
            *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x1e4);
            *(undefined4 *)(param_1 + 0x10) = 1;
            *(undefined1 *)(param_1 + 0x136) = *(undefined1 *)(param_1 + 0x148);
            *(undefined1 *)(param_1 + 0x137) = *(undefined1 *)(param_1 + 0x149);
            *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_1 + 0x14a);
            *(undefined1 *)(param_1 + 0x139) = *(undefined1 *)(param_1 + 0x14b);
            *(undefined1 *)(param_1 + 0x13a) = *(undefined1 *)(param_1 + 0x14c);
            *(undefined1 *)(param_1 + 0x13b) = *(undefined1 *)(param_1 + 0x14d);
            *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(param_1 + 0x14e);
            *(undefined1 *)(param_1 + 0x13d) = *(undefined1 *)(param_1 + 0x14f);
            *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x150);
            *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x154);
            *(undefined1 *)(param_1 + 0x1e2) = 0;
            return;
          }
          *(int *)(param_1 + 300) = iVar10;
          uVar11 = thunk_FUN_82a2b798();
          *(undefined4 *)(param_1 + 0x130) = uVar11;
        }
        else if (*(int *)(param_1 + 0x224) == 2) {
          puVar13 = (undefined1 *)(param_1 + 0x1e7);
          puVar12 = (undefined1 *)(param_1 + 0x13);
          lVar15 = 8;
          do {
            puVar13 = puVar13 + 1;
            puVar12 = puVar12 + 1;
            *puVar12 = *puVar13;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          fn_82F68CC0(param_1 + 0x40,param_1 + 0x1f0,0x10);
          fn_82F68CC0(param_1 + 0x1c,param_1 + 0x200,0x24);
          puVar14 = (undefined4 *)(param_1 + 0x58);
          lVar15 = 7;
          do {
            puVar14 = puVar14 + 1;
            *puVar14 = 0;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          *(undefined4 *)(param_1 + 300) = 0;
          *(undefined4 *)(param_1 + 0x130) = 0;
          iVar10 = fn_82CE1258(0x20,*(undefined4 *)(param_1 + 0x1e4),
                                     *(undefined4 *)(param_1 + 0x150),
                                     *(undefined4 *)(param_1 + 0x154),param_1 + 0x50,param_1 + 0x14,
                                     param_1 + 0x5c,param_1 + 0x58);
          if (iVar10 == 0x3e5) {
            *(undefined1 *)(param_1 + 0x1e2) = 0;
            *(undefined4 *)(param_1 + 8) = 3;
            *(undefined4 *)(param_1 + 0x10) = 2;
            *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x1e4);
            *(undefined1 *)(param_1 + 0x136) = 0;
            *(undefined1 *)(param_1 + 0x137) = 0;
            *(undefined1 *)(param_1 + 0x138) = 0;
            *(undefined1 *)(param_1 + 0x139) = 1;
            *(undefined1 *)(param_1 + 0x13a) = 0;
            *(undefined1 *)(param_1 + 0x13b) = 0;
            *(undefined1 *)(param_1 + 0x13c) = 0;
            *(undefined1 *)(param_1 + 0x13d) = 0;
            *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x150);
            *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x154);
            *(undefined1 *)(param_1 + 0x1e2) = 0;
            return;
          }
          *(int *)(param_1 + 300) = iVar10;
          uVar11 = thunk_FUN_82a2b798();
          *(undefined1 *)(param_1 + 0x1e2) = 0;
          *(undefined4 *)(param_1 + 0x130) = uVar11;
          *(undefined1 *)(param_1 + 0x1e2) = 0;
          return;
        }
        *(undefined1 *)(param_1 + 0x1e2) = 0;
      }
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x224);
      if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(param_1 + 0x14,0,0x3c);
      }
      if (uVar9 == 1) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(param_1 + 0x14,0,0x3c);
      }
      if (uVar9 < 3) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(param_1 + 0x14,0,0x3c);
      }
      *(undefined1 *)(param_1 + 0x1e1) = 0;
    }
  }
  return;
}

