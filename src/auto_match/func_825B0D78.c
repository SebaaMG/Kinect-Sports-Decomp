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
extern unsigned int *auStack_90;
extern int fn_827EFAE8();
extern int fn_827FA3F8();
extern int fn_82837AA8();
extern int fn_8284D890();
extern int fn_8284F488();
extern int fn_8284F498();
extern int fn_8284F560();
extern unsigned int lbl_821CC160;


void fn_825B0D78(int param_1,undefined8 param_2,int *param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 uVar17;
  char *pcVar19;
  undefined8 uVar18;
  double dVar20;
  uint auStack_90 [36];
  
  auStack_90[0] = 0;
  fn_82837AA8();
  fn_827FA3F8();
  uVar4 = fn_8284F488(param_3);
  uVar13 = 0;
  if (uVar4 != 0) {
    dVar20 = (double)lbl_821CC160;
    iVar16 = 0;
    do {
      pcVar19 = *(char **)(*(int *)(iVar16 + param_3[2] + 0x80) + 4);
      if (param_4 != (int *)0x0) {
        iVar5 = 0;
        if (0 < param_4[1]) {
          iVar6 = 0;
          do {
            pcVar12 = *(char **)(iVar6 + *param_4);
            pcVar11 = pcVar19;
            do {
              cVar1 = *pcVar12;
              cVar2 = *pcVar11;
              if (cVar1 == '\0') break;
              pcVar12 = pcVar12 + 1;
              pcVar11 = pcVar11 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              pcVar19 = *(char **)(iVar6 + *param_4 + 4);
            }
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 8;
          } while (iVar5 < param_4[1]);
        }
      }
      uVar14 = 0;
      iVar5 = fn_8284D890(param_1,pcVar19,0xffffffff821c81c0,auStack_90);
      if ((iVar5 != 0) && ((double)*(float *)(iVar16 + param_3[2] + 0xdc) == dVar20)) {
        uVar14 = fn_827EFAE8(param_2,auStack_90[0] & 0xffff);
      }
      uVar15 = 0;
      iVar5 = fn_8284D890(param_1,pcVar19,0xffffffff821c81c8,auStack_90);
      if ((iVar5 != 0) && ((double)*(float *)(iVar16 + param_3[2] + 0xe0) == dVar20)) {
        uVar15 = fn_827EFAE8(param_2,auStack_90[0] & 0xffff);
      }
      uVar17 = 0;
      iVar5 = fn_8284D890(param_1,pcVar19,0xffffffff821c81d0,auStack_90);
      if ((iVar5 != 0) && ((double)*(float *)(iVar16 + param_3[2] + 0xd8) == dVar20)) {
        uVar17 = fn_827EFAE8(param_2,auStack_90[0] & 0xffff);
      }
      uVar18 = 0;
      iVar5 = fn_8284D890(param_1,pcVar19,0xffffffff821c81e0,auStack_90);
      if ((iVar5 != 0) && ((double)*(float *)(iVar16 + param_3[2] + 0xe4) == dVar20)) {
        uVar18 = fn_827EFAE8(param_2,auStack_90[0] & 0xffff);
      }
      fn_8284F560(param_3,uVar13,uVar14,uVar15,uVar17,0,0,uVar18);
      uVar13 = uVar13 + 1;
      iVar16 = iVar16 + 0xf0;
    } while ((uVar13 & 0xffffffff) < (uVar4 & 0xffffffff));
  }
  uVar4 = fn_8284F498(param_3);
  if ((uVar4 & 0xffffffff) != 0) {
    iVar5 = 0;
    iVar16 = 0;
    do {
      uVar7 = 0;
      uVar3 = *(undefined4 *)(*(int *)(*param_3 + 0x14) + iVar16 + 0xc);
      iVar6 = fn_8284D890(param_1,uVar3,0xffffffff821bc088,auStack_90);
      if (iVar6 != 0) {
        uVar7 = fn_827EFAE8(param_2,auStack_90[0] & 0xffff);
      }
      uVar8 = 0;
      iVar6 = fn_8284D890(param_1,uVar3,0xffffffff821be8fc,auStack_90);
      if (iVar6 != 0) {
        uVar8 = fn_827EFAE8(param_2,auStack_90[0] & 0xffff);
      }
      uVar9 = 0;
      iVar6 = fn_8284D890(param_1,uVar3,0xffffffff821bc08c,auStack_90);
      if (iVar6 != 0) {
        uVar9 = fn_827EFAE8(param_2,auStack_90[0] & 0xffff);
      }
      uVar10 = 0;
      iVar6 = fn_8284D890(param_1,uVar3,0xffffffff821c81ec,auStack_90);
      if (iVar6 != 0) {
        uVar10 = fn_827EFAE8(param_2,auStack_90[0] & 0xffff);
      }
      uVar4 = uVar4 - 1;
      iVar16 = iVar16 + 0x20;
      *(undefined4 *)(iVar5 + param_3[3] + 4) = uVar7;
      *(undefined4 *)(iVar5 + param_3[3] + 8) = uVar8;
      *(undefined4 *)(iVar5 + param_3[3] + 0xc) = uVar9;
      iVar6 = iVar5 + param_3[3];
      iVar5 = iVar5 + 0x14;
      *(undefined4 *)(iVar6 + 0x10) = uVar10;
    } while (uVar4 != 0);
  }
  iVar16 = 0;
  if (0 < param_3[0xb]) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      if (*(int *)(param_3[10] + iVar6) != 0) {
        fn_825B0D78(param_1,param_2,*(undefined4 *)(param_3[10] + iVar6),
                      *(undefined4 *)(*(int *)(param_1 + 0x128) + iVar5 + 0x1c));
      }
      iVar16 = iVar16 + 1;
      iVar5 = iVar5 + 0x20;
      iVar6 = iVar6 + 4;
    } while (iVar16 < param_3[0xb]);
  }
  return;
}

