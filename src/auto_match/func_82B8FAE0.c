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
extern int fn_8265C9E0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005328;


undefined8 fn_82B8FAE0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar6;
  undefined8 uVar5;
  int iVar7;
  longlong lVar8;
  
  iVar6 = fn_8265C9E0(0x1000);
  *(int *)(param_1 + 0x38) = iVar6;
  fVar4 = lbl_82005328;
  uVar3 = lbl_82002AE0;
  if (iVar6 == 0) {
    uVar5 = 0xffffffff8007000e;
  }
  else {
    iVar6 = 0;
    if (*(int *)(param_2 + 0x50) == 0) {
      lVar8 = 0x100;
      do {
        *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x38) + 0xc) = uVar3;
        *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x38) + 8) = uVar3;
        *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x38) + 4) = uVar3;
        *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x38)) = uVar3;
        iVar6 = iVar6 + 0x10;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    else {
      iVar7 = 0;
      lVar8 = 0x100;
      do {
        *(float *)(iVar7 + *(int *)(param_1 + 0x38)) =
             (float)*(byte *)(*(int *)(param_2 + 0x50) + iVar6) * fVar4;
        *(float *)(iVar7 + *(int *)(param_1 + 0x38) + 4) =
             (float)*(byte *)(*(int *)(param_2 + 0x50) + iVar6 + 1) * fVar4;
        *(float *)(iVar7 + *(int *)(param_1 + 0x38) + 8) =
             (float)*(byte *)(*(int *)(param_2 + 0x50) + iVar6 + 2) * fVar4;
        iVar1 = *(int *)(param_2 + 0x50) + iVar6;
        iVar2 = iVar7 + *(int *)(param_1 + 0x38);
        iVar6 = iVar6 + 4;
        iVar7 = iVar7 + 0x10;
        *(float *)(iVar2 + 0xc) = (float)*(byte *)(iVar1 + 3) * fVar4;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    uVar5 = 0;
  }
  return uVar5;
}

