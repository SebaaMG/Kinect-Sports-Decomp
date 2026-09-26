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
extern unsigned int *auStack_6c;
extern int fn_82F2A9C8();
extern unsigned int uStack_70;


void fn_82F079D8(int param_1,int param_2,short *param_3,int *param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int *piVar8;
  short *psVar9;
  int iVar10;
  longlong lVar7;
  longlong lVar11;
  int iVar12;
  undefined4 uStack_70;
  undefined4 auStack_6c [27];
  
  if (param_8 != 0) {
    sVar1 = *param_3;
    iVar12 = *param_4;
    piVar8 = (int *)(*(int *)(param_1 + 0x6d24) + param_7 * 0x34);
    auStack_6c[0] = 0;
    iVar6 = 0;
    uStack_70 = 0;
    uVar5 = (longlong)sVar1 - 2;
    iVar4 = *piVar8;
    iVar2 = 0;
    iVar10 = piVar8[1];
    if (0 < (longlong)uVar5) {
      psVar9 = (short *)(param_2 + -2);
      do {
        psVar9 = psVar9 + 2;
        iVar2 = iVar2 + 2;
        iVar6 = *psVar9 + iVar6 + 1;
      } while (iVar2 < sVar1 + -2);
    }
    if (1 < sVar1) {
      iVar3 = (int)*(short *)((int)(((longlong)sVar1 & 0xffffffffU) << 1) + param_2 + -2);
      iVar2 = fn_82F2A9C8(param_1,iVar3,
                                *(undefined2 *)((int)((uVar5 & 0xffffffff) << 1) + param_2),
                                *(undefined4 *)((*(int *)(param_1 + 0x4e44) + 0x1385) * 4 + param_1)
                                ,auStack_6c,&uStack_70);
      sVar1 = *(short *)(*(int *)((iVar3 + iVar6) * 4 + param_6) * 2 + param_5);
      iVar6 = (int)*(short *)((*param_3 + -2) * 2 + param_2);
      if (sVar1 < 0) {
        iVar10 = iVar6 * iVar4 - iVar10;
      }
      else {
        iVar10 = iVar6 * iVar4 + iVar10;
      }
      lVar7 = (longlong)(int)sVar1 * (longlong)(int)sVar1;
      iVar4 = (int)sVar1 + iVar10 * -0x10;
      lVar11 = (longlong)iVar4 * (longlong)iVar4;
      if (0 < (longlong)
              ((((longlong)(*(int *)(param_1 + 0x588) * *(int *)(param_1 + 0x588)) * (longlong)iVar2
                & 0xffffffU) * 0x100 - lVar7) + lVar11)) {
        iVar12 = (iVar12 - (int)lVar11) + (int)lVar7;
        *(undefined2 *)(*param_3 * 2 + param_2 + -2) = 0;
        *(undefined2 *)((*param_3 + -2) * 2 + param_2) = 0;
        *param_3 = *param_3 + -2;
      }
    }
    *param_4 = iVar12;
  }
  return;
}

