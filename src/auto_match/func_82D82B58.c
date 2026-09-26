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
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82D82B58(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  iVar2 = 0;
  dVar5 = (double)lbl_82002AE0;
  dVar6 = (double)lbl_821AAD20;
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar3 = 0;
    do {
      fStack_60 = *(float *)(*(int *)(param_1 + 8) + 0x18);
      fStack_58 = fStack_60 - fStack_60;
      iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x28));
      dVar4 = dVar6;
      if ((double)fStack_58 != dVar6) {
        dVar4 = (double)(float)(dVar5 / (double)fStack_58);
      }
      fStack_54 = (float)dVar4;
      fStack_5c = fStack_60;
      (**(code **)(**(int **)(param_1 + 8) + 0x1c))
                (*(int **)(param_1 + 8),*(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(iVar1 + 0x4c),
                 param_1,&fStack_60,1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x2c));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    iVar3 = 0;
    do {
      fStack_50 = *(float *)(*(int *)(param_1 + 8) + 0x18);
      fStack_48 = fStack_50 - fStack_50;
      iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x34));
      dVar4 = dVar6;
      if ((double)fStack_48 != dVar6) {
        dVar4 = (double)(float)(dVar5 / (double)fStack_48);
      }
      fStack_44 = (float)dVar4;
      fStack_4c = fStack_50;
      (**(code **)(**(int **)(param_1 + 8) + 0x1c))
                (*(int **)(param_1 + 8),*(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(iVar1 + 0x4c),
                 param_1,&fStack_50,1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x38));
  }
  return;
}

