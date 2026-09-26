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
extern int fn_8291C0A8();
extern int fn_82F66AC0();
extern int fn_82F66AE0();


undefined8 fn_8291C428(int param_1,char *param_2,int *param_3)

{
  int iVar2;
  ulonglong uVar1;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  char cVar9;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  char *pcVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  
  cVar9 = *param_2;
  while (iVar2 = fn_82F66AC0(cVar9), iVar2 != 0) {
    param_2 = param_2 + 1;
    cVar9 = *param_2;
  }
  iVar2 = fn_82F66AE0(*param_2);
  if (((iVar2 != 0) || (*param_2 == '_')) || (*param_2 == '$')) {
    uVar12 = 1;
    while( true ) {
      pcVar10 = param_2 + uVar12;
      iVar2 = fn_82F66AE0(param_2[uVar12]);
      if ((iVar2 == 0) && (*pcVar10 != '_')) break;
      uVar12 = uVar12 + 1;
    }
    uVar13 = 0;
    uVar1 = (ulonglong)*(uint *)(param_1 + 8);
    uVar3 = 0;
    uVar5 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x10) + 0xc);
    lVar11 = *(uint *)(*(int *)(param_1 + 0x10) + 0x10) + uVar1;
    if (uVar5 != 0) {
      do {
        uVar4 = 0;
        uVar13 = (uVar5 + uVar3 & 0xffffffff) >> 1;
        iVar2 = *(int *)((int)uVar13 * 0x14 + (int)lVar11) + *(uint *)(param_1 + 8);
        uVar7 = uVar13;
        if (uVar12 != 0) {
          pcVar8 = param_2;
          do {
            if (pcVar8[iVar2 - (int)param_2] < *pcVar8) {
              uVar3 = uVar13 + 1;
              uVar7 = uVar5;
              goto LAB_8291c554;
            }
            if (*pcVar8 < pcVar8[iVar2 - (int)param_2]) goto LAB_8291c554;
            uVar4 = uVar4 + 1;
            pcVar8 = pcVar8 + 1;
          } while (uVar4 < uVar12);
        }
        if ((uVar4 != uVar12) || (*(char *)(uVar4 + iVar2) == '\0')) break;
LAB_8291c554:
        uVar5 = uVar7;
      } while (uVar3 < uVar7);
    }
    if (uVar3 != uVar5) {
      lVar6 = uVar13 * 0x14 + lVar11;
      uVar5 = *(uint *)lVar6 + uVar1;
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        lVar6 = lVar6 + -0x14;
        uVar7 = *(uint *)lVar6 + uVar1;
        uVar3 = uVar5;
        if ((uVar5 & 0xffffffff) != (uVar7 & 0xffffffff)) {
          do {
            cVar9 = *(char *)uVar3;
            pcVar8 = (char *)uVar7;
            if (cVar9 == '\0') break;
            uVar7 = uVar7 + 1;
            uVar3 = uVar3 + 1;
          } while (cVar9 == *pcVar8);
          if (cVar9 != *pcVar8) break;
        }
      }
      lVar6 = (uVar13 & 0x3fffffff) << 2;
      iVar2 = fn_8291C0A8(*(undefined4 *)((int)lVar6 + *(int *)(param_1 + 0x14)),pcVar10,0);
      if (iVar2 != 0) {
        lVar11 = uVar13 * 0x14 + lVar11;
        do {
          *param_3 = iVar2;
          uVar13 = uVar13 + 1;
          param_3 = (int *)(iVar2 + 0x24);
          lVar11 = lVar11 + 0x14;
          lVar6 = lVar6 + 4;
          if ((ulonglong)*(uint *)(*(int *)(param_1 + 0x10) + 0xc) <= (uVar13 & 0xffffffff)) {
            return 0;
          }
          uVar3 = (ulonglong)*(uint *)(param_1 + 8) + (ulonglong)*(uint *)lVar11;
          uVar1 = uVar5;
          if ((uVar5 & 0xffffffff) != (uVar3 & 0xffffffff)) {
            do {
              cVar9 = *(char *)uVar1;
              pcVar8 = (char *)uVar3;
              if (cVar9 == '\0') break;
              uVar3 = uVar3 + 1;
              uVar1 = uVar1 + 1;
            } while (cVar9 == *pcVar8);
            if (cVar9 != *pcVar8) {
              return 0;
            }
          }
          iVar2 = fn_8291C0A8(*(undefined4 *)((int)lVar6 + *(int *)(param_1 + 0x14)),pcVar10,0);
        } while (iVar2 != 0);
      }
    }
  }
  return 0xffffffff8876086c;
}

