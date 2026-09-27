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
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern float lbl_8327F894;


void fn_8236AE80(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = lbl_821CC160;
  fVar5 = lbl_821CA460;
  if (*(char *)(param_1 + 0x1350) != '\0') {
    *(float *)(*(int *)(param_1 + 0x1360) + 4) = lbl_821CA460;
    iVar2 = *(int *)(param_1 + 0x1360);
    fVar3 = fVar4;
    if (*(float *)(iVar2 + 0x1c) <= fVar4) {
      fVar3 = *(float *)(iVar2 + 4) * lbl_8327F894;
    }
    fVar1 = *(float *)(param_1 + 0x1358);
    if (fVar1 <= fVar3) {
      *(float *)(param_1 + 0x1358) = fVar4;
      fVar4 = *(float *)(param_1 + 0x135c) * (fVar3 - fVar1) + *(float *)(param_1 + 0x1354);
      *(float *)(param_1 + 0x1354) = fVar4;
      if (fVar5 <= fVar4) {
        *(float *)(param_1 + 0x1354) = fVar5;
        *(undefined1 *)(param_1 + 0x1350) = 0;
      }
    }
    else {
      *(float *)(param_1 + 0x1358) = fVar1 - fVar3;
    }
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x1354);
    return;
  }
  return;
}

