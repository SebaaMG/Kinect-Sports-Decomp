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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82250A18();
extern int fn_822ABBF0();
extern int fn_82366AE8();
extern int fn_82396F50();
extern int fn_82398250();
extern int fn_823A10B0();
extern int fn_824CCD80();
extern int fn_8251F720();
extern int fn_825603C8();
extern int fn_825604A0();
extern int fn_8265C9E0();
extern unsigned int iStack_48;
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821B5184;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


void fn_82395888(int param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 uVar4;
  char cVar6;
  int iVar5;
  undefined8 uVar3;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined **ppuStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  
  iVar5 = *(int *)(param_1 + 0x174);
  uVar2 = fn_8265C9E0(0x30);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_823A10B0(uVar2,iVar5,param_1 + 0x17c);
  }
  piVar11 = *(int **)(param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x2e4) = uVar4;
  if (*piVar11 != 0) {
    *piVar11 = 0;
  }
  *piVar11 = iVar5;
  uVar4 = fn_8251F720(param_1 + 0x198,0);
  *(undefined4 *)(param_1 + 0x19c) = uVar4;
  fn_82396F50(param_1);
  iVar5 = *(int *)(param_1 + 0x840);
  uVar4 = *(undefined4 *)(param_1 + 0x83c);
  uVar9 = 0;
  iVar10 = 0;
  if ((iVar5 != 0) && (cVar6 = fn_8223AAC0(iVar5), cVar6 != '\0')) {
    uVar9 = uVar4;
    iVar10 = iVar5;
  }
  uStack_58 = 0;
  iStack_54 = 0;
  ppuStack_60 = &lbl_821B5184;
  iStack_5c = param_1;
  uVar4 = uStack_58;
  iVar5 = iStack_54;
  if (((iVar10 != 0) &&
      (cVar6 = fn_8223AAC0(iVar10), uVar4 = uStack_58, iVar5 = iStack_54, cVar6 != '\0')) &&
     (uVar4 = uVar9, iVar5 = iVar10, iStack_54 != 0)) {
    fn_822315A0();
  }
  iStack_54 = iVar5;
  uStack_58 = uVar4;
  uStack_50 = *(undefined4 *)(param_1 + 0x184);
  iStack_48 = param_1 + 0xbb0;
  uStack_4c = *(undefined4 *)(param_1 + 0x188);
  if (iVar10 != 0) {
    fn_822315A0(iVar10);
  }
  puVar7 = *(undefined4 **)(param_1 + 8);
  for (piVar11 = (int *)*puVar7; uVar4 = lbl_82193E50, piVar11 < (int *)puVar7[1];
      piVar11 = piVar11 + 1) {
    puVar1 = (undefined4 *)*piVar11;
    for (puVar12 = (undefined4 *)*puVar1; puVar12 < (undefined4 *)puVar1[1]; puVar12 = puVar12 + 1)
    {
      fn_822ABBF0(*puVar12,&ppuStack_60);
    }
  }
  puVar7 = *(undefined4 **)(param_1 + 0x20);
  if (puVar7 != *(undefined4 **)(param_1 + 0x24)) {
    do {
      puVar1 = (undefined4 *)*puVar7;
      for (piVar11 = (int *)*puVar1; piVar11 != (int *)puVar1[1]; piVar11 = piVar11 + 1) {
        iVar5 = *piVar11;
        if (*(int *)(iVar5 + 0xf8) != 0) {
          *(undefined4 *)(*(int *)(iVar5 + 0xf8) + 0x48) = 0;
        }
        if (*(int *)(iVar5 + 0xfc) != 0) {
          *(undefined4 *)(*(int *)(iVar5 + 0xfc) + 0x48) = 0;
        }
        puVar1 = (undefined4 *)*puVar7;
        *(undefined4 *)(*(int *)(iVar5 + 0x20) + 0x10) = uVar4;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != *(undefined4 **)(param_1 + 0x24));
  }
  fn_82398250(param_1,0);
  piVar11 = (int *)**(int **)(param_1 + 0x20);
  if ((1 < (uint)(piVar11[1] - *piVar11 >> 2)) ||
     (piVar11 = (int *)(*(int **)(param_1 + 0x20))[1], 1 < (uint)(piVar11[1] - *piVar11 >> 2))) {
    iVar5 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar5 = fn_82250A18();
    }
    uVar8 = *(int *)(param_1 + 0x34) - (int)*(undefined4 **)(param_1 + 0x30);
    if (*(char *)(iVar5 + 4) == '\0') {
      if ((uint)((int)uVar8 >> 3) < 2) goto LAB_82395b90;
      iVar5 = **(int **)(param_1 + 0x30);
      if (*(int *)(iVar5 + 0x22c) != 1) {
        uVar3 = fn_824CCD80(*(undefined4 *)(iVar5 + 0x10));
        fn_825603C8(uVar3,iVar5 + 0x20,1);
        *(undefined4 *)(iVar5 + 0x22c) = 1;
      }
      iVar5 = *(int *)(*(int *)(param_1 + 0x30) + 8);
    }
    else {
      if ((uVar8 & 0xfffffff8) != 0x20) goto LAB_82395b90;
      fn_82366AE8(**(undefined4 **)(param_1 + 0x30),*(int *)(param_1 + 0xcc) == 0);
      iVar5 = *(int *)(*(int *)(param_1 + 0x30) + 8);
      if (*(int *)(iVar5 + 0x22c) != 0) {
        fn_825604A0(iVar5 + 0x20);
        *(undefined4 *)(iVar5 + 0x22c) = 0;
      }
      fn_82366AE8(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x10),
                        *(int *)(param_1 + 0xcc) == 1);
      iVar5 = *(int *)(*(int *)(param_1 + 0x30) + 0x18);
    }
    if (*(int *)(iVar5 + 0x22c) != 0) {
      fn_825604A0(iVar5 + 0x20);
      *(undefined4 *)(iVar5 + 0x22c) = 0;
    }
  }
LAB_82395b90:
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  return;
}

