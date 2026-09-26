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
extern unsigned int *auStack_1f0;
extern unsigned int *auStack_210;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82935220();
extern int fn_82935258();
extern int fn_829352D0();
extern int fn_82F691F0();
extern unsigned int uStack_1d8;
extern unsigned int uStack_1e0;
extern unsigned int uStack_200;


longlong fn_8295A528(int param_1)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar5;
  longlong lVar4;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_210 [16];
  undefined4 uStack_200;
  undefined1 auStack_1f0 [8];
  longlong lStack_1e8;
  ulonglong uStack_1e0;
  undefined4 uStack_1d8;
  
  if (*(int *)(param_1 + 0x15c) == 0) {
    uVar6 = 0x42415443;
  }
  else {
    uVar6 = 0x464e4946;
  }
  fn_82935220(auStack_210,uVar6);
  uStack_1d8 = 0;
  lVar12 = 0;
  uStack_200 = 0;
  lStack_1e8 = (ulonglong)*(uint *)(param_1 + 200) << 0x20;
  uStack_1e0 = (ulonglong)*(uint *)(param_1 + 0xcc);
  lVar3 = fn_829352D0(auStack_210,auStack_1f0,0x1c,1,0,3);
  if (-1 < lVar3) {
    uVar13 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar5 = 0;
    if (*(uint *)(param_1 + 8) != 0) {
      iVar8 = 0;
      do {
        puVar2 = *(uint **)(*(int *)(param_1 + 0x14) + iVar8);
        if ((*puVar2 & 0x10000000) == 0) {
          uVar1 = *(uint *)(*(int *)(puVar2[1] * 4 + *(int *)(param_1 + 0x10)) + 4);
          if ((uVar1 & 0x200) != 0) {
            if ((uVar1 & 0x100) == 0) {
              uVar11 = (ulonglong)puVar2[3];
              if ((uVar1 & 0x80) == 0) {
                if ((uVar1 & 0x2000) == 0) {
                  if ((uVar1 & 0x40000) == 0) {
                    if ((uVar10 & 0xffffffff) <= uVar11) {
                      uVar10 = uVar11 + 1;
                    }
                  }
                  else if ((uVar7 & 0xffffffff) <= uVar11) {
                    uVar7 = uVar11 + 1;
                  }
                }
                else if ((uVar13 & 0xffffffff) <= uVar11) {
                  uVar13 = uVar11 + 1;
                }
              }
              else if ((uVar9 & 0xffffffff) <= uVar11) {
                uVar9 = uVar11 + 1;
              }
            }
          }
        }
        uVar5 = uVar5 + 1;
        iVar8 = iVar8 + 4;
      } while (uVar5 < *(uint *)(param_1 + 8));
    }
    lVar3 = (uVar7 + uVar9 + uVar10 + uVar13 & 0x3fffffff) << 2;
    lVar12 = fn_8265C940(lVar3,0x24810000);
    if (lVar12 != 0) {
      lVar4 = fn_8265C940(lVar3,0x24810000);
      uStack_200 = (undefined4)lVar4;
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar12,0,lVar3);
      }
    }
    lVar3 = -0x7ff8fff2;
  }
  fn_8265C990(0,0x24810000);
  fn_8265C990(lVar12,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(uStack_200,0x24810000);
  fn_82935258(auStack_210);
  return lVar3;
}

