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
extern int fn_82F66368();
extern unsigned int lbl_821C8E74;


longlong fn_825C2BB0(int *param_1,char *param_2)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int *piVar8;
  int iVar9;
  char acStack_120 [288];
  
  piVar2 = (int *)*param_1;
  lVar1 = 0;
  piVar8 = piVar2 + piVar2[1] * *piVar2 * 2 + 5;
  piVar2 = piVar8 + *piVar2 * 0x10;
  if (piVar8 < piVar2) {
    iVar5 = (int)piVar8 - (int)param_2;
    do {
      cVar7 = *(char *)piVar8;
      cVar3 = *param_2;
      pcVar4 = param_2;
      while (cVar3 == cVar7) {
        pcVar4 = pcVar4 + 1;
        if (cVar3 == '\0') goto LAB_825c2c4c;
        cVar7 = pcVar4[iVar5];
        cVar3 = *pcVar4;
      }
      if (cVar3 == cVar7) goto LAB_825c2c4c;
      piVar8 = piVar8 + 0x10;
      iVar5 = iVar5 + 0x40;
      lVar1 = lVar1 + 1;
    } while (piVar8 < piVar2);
  }
  lVar1 = -1;
LAB_825c2c4c:
  pcVar4 = param_2;
  if ((int)lVar1 == -1) {
    do {
      cVar7 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar7 != '\0');
    fn_82F66368(acStack_120,0x100,param_2,pcVar4 + (-1 - (int)param_2));
    iVar5 = 0;
    acStack_120[(int)(pcVar4 + (-1 - (int)param_2))] = '\0';
    do {
      iVar9 = 0;
      cVar7 = (&lbl_821C8E74)[iVar5];
      iVar6 = 0;
      cVar3 = acStack_120[0];
      while (cVar3 != '\0') {
        if (acStack_120[iVar6 + iVar9] == cVar7) {
          iVar6 = iVar6 + 1;
        }
        else {
          acStack_120[iVar9] = acStack_120[iVar6 + iVar9];
          iVar9 = iVar9 + 1;
        }
        cVar3 = acStack_120[iVar6 + iVar9];
      }
      iVar5 = iVar5 + 1;
      acStack_120[iVar9] = '\0';
    } while (iVar5 < 10);
    param_1 = (int *)*param_1;
    lVar1 = 0;
    piVar8 = param_1 + param_1[1] * *param_1 * 2 + 5;
    piVar2 = piVar8 + *param_1 * 0x10;
    if (piVar8 < piVar2) {
      iVar5 = (int)piVar8 - (int)acStack_120;
      do {
        cVar7 = *(char *)piVar8;
        pcVar4 = acStack_120;
        cVar3 = acStack_120[0];
        if (acStack_120[0] == cVar7) {
          do {
            pcVar4 = pcVar4 + 1;
            if (cVar3 == '\0') {
              return lVar1;
            }
            cVar3 = *pcVar4;
            cVar7 = pcVar4[iVar5];
          } while (cVar3 == cVar7);
        }
        if (cVar3 == cVar7) {
          return lVar1;
        }
        piVar8 = piVar8 + 0x10;
        iVar5 = iVar5 + 0x40;
        lVar1 = lVar1 + 1;
      } while (piVar8 < piVar2);
    }
    lVar1 = -1;
  }
  return lVar1;
}

