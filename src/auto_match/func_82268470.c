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
extern int fn_82268638();
extern int fn_82537A58();
extern int fn_8265C9E0();


void fn_82268470(int param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  
  iVar8 = 0;
  for (piVar6 = *(int **)(param_1 + 0x6e0); (piVar6 != (int *)0x0 && (*piVar6 != 0));
      piVar6 = (int *)(-(uint)(piVar6[1] != 0) & (uint)(piVar6 + 1))) {
    iVar8 = iVar8 + 1;
  }
  iVar9 = 0;
  for (piVar6 = *(int **)(param_1 + 0x6e4); (piVar6 != (int *)0x0 && (*piVar6 != 0));
      piVar6 = (int *)(-(uint)(piVar6[1] != 0) & (uint)(piVar6 + 1))) {
    iVar9 = iVar9 + 1;
  }
  lVar12 = 0;
  puVar13 = (undefined4 *)(*(int *)(param_1 + 0x5d8) * 0x38 + *(int *)(param_1 + 0x6e8) + 8);
  iVar10 = param_1 + 0x638;
  puVar11 = (undefined4 *)(param_1 + 0x61c);
  puVar14 = (undefined4 *)(param_1 + 0x70);
  do {
    if (puVar13 + -2 == *(undefined4 **)(param_1 + 0x6ec)) break;
    if (puVar13[7] == 0x4d5308c9) {
      puVar14[-1] = *(undefined4 *)
                     ((int)((lVar12 - (longlong)((int)lVar12 / iVar8) * (longlong)iVar8 &
                            0xffffffffU) << 2) + *(int *)(param_1 + 0x6e0));
      *puVar14 = *(undefined4 *)
                  ((int)((lVar12 - (longlong)((int)lVar12 / iVar9) * (longlong)iVar9 & 0xffffffffU)
                        << 2) + *(int *)(param_1 + 0x6e4));
      puVar14[-2] = 1;
    }
    else {
      puVar14[-1] = 0;
      *puVar14 = 0;
      puVar14[-2] = 0;
    }
    uVar2 = fn_8265C9E0(0x38);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82537A58(uVar2,*(undefined4 *)(param_1 + 0x4b0),*(undefined8 *)(puVar13 + -2)
                               );
    }
    *puVar11 = uVar3;
    puVar4 = puVar13;
    if (0xf < (uint)puVar13[5]) {
      puVar4 = (undefined4 *)*puVar13;
    }
    pcVar7 = (char *)(puVar14 + -0x1c);
    iVar5 = (int)puVar4 - (int)pcVar7;
    do {
      if (puVar14 + -0xc <= pcVar7) break;
      cVar1 = pcVar7[iVar5];
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (pcVar7 == (char *)(puVar14 + -0xc)) {
      pcVar7[-1] = '\0';
    }
    fn_82268638(iVar10,puVar13 + -2);
    lVar12 = lVar12 + 1;
    puVar13 = puVar13 + 0xe;
    puVar11 = puVar11 + 1;
    puVar14 = puVar14 + 0x3c;
    iVar10 = iVar10 + 0x38;
  } while ((int)lVar12 < 3);
  *(undefined4 *)(param_1 + 0x628) = 2;
  return;
}

