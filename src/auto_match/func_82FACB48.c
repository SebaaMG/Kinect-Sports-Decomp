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
extern int fn_82FAE0B0();
extern int fn_82FB1410();


longlong fn_82FACB48(int param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  
  lVar8 = 0;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x158))();
  if ((uVar1 & 0xffff) != 0) {
    uVar7 = 0;
    do {
      iVar2 = fn_82FAE0B0(*(undefined4 *)(param_1 + 0x60),uVar7);
      puVar9 = *(uint **)(iVar2 + 0x98);
      if (puVar9 != *(uint **)(iVar2 + 0x9c)) {
        do {
          if ((*puVar9 == (uint)*(ushort *)(*(int *)(param_1 + 0x6c) + uVar7 * 2)) &&
             (iVar3 = fn_82FB1410(iVar2,puVar9[1]), iVar3 != 0)) {
            uVar5 = 0;
            uVar4 = (ulonglong)puVar9[2] - param_2;
            if (((*(uint *)(iVar3 + 0x14) & 0x3e000000) == 0x2000000) &&
               (((*(uint *)(iVar3 + 0x14) >> 0x1e & 1) == 0 || ((int)uVar4 < 0)))) {
              uVar5 = (ulonglong)*(uint *)(iVar3 + 0x28);
            }
            if (*(short *)(iVar3 + 0x1c) == 3) {
              uVar5 = uVar5 + 0x180;
            }
            lVar6 = uVar5 - (((uVar4 & 0xffffffff) >> 0x1f) - 1 & uVar4);
            if ((int)lVar8 < (int)lVar6) {
              lVar8 = lVar6;
            }
          }
          puVar9 = puVar9 + 6;
        } while (puVar9 != *(uint **)(iVar2 + 0x9c));
      }
      uVar7 = uVar7 + 1 & 0xffff;
    } while (uVar7 < (uVar1 & 0xffff));
  }
  return lVar8;
}

