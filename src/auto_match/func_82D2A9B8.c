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
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int lbl_8213491C;
extern unsigned int lbl_821AAD20;


undefined8 fn_82D2A9B8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  double dVar10;
  undefined **ppuStack_40;
  int iStack_3c;
  undefined **ppuStack_38;
  int iStack_34;
  
  iVar1 = *(int *)(param_2 + 0x20);
  iVar6 = 0;
  iVar2 = *(int *)(param_3 + 0x20);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  piVar7 = (int *)(iVar1 + 8);
  do {
    iVar8 = 0;
    piVar9 = (int *)(iVar2 + 8);
    do {
      if (*piVar7 == *piVar9) {
        return 1;
      }
      iVar8 = iVar8 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar8 < 3);
    iVar6 = iVar6 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar6 < 3);
  ppuStack_40 = &lbl_8213491C;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  ppuStack_38 = &lbl_8213491C;
  dVar10 = (double)lbl_821AAD20;
  iStack_3c = iVar1;
  iStack_34 = iVar2;
  cVar5 = (**(code **)(**(int **)(param_1 + 0xc) + 8))
                    (dVar10,*(int **)(param_1 + 0xc),&ppuStack_40,&ppuStack_38);
  if (cVar5 != '\0') {
    iVar6 = *(int *)(iVar2 + 8);
    iVar8 = *(int *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar2 + 0xc);
    iVar4 = *(int *)(iVar1 + 0x10);
    iVar2 = *(int *)(iVar2 + 0x10);
    *(float *)(*(int *)(iVar1 + 8) + 0x3c) = (float)dVar10;
    *(float *)(iVar6 + 0x3c) = (float)dVar10;
    *(float *)(iVar8 + 0x3c) = (float)dVar10;
    *(float *)(iVar3 + 0x3c) = (float)dVar10;
    *(float *)(iVar4 + 0x3c) = (float)dVar10;
    *(float *)(iVar2 + 0x3c) = (float)dVar10;
  }
  return 0;
}

