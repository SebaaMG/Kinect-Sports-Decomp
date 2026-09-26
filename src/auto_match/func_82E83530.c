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
extern int fn_82F65350();
extern unsigned int lbl_8323FF50;


undefined8 fn_82E83530(int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar6;
  ulonglong uVar5;
  int *piVar7;
  
  bVar2 = false;
  if ((*(int *)(param_1 + 0x76c8) == 0) || (*(int *)(param_1 + 0x76e0) != 0)) {
    iVar6 = *(int *)(param_1 + 0x7b38);
    if (iVar6 != 0) {
      if (*(int *)(param_1 + 0xaf4) != 0) {
        return 0;
      }
      if (iVar6 != 0) goto LAB_82e83594;
    }
    if (*(int *)(param_1 + 0xaf0) == 0) {
LAB_82e83594:
      if ((*(int *)(param_1 + 4) == 8) &&
         ((*(int *)(param_1 + 0x844) != 0 || (*(int *)(param_1 + 0x1a74) != 0)))) {
        if ((*(int *)(param_1 + 0x6d54) == 0) || (iVar6 == 0)) {
          iVar6 = *(int *)(param_1 + 0xaf0);
        }
        else {
          iVar6 = *(int *)(param_1 + 0xaf4);
        }
        if ((iVar6 == 0) && ((*(uint *)(param_1 + 0x1e4c) & 1) == 1)) {
          uVar3 = fn_82F65350();
          iVar6 = 1;
          *(uint *)(param_1 + 0x36c) =
               uVar3 + (((int)uVar3 >> 6) + (uint)((int)uVar3 < 0 && (uVar3 & 0x3f) != 0)) * -0x40 +
               0x40;
          if (1 < *(int *)(param_1 + 0x4ec)) {
            piVar7 = (int *)(param_1 + 0x36c);
            do {
              iVar1 = *piVar7;
              iVar4 = fn_82F65350();
              uVar5 = (longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f);
              iVar6 = iVar6 + 1;
              uVar5 = (uVar5 & 0xffffffff) + ((uVar5 & 0xffffffff) >> 0x1f);
              piVar7 = piVar7 + 1;
              *piVar7 = (iVar4 - ((int)uVar5 + (int)((uVar5 & 0xffffffff) << 1))) + iVar1 + 1;
            } while (iVar6 < *(int *)(param_1 + 0x4ec));
          }
          bVar2 = true;
        }
      }
      if ((lbl_8323FF50 < 1) || (*(longlong *)(param_1 + 0x2e0) != 1)) {
        if ((*(int *)(param_1 + 0x1a78) != 0) && (*(int *)(param_1 + 0x1a84) != 0)) {
          *(undefined4 *)(param_1 + 0x1a84) = 0;
          return 1;
        }
        if (((*(int *)(param_1 + 0x7818) == 0) && (!bVar2)) && (*(int *)(param_1 + 0x77ec) == 0)) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

