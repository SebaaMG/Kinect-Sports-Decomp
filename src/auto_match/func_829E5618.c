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
extern unsigned int lbl_82002AE0;


undefined8 fn_829E5618(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if (param_3 == *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc)) {
    iVar10 = 0;
    uVar5 = 0;
    fVar3 = lbl_82002AE0 / (float)(uint)(*(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x18));
    do {
      iVar1 = *(int *)(param_1 + 0x18);
      iVar8 = 0;
      lVar11 = 5;
      do {
        iVar9 = uVar5 + iVar8;
        iVar2 = *(int *)(param_1 + 0x14);
        iVar6 = *(int *)(param_1 + 0xc) + 1;
        iVar7 = iVar2 * iVar8 + iVar6 * iVar10 * iVar1;
        iVar6 = iVar6 * *(int *)(param_1 + 0x18) + iVar7;
        iVar8 = iVar8 + 1;
        *(float *)(iVar9 * 4 + *(int *)(param_1 + 4)) =
             (((*(float *)((iVar2 + iVar6) * 8 + param_2) - *(float *)(iVar6 * 8 + param_2)) -
              *(float *)((iVar2 + iVar7) * 8 + param_2)) + *(float *)(iVar7 * 8 + param_2)) * fVar3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      uVar5 = uVar5 + 5;
      iVar10 = iVar10 + 1;
    } while (uVar5 < 0x19);
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff8000ffff;
  }
  return uVar4;
}

