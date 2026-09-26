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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F691F0();


undefined8 fn_82954D90(int param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x10) + iVar5);
      uVar1 = *(uint *)(iVar2 + 4);
      *(undefined4 *)(iVar2 + 0x10) = 0;
      if ((uVar1 & 0x400) == 0) {
        *(undefined4 *)(iVar2 + 8) = 0;
        uVar7 = 0;
        if (*(int *)(param_1 + 8) != 0) {
          iVar8 = 0;
          do {
            iVar3 = *(int *)(*(int *)(param_1 + 0x14) + iVar8);
            if ((*(uint *)(iVar3 + 4) == uVar6) &&
               (uVar9 = *(int *)(iVar3 + 0xc) + 1, *(uint *)(iVar2 + 8) < uVar9)) {
              *(uint *)(iVar2 + 8) = uVar9;
            }
            uVar7 = uVar7 + 1;
            iVar8 = iVar8 + 4;
          } while (uVar7 < *(uint *)(param_1 + 8));
        }
        if (((uVar1 & 0x100) != 0) && ((uVar1 & 0x800) == 0)) {
          *(uint *)(iVar2 + 4) = uVar1 & 0xffffffbf;
        }
        uVar1 = *(uint *)(iVar2 + 4);
        if ((uVar1 & 0x10) != 0) {
          if (((uVar1 & 0x200) == 0) && ((uVar1 & 0x800) == 0)) {
            *(uint *)(iVar2 + 4) = uVar1 & 0xffffffbf;
          }
        }
        uVar1 = *(uint *)(iVar2 + 4);
        if ((uVar1 & 0x80) != 0) {
          if (((uVar1 & 0x800) == 0) && (*(int *)(iVar2 + 8) == 1)) {
            *(uint *)(iVar2 + 4) = uVar1 & 0xffffffbf;
          }
        }
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar6 < *(uint *)(param_1 + 4));
  }
  lVar4 = fn_8265C940(param_3 * 0xc,0x24810000);
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(lVar4,0,param_3 * 0xc);
  }
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  return 0xffffffff8007000e;
}

