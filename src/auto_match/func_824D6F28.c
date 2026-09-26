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
extern unsigned int lbl_821CC160;


undefined8 fn_824D6F28(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  
  iVar2 = *(int *)(param_1 + 0x100);
  iVar3 = *(int *)(param_1 + 0x104);
  bVar5 = false;
  bVar6 = false;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x44) != 0)) {
    bVar5 = true;
    *(undefined4 *)(iVar2 + 0x44) = 0;
  }
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x44) != 0)) {
    bVar6 = true;
    *(undefined4 *)(iVar3 + 0x44) = 0;
  }
  if ((!bVar5) && (!bVar6)) {
    return 0;
  }
  fVar4 = lbl_821CC160;
  if (*(int *)(param_1 + 0x100) != 0) {
    fVar4 = *(float *)(*(int *)(param_1 + 0x100) + 0x48);
  }
  fVar1 = lbl_821CC160;
  if (*(int *)(param_1 + 0x104) != 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x104) + 0x48);
  }
  if (bVar5) {
    if (!bVar6) {
      *param_2 = fVar4;
      return 1;
    }
    if (ABS(fVar1) < ABS(fVar4)) {
      fVar1 = fVar4;
    }
  }
  else if (!bVar6) {
    return 1;
  }
  *param_2 = fVar1;
  return 1;
}

