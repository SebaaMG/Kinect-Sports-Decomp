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


char * fn_829B78F8(int param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  ulonglong uVar10;
  char *pcVar11;
  char cVar12;
  
  uVar9 = *(uint *)(param_1 + 100);
  pcVar3 = *(char **)(param_1 + 0x70);
  uVar1 = *(uint *)(param_1 + 0x74);
  pcVar6 = (char *)(*(int *)(param_1 + 0x30) + uVar9);
  if (*(int *)(param_1 + 0x24) - 0x106U < uVar9) {
    uVar9 = (uVar9 - *(int *)(param_1 + 0x24)) + 0x106;
  }
  else {
    uVar9 = 0;
  }
  cVar4 = pcVar6[(int)pcVar3];
  cVar12 = pcVar6[(int)(pcVar3 + -1)];
  if (*(char **)(param_1 + 0x84) <= pcVar3) {
    uVar1 = uVar1 >> 2;
  }
  uVar10 = (ulonglong)uVar1;
  pcVar2 = *(char **)(param_1 + 0x6c);
  pcVar11 = *(char **)(param_1 + 0x88);
  if (pcVar2 < *(char **)(param_1 + 0x88)) {
    pcVar11 = pcVar2;
  }
  do {
    pcVar5 = (char *)(*(int *)(param_1 + 0x30) + param_2);
    if ((((pcVar5[(int)pcVar3] == cVar4) && (pcVar5[(int)(pcVar3 + -1)] == cVar12)) &&
        (*pcVar5 == *pcVar6)) && (pcVar5[1] == pcVar6[1])) {
      pcVar7 = pcVar6 + 2;
      pcVar5 = pcVar5 + 2;
      while (((((pcVar8 = pcVar7 + 1, pcVar7[1] == pcVar5[1] &&
                (pcVar8 = pcVar7 + 2, pcVar7[2] == pcVar5[2])) &&
               ((pcVar8 = pcVar7 + 3, pcVar7[3] == pcVar5[3] &&
                ((pcVar8 = pcVar7 + 4, pcVar7[4] == pcVar5[4] &&
                 (pcVar8 = pcVar7 + 5, pcVar7[5] == pcVar5[5])))))) &&
              (pcVar8 = pcVar7 + 6, pcVar7[6] == pcVar5[6])) &&
             (pcVar8 = pcVar7 + 7, pcVar7[7] == pcVar5[7]))) {
        pcVar5 = pcVar5 + 8;
        pcVar7 = pcVar7 + 8;
        pcVar8 = pcVar7;
        if ((*pcVar7 != *pcVar5) || (pcVar6 + 0x102 <= pcVar7)) break;
      }
      pcVar8 = pcVar8 + (0x102 - (int)(pcVar6 + 0x102));
      if ((int)pcVar3 < (int)pcVar8) {
        *(uint *)(param_1 + 0x68) = param_2;
        pcVar3 = pcVar8;
        if ((int)pcVar11 <= (int)pcVar8) break;
        cVar4 = pcVar6[(int)pcVar8];
        cVar12 = pcVar6[(int)(pcVar8 + -1)];
      }
    }
    param_2 = (uint)*(ushort *)
                     ((*(uint *)(param_1 + 0x2c) & param_2) * 2 + *(int *)(param_1 + 0x38));
    if (param_2 <= uVar9) break;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (pcVar3 <= pcVar2) {
    pcVar2 = pcVar3;
  }
  return pcVar2;
}

