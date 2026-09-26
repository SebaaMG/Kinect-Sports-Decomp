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
extern unsigned int *auStack_60;
extern int fn_82AA66A8();
extern int fn_82ABE9F0();
extern int fn_82ADDAA8();
extern int fn_82ADDE40();
extern int fn_82ADF910();
extern unsigned int stack0x0000002c;
extern unsigned int uStack0000002c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_82AE0148(int param_1,int param_2,int param_3,undefined8 param_4,ulonglong param_5,
                 ulonglong param_6,ulonglong param_7,ulonglong param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 uStack0000002c;
  uint auStack_60 [24];
  
  uStack0000002c = (undefined4)param_4;
  fn_82ADF910(auStack_60,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  iVar9 = param_2;
  if ((auStack_60[0] & 0xf0000) == 0) {
    if ((param_7 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    if ((param_5 & 0xffffffff) != 0) {
      uVar8 = 4;
      uVar10 = param_5;
      do {
        uVar3 = uVar8 >> 3 & 0x1ffffffc;
        uVar1 = uVar8 & 0x1f;
        uVar4 = uVar8 - 4 >> 3 & 0x1ffffffc;
        uVar2 = uVar8 - 4 & 0x1f;
        uVar7 = uVar8 - 1;
        *(uint *)((int)auStack_60 + uVar4) =
             (((2 << (uVar8 + 3 & 0x1f)) - 1U & *(uint *)((int)&stack0x0000002c + uVar3) &
              -1 << uVar1) >> uVar1) << uVar2 | *(uint *)((int)auStack_60 + uVar4);
        uVar8 = uVar8 + 8;
        *(uint *)((int)auStack_60 + uVar3) =
             (((2 << (uVar7 & 0x1f)) - 1U & *(uint *)((int)&stack0x0000002c + uVar4) & -1 << uVar2)
             >> uVar2) << uVar1 | *(uint *)((int)auStack_60 + uVar3);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    uStack0000002c = 0;
    puVar5 = (uint *)fn_82ADF910(auStack_60,param_1,param_3,param_2,0,param_5,param_6,0);
    auStack_60[0] = *puVar5;
    iVar9 = param_3;
    param_3 = param_2;
  }
  for (uVar8 = *(uint *)(iVar9 + 0xc0); (uVar8 & 7) < (auStack_60[0] >> 0x10 & 0xf);
      uVar8 = uVar8 & 7) {
    uVar6 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x2a0) << 3,0);
    *(undefined4 *)((*(uint *)(iVar9 + 0xc0) & 7) * 4 + iVar9) = uVar6;
    uVar8 = *(uint *)(iVar9 + 0xc0) + 1;
    *(uint *)(iVar9 + 0xc0) = *(uint *)(iVar9 + 0xc0) & 0xfffffff8 | uVar8 & 7;
  }
  uVar10 = 0;
  if ((*(uint *)(param_3 + 0xc0) & 7) != 0) {
    uVar8 = 0;
    do {
      if (((uint)(1 << ((uint)uVar10 & 0x3f)) & param_6) == 0) {
        fn_82ADDAA8(param_1,iVar9,
                      ((2 << (uVar8 + 3 & 0x1f)) - 1U &
                       *(uint *)((int)auStack_60 + (uVar8 >> 3 & 0x1ffffffc)) & -1 << (uVar8 & 0x1f)
                      ) >> (uVar8 & 0x1f),param_3,uVar10,param_8);
      }
      uVar10 = uVar10 + 1;
      uVar8 = uVar8 + 4;
    } while ((uVar10 & 0xffffffff) < ((ulonglong)*(uint *)(param_3 + 0xc0) & 7));
  }
  if ((param_8 & 0xff) == 0) {
    fn_82ADDE40(param_1,param_3);
  }
  return iVar9;
}

