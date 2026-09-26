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
extern int fn_825F8620();
extern unsigned int lbl_8327F894;


undefined8 fn_825F87C0(undefined8 param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  char cVar4;
  undefined8 uVar3;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  piVar5 = (int *)(param_2 + 0x230);
  do {
    if (*piVar5 == param_3) break;
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar6 < 6);
  iVar6 = param_3 * 0x2c + param_2;
  if ((*(int **)(iVar6 + 8) == (int *)0x0) ||
     (cVar4 = (**(code **)(**(int **)(iVar6 + 8) + 4))(), cVar4 != '\0')) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(iVar6 + 0xc) != 0) {
      fn_825F8620(param_1,param_2,param_3);
    }
    fVar1 = *(float *)(iVar6 + 0x1c);
    if (*(float *)(iVar6 + 0x10) != fVar1) {
      fVar2 = *(float *)(iVar6 + 0x20) + lbl_8327F894;
      *(float *)(iVar6 + 0x20) = fVar2;
      *(float *)(iVar6 + 0x10) =
           (fVar1 - *(float *)(iVar6 + 0x18)) * (fVar2 / *(float *)(iVar6 + 0x24)) +
           *(float *)(iVar6 + 0x18);
      if (*(float *)(iVar6 + 0x24) <= fVar2) {
        *(float *)(iVar6 + 0x10) = fVar1;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

