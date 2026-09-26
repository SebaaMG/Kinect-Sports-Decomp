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


undefined8 fn_828F53E0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  bool bVar14;
  
  pcVar7 = (char *)*param_3;
  pcVar10 = (char *)*param_2;
  do {
    cVar1 = *pcVar10;
    cVar2 = *pcVar7;
    if (cVar1 == '\0') break;
    pcVar10 = pcVar10 + 1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    iVar3 = param_2[1];
    iVar4 = param_3[1];
    iVar11 = iVar3;
    iVar8 = iVar4;
    iVar6 = iVar4;
    if (iVar3 != 0) {
      do {
        iVar6 = 0;
        if (iVar8 == 0) break;
        iVar11 = *(int *)(iVar11 + 0xc);
        iVar8 = *(int *)(iVar8 + 0xc);
        iVar6 = iVar8;
      } while (iVar11 != 0);
      if (iVar11 != 0) {
        return 0;
      }
    }
    if (iVar6 == 0) {
      iVar8 = param_3[2];
      for (iVar11 = param_2[2]; iVar11 != 0; iVar11 = *(int *)(iVar11 + 0xc)) {
        if (iVar8 == 0) {
          return 0;
        }
        if (*(int *)(iVar11 + 0x10) != *(int *)(iVar8 + 0x10)) {
          return 0;
        }
        switch(*(int *)(iVar11 + 0x10)) {
        case 0:
        case 2:
        case 3:
        case 4:
          iVar6 = *(int *)(iVar8 + 0x18) - *(int *)(iVar11 + 0x18);
          break;
        case 1:
          if (*(char *)(iVar11 + 0x18) != *(char *)(iVar8 + 0x18)) {
            return 0;
          }
          if (*(char *)(iVar11 + 0x19) != *(char *)(iVar8 + 0x19)) {
            return 0;
          }
          if (*(char *)(iVar11 + 0x1a) != *(char *)(iVar8 + 0x1a)) {
            return 0;
          }
          bVar14 = *(char *)(iVar11 + 0x1b) == *(char *)(iVar8 + 0x1b);
          goto LAB_828f5504;
        case 5:
        case 6:
        case 7:
        case 8:
          bVar14 = *(double *)(iVar11 + 0x18) == *(double *)(iVar8 + 0x18);
LAB_828f5504:
          if (!bVar14) {
            return 0;
          }
          goto LAB_828f5660;
        case 9:
          bVar14 = false;
          iVar6 = 1;
          if (iVar3 != 0) {
            iVar5 = iVar3;
            do {
              pcVar7 = *(char **)(iVar5 + 0x18);
              pcVar10 = *(char **)(iVar11 + 0x18);
              do {
                cVar1 = *pcVar10;
                cVar2 = *pcVar7;
                if (cVar1 == '\0') break;
                pcVar10 = pcVar10 + 1;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                bVar14 = true;
                break;
              }
              iVar5 = *(int *)(iVar5 + 0xc);
              iVar6 = iVar6 + 1;
            } while (iVar5 != 0);
          }
          iVar6 = iVar6 + -1;
          if (iVar4 != 0) {
            iVar5 = iVar4;
            do {
              pcVar7 = *(char **)(iVar5 + 0x18);
              pcVar10 = *(char **)(iVar8 + 0x18);
              do {
                cVar1 = *pcVar10;
                cVar2 = *pcVar7;
                if (cVar1 == '\0') break;
                pcVar10 = pcVar10 + 1;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                bVar14 = true;
                break;
              }
              iVar5 = *(int *)(iVar5 + 0xc);
              iVar6 = iVar6 + -1;
            } while (iVar5 != 0);
          }
          if (!bVar14) {
            pbVar9 = *(byte **)(iVar8 + 0x18);
            pbVar12 = *(byte **)(iVar11 + 0x18);
            do {
              iVar6 = (uint)*pbVar12 - (uint)*pbVar9;
              if (*pbVar12 == 0) break;
              pbVar12 = pbVar12 + 1;
              pbVar9 = pbVar9 + 1;
            } while (iVar6 == 0);
          }
          break;
        case 10:
        case 0xb:
          pbVar9 = *(byte **)(iVar8 + 0x18);
          pbVar12 = *(byte **)(iVar11 + 0x18);
          do {
            iVar6 = (uint)*pbVar12 - (uint)*pbVar9;
            if (*pbVar12 == 0) break;
            pbVar12 = pbVar12 + 1;
            pbVar9 = pbVar9 + 1;
          } while (iVar6 == 0);
          break;
        default:
          uVar13 = 1;
          goto LAB_828f5658;
        }
        uVar13 = (uint)LZCOUNT(iVar6) >> 5;
LAB_828f5658:
        if (uVar13 == 0) {
          return 0;
        }
LAB_828f5660:
        iVar8 = *(int *)(iVar8 + 0xc);
      }
      if (iVar8 == 0) {
        return 1;
      }
    }
  }
  return 0;
}

