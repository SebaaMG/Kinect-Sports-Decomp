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
extern int fn_82E68FB0();


longlong fn_82E6D350(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  iVar2 = *(int *)(param_2 + 0xb8);
  iVar3 = *(int *)(param_2 + 0xc4);
  iVar4 = *(int *)(param_2 + 200);
  lVar14 = 0;
  iVar5 = *(int *)(param_2 + 0xcc);
  iVar12 = 0;
  iVar8 = param_1[0x423b];
  if ((*(int *)(*param_1 + 0x3c) < 3) && (0 < *(int *)(iVar2 + -4))) {
    puVar13 = (uint *)(iVar2 + 4);
    piVar11 = param_1 + 0x41fc;
    do {
      uVar6 = *puVar13;
      uVar7 = puVar13[-1];
      uVar10 = uVar6 & 0x7fffffff;
      if (uVar6 == 0) {
        if (*piVar11 != 0) {
          fn_82E68FB0(iVar8,*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10));
        }
        lVar14 = (ulonglong)*(uint *)(iVar3 + 0x10) + lVar14;
      }
      else {
        if (iVar5 < (int)uVar10) {
LAB_82e6d46c:
          if (*piVar11 != 0) {
            fn_82E68FB0(iVar8,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
            fn_82E68FB0(iVar8,uVar10,*(undefined4 *)(*param_1 + 0x34));
            fn_82E68FB0(iVar8,(ulonglong)uVar7,*(undefined4 *)(*param_1 + 0xf8));
            fn_82E68FB0(iVar8,uVar6 >> 0x1f,1);
          }
          uVar15 = (ulonglong)*(uint *)(*param_1 + 0xf8) + (ulonglong)*(uint *)(*param_1 + 0x34) +
                   (ulonglong)*(uint *)(iVar3 + 8);
        }
        else {
          sVar1 = *(short *)((uVar10 + 1) * 2 + iVar4);
          if ((int)*(short *)((uVar10 + 2) * 2 + iVar4) - (int)sVar1 <= (int)uVar7)
          goto LAB_82e6d46c;
          uVar15 = (longlong)sVar1 + (ulonglong)uVar7;
          if (*piVar11 != 0) {
            iVar9 = (int)((uVar15 & 0xffffffff) << 3) + iVar3;
            fn_82E68FB0(iVar8,*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar9 + 8));
            fn_82E68FB0(iVar8,uVar6 >> 0x1f,1);
          }
          uVar15 = (ulonglong)*(uint *)((int)((uVar15 + 1 & 0xffffffff) << 3) + iVar3);
        }
        lVar14 = uVar15 + lVar14 + 1;
      }
      iVar12 = iVar12 + 2;
      puVar13 = puVar13 + 2;
    } while (iVar12 < *(int *)(iVar2 + -4));
  }
  return lVar14;
}

