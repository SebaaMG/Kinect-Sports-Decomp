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
extern int fn_8267B890();
extern int fn_826809F0();
extern int fn_82F691F0();
extern int fn_82F6A530();
extern int fn_82F6A57C();
extern int fn_82F6B2A8();


void fn_8276F9E8(undefined8 param_1,int *param_2,ulonglong param_3)

{
  int iVar2;
  ulonglong uVar1;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  
  iVar2 = fn_82F6A530();
  if ((param_3 & 0xffffffff) != 0) {
    uVar5 = 0;
    uVar3 = 0;
    uVar4 = 0;
    if (param_2[1] != 0) {
      iVar6 = 0;
      do {
        iVar7 = *param_2 + iVar6;
        if (*(int *)(iVar7 + 0xc) == 0) {
          dVar9 = (double)fn_82F6B2A8((double)*(float *)(iVar7 + 0x18));
          if ((int)uVar5 < (int)dVar9) {
            dVar9 = (double)fn_82F6B2A8((double)*(float *)(iVar7 + 0x18));
            uVar5 = (uint)dVar9;
          }
          dVar9 = (double)fn_82F6B2A8((double)*(float *)(iVar7 + 0x1c));
          if ((int)uVar3 < (int)dVar9) {
            dVar9 = (double)fn_82F6B2A8((double)*(float *)(iVar7 + 0x1c));
            uVar3 = (uint)dVar9;
          }
        }
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + 0x28;
      } while (uVar4 < (uint)param_2[1]);
    }
    uVar4 = *(uint *)(iVar2 + 0x14);
    uVar8 = *(uint *)(iVar2 + 0x18);
    if ((uVar5 <= uVar4 >> 1) && (uVar4 = 1, 1 < uVar5)) {
      do {
        uVar4 = uVar4 << 1;
      } while (uVar4 < uVar5);
    }
    if ((uVar3 <= uVar8 >> 1) && (uVar8 = 1, 1 < uVar3)) {
      do {
        uVar8 = uVar8 << 1;
      } while (uVar8 < uVar3);
    }
    uVar1 = fn_8267B890(*(undefined4 *)(iVar2 + 0x2c),0x30,0);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_826809F0(uVar1,9,uVar4,uVar8);
    }
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(undefined4 *)(iVar2 + 0x18),0,(longlong)(int)uVar8 * (longlong)(int)uVar4);
  }
  fn_82F6A57C();
  return;
}

