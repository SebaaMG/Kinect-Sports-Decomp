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


int fn_82CF0BD0(char *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar3 = param_2;
  if (*param_1 != '\0') {
    iVar4 = *(int *)(param_2 + 0x48);
    piVar7 = *(int **)(iVar4 + 0x30);
    iVar3 = *piVar7;
    if (iVar3 == param_2) {
      iVar3 = param_2;
      if (*(int *)(iVar4 + 0x48) != 0) {
        iVar3 = iVar4;
      }
    }
    else {
      iVar6 = 0;
      piVar5 = piVar7;
      if (0 < *(int *)(iVar4 + 0x34)) {
        do {
          if (*piVar5 == param_2) {
            iVar3 = piVar7[iVar6 + -1];
            break;
          }
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar6 < *(int *)(iVar4 + 0x34));
      }
      iVar4 = *(int *)(iVar3 + 0x34);
      while ((0 < iVar4 && ((*(uint *)(iVar3 + 0x50) & 1) != 0))) {
        iVar3 = *(int *)(iVar4 * 4 + *(int *)(iVar3 + 0x30) + -4);
        iVar4 = *(int *)(iVar3 + 0x34);
      }
    }
  }
  if (param_1[1] != '\0') {
    if ((*(int *)(iVar3 + 0x34) < 1) || ((*(uint *)(iVar3 + 0x50) & 1) == 0)) {
      bVar2 = false;
      iVar4 = iVar3;
      do {
        iVar6 = *(int *)(iVar4 + 0x48);
        iVar8 = 0;
        iVar1 = *(int *)(iVar6 + 0x34);
        if (0 < iVar1) {
          piVar7 = *(int **)(iVar6 + 0x30);
          do {
            if ((*piVar7 == iVar4) && (iVar8 < iVar1 + -1)) {
              bVar2 = true;
              iVar3 = (*(int **)(iVar6 + 0x30))[iVar8 + 1];
              break;
            }
            iVar8 = iVar8 + 1;
            piVar7 = piVar7 + 1;
          } while (iVar8 < iVar1);
        }
      } while ((!bVar2) && (iVar4 = iVar6, *(int *)(iVar6 + 0x48) != 0));
    }
    else {
      iVar3 = **(int **)(iVar3 + 0x30);
    }
  }
  if (param_1[2] != '\0') {
    if ((*(uint *)(iVar3 + 0x50) & 1) == 0) {
      iVar4 = *(int *)(iVar3 + 0x48);
      if (*(int *)(iVar4 + 0x48) != 0) {
        *(uint *)(iVar4 + 0x50) = *(uint *)(iVar4 + 0x50) & 0xfffffffe;
        iVar3 = iVar4;
      }
    }
    else {
      *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) & 0xfffffffe;
    }
  }
  if (param_1[3] != '\0') {
    if ((*(uint *)(iVar3 + 0x50) & 1) == 0) {
      *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) | 1;
    }
    *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) | 1;
  }
  return iVar3;
}

