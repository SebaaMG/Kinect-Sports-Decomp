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


undefined8 fn_8235D230(int param_1,char *param_2,undefined1 *param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  longlong lVar9;
  
  pcVar3 = *(char **)(param_1 + 0x1b9c);
  if (pcVar3 != (char *)0x0) {
    uVar4 = 0;
    if (*(uint *)(param_1 + 0x1ba0) != 0) {
      iVar5 = (int)pcVar3 - (int)param_2;
      pcVar6 = pcVar3;
      do {
        cVar1 = *pcVar6;
        pcVar7 = param_2;
        cVar2 = *param_2;
        while (cVar2 == cVar1) {
          pcVar7 = pcVar7 + 1;
          if (cVar2 == '\0') goto LAB_8235d2b8;
          cVar1 = pcVar7[iVar5];
          cVar2 = *pcVar7;
        }
        if (cVar2 == cVar1) {
LAB_8235d2b8:
          lVar9 = 0x40;
          puVar8 = param_3;
          do {
            *puVar8 = puVar8[(int)(pcVar3 + (uVar4 * 0xa0 - (int)param_3))];
            puVar8 = puVar8 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          iVar5 = 0;
          lVar9 = 0x40;
          do {
            param_3[iVar5 + 0x40] = pcVar3[iVar5 + uVar4 * 0xa0 + 0x40];
            iVar5 = iVar5 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          *(undefined4 *)(param_3 + 0x80) = *(undefined4 *)(pcVar3 + uVar4 * 0xa0 + 0x80);
          *(undefined4 *)(param_3 + 0x84) = *(undefined4 *)(pcVar3 + uVar4 * 0xa0 + 0x84);
          *(undefined4 *)(param_3 + 0x88) = *(undefined4 *)(pcVar3 + uVar4 * 0xa0 + 0x88);
          *(undefined4 *)(param_3 + 0x8c) = *(undefined4 *)(pcVar3 + uVar4 * 0xa0 + 0x8c);
          *(undefined4 *)(param_3 + 0x90) = *(undefined4 *)(pcVar3 + uVar4 * 0xa0 + 0x90);
          *(undefined4 *)(param_3 + 0x94) = *(undefined4 *)(pcVar3 + uVar4 * 0xa0 + 0x94);
          *(undefined4 *)(param_3 + 0x98) = *(undefined4 *)(pcVar3 + uVar4 * 0xa0 + 0x98);
          *(undefined4 *)(param_3 + 0x9c) = *(undefined4 *)(pcVar3 + uVar4 * 0xa0 + 0x9c);
          return 1;
        }
        uVar4 = uVar4 + 1;
        pcVar6 = pcVar6 + 0xa0;
        iVar5 = iVar5 + 0xa0;
      } while (uVar4 < *(uint *)(param_1 + 0x1ba0));
    }
  }
  return 0;
}

