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
extern int fn_825A2410();
extern int fn_82A1DD38();


void fn_825776F8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar8 = fn_825A2410(param_1 + 0x38);
    fn_82A1DD38(uVar8,param_2,0x1c);
  }
  else {
    if (*param_2 == 0) {
      iVar9 = param_2[1];
      if (iVar9 < 0) {
        return;
      }
    }
    else {
      iVar9 = 0;
    }
    if (iVar9 < *(int *)(param_1 + 8)) {
      bVar5 = *param_2 == 0;
      uVar10 = (ulonglong)(param_2[2] == 0);
      iVar3 = param_2[6];
      if (param_2[3] != 0) {
        uVar10 = uVar10 | 2;
      }
      iVar1 = param_2[5];
      iVar2 = param_2[4];
      iVar9 = *(int *)((iVar9 + 3) * 4 + param_1);
      iVar4 = (uint)bVar5 * 0x10 + iVar9;
      uVar7 = (uint)((uVar10 & 2) << 0x1d);
      *(int *)(iVar4 + 0x10) = iVar2;
      *(int *)(iVar4 + 0x18) = iVar1;
      uVar6 = *(uint *)(iVar4 + 0xc) & 0x3fffffff;
      *(uint *)(iVar4 + 0xc) = uVar7 | (uint)((~uVar10 & 0xffffffff) << 0x1f) | uVar6;
      if (iVar3 != 0) {
        *(int *)(iVar4 + 0x14) = iVar2;
        *(uint *)(iVar4 + 0xc) = uVar7 | uVar6;
        if ((uVar10 & 2) == 0) {
          if (bVar5) {
            *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(*(int *)(iVar9 + 0x54) + 0x14c);
          }
          else {
            *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(*(int *)(iVar9 + 0x54) + 0x134);
          }
        }
        else {
          *(undefined4 *)((bVar5 + 1) * 4 + iVar9) = 0;
        }
      }
    }
  }
  return;
}

