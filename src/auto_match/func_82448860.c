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
extern int fn_824486C0();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CC160;


undefined8 fn_82448860(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  double extraout_f1;
  
  iVar3 = fn_824486C0();
  fVar2 = lbl_82192734;
  if ((-1 < iVar3) &&
     (dVar8 = (double)(*(float *)(*(int *)(param_1 + 0x48) + 0x18) * (float)(longlong)iVar3 +
                      *(float *)(*(int *)(param_1 + 0x48) + 0x14)), extraout_f1 < dVar8)) {
    fVar2 = (float)(dVar8 - extraout_f1);
  }
  iVar3 = *(int *)(param_1 + 0x48);
  lVar4 = (ulonglong)*(uint *)(iVar3 + 0x1c) - 1;
  fVar1 = lbl_82192734;
  if (-1 < lVar4) {
    do {
      dVar8 = (double)(*(float *)(iVar3 + 0x18) * (float)(longlong)(int)lVar4 +
                      *(float *)(iVar3 + 0x14));
      if (dVar8 < extraout_f1) {
        fVar1 = (float)(extraout_f1 - dVar8);
        break;
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  bVar6 = false;
  bVar7 = false;
  if (lbl_821CC160 < fVar2) {
    bVar6 = fVar2 < *(float *)(iVar3 + 0x28);
  }
  if (lbl_821CC160 < fVar1) {
    bVar7 = fVar1 < *(float *)(*(int *)(param_1 + 0x48) + 0x2c) *
                    *(float *)(*(int *)(param_1 + 0x48) + 0x28);
  }
  if ((bVar6) || (uVar5 = 0, bVar7)) {
    uVar5 = 1;
  }
  return uVar5;
}

