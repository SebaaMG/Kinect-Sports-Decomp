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
extern int fn_82250A18();
extern int fn_8247F240();
extern int fn_82485850();
extern int fn_82485AC8();
extern int fn_82485BD8();
extern int fn_82F65390();
extern unsigned int lbl_831CB7D8;
extern unsigned int lbl_832975B0;


void fn_82480D10(int param_1)

{
  undefined **ppuVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined **ppuVar12;
  
  ppuVar12 = &lbl_831CB7D8;
  uVar3 = *(uint *)(param_1 + 0x48);
  lVar9 = -1;
  lVar10 = 0;
  ppuVar1 = ppuVar12;
  puVar5 = lbl_831CB7D8;
  while ((puVar5 != (undefined *)0x0 && ((int)lVar9 == -1))) {
    pcVar4 = *ppuVar1;
    pcVar8 = pcVar4;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    iVar6 = fn_82F65390((ulonglong)uVar3 + 0x234,pcVar4,pcVar8 + (-1 - (int)pcVar4));
    if (iVar6 == 0) {
      lVar9 = lVar10;
    }
    ppuVar1 = ppuVar1 + 5;
    puVar5 = *ppuVar1;
    lVar10 = lVar10 + 1;
  }
  lVar10 = -1;
  lVar11 = 0;
  puVar5 = lbl_831CB7D8;
  while ((puVar5 != (undefined *)0x0 && ((int)lVar10 == -1))) {
    pcVar4 = *ppuVar12;
    pcVar8 = pcVar4;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    iVar6 = fn_82F65390((ulonglong)uVar3 + 0x634,pcVar4,pcVar8 + (-1 - (int)pcVar4));
    if (iVar6 == 0) {
      lVar10 = lVar11;
    }
    ppuVar12 = ppuVar12 + 5;
    puVar5 = *ppuVar12;
    lVar11 = lVar11 + 1;
  }
  iVar6 = (int)(lVar10 - lVar9);
  fn_82485850((ulonglong)*(uint *)(param_1 + 0x48),
                    (ulonglong)*(uint *)(param_1 + 0x48) + 0x634);
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x14) =
       *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x20);
  fn_82485AC8(*(undefined4 *)(param_1 + 0x48));
  iVar7 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar7 = fn_82250A18();
  }
  fn_82485BD8(*(undefined4 *)(param_1 + 0x48),*(char *)(iVar7 + 4) == '\0');
  if (iVar6 != iVar6 + -1 + (uint)(lVar10 - lVar9 == 0)) {
    fn_8247F240(param_1,1);
  }
  return;
}

