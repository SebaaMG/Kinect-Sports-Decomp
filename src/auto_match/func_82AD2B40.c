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
extern int fn_82ADD198();
extern int fn_82B8AC10();


void fn_82AD2B40(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  
  uVar1 = *(uint *)(param_2 + 0x14);
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3f80) == 0x3800) {
      iVar5 = fn_82ADD198(param_1,*(undefined2 *)(uVar1 + 0x12));
      uVar9 = 0;
      uVar3 = *(uint *)(param_2 + 0x14);
joined_r0x82ad2b98:
      uVar4 = uVar3;
      if ((uVar4 & 1) == 0) {
        do {
          if ((uVar4 == 0) || (uVar1 == uVar4)) break;
          if (((*(uint *)(uVar4 + 8) & 0x3f80) == 0x3800) &&
             (iVar6 = fn_82ADD198(param_1,*(undefined2 *)(uVar4 + 0x12)), iVar5 == iVar6)) {
            piVar7 = (int *)(uVar4 + 4);
            while (iVar6 = *piVar7, iVar6 != 0) {
              if (*(int *)(iVar6 + 0x10) != 0) {
                piVar8 = (int *)(*(int *)(iVar6 + 0xc) + 4);
                for (iVar2 = *piVar8; iVar2 != iVar6; iVar2 = *(int *)(iVar2 + 8)) {
                  piVar8 = (int *)(iVar2 + 8);
                }
                *piVar8 = *(int *)(iVar6 + 8);
                *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(uVar1 + 4);
                *(int *)(uVar1 + 4) = iVar6;
                *(uint *)(iVar6 + 0xc) = uVar1;
              }
              if (*piVar7 == iVar6) {
                piVar7 = (int *)(iVar6 + 8);
              }
            }
            fn_82B8AC10(param_1,uVar4,*(undefined4 *)(param_1 + 0x28c),1);
          }
          if (uVar9 == 0) {
            uVar3 = *(uint *)(param_2 + 0x14);
            if (uVar4 != (-(uint)((uVar3 & 1) == 0) & uVar3)) goto joined_r0x82ad2b98;
LAB_82ad2c9c:
            uVar3 = *(uint *)((uVar4 & 0xfffffffe) + 0x28);
            uVar9 = uVar4;
          }
          else {
            uVar3 = *(uint *)((uVar9 & 0xfffffffe) + 0x28);
            if (uVar4 == (-(uint)((uVar3 & 1) == 0) & uVar3)) goto LAB_82ad2c9c;
          }
          uVar4 = uVar3;
          if ((uVar4 & 1) != 0) break;
        } while( true );
      }
    }
    uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 0x28);
  } while( true );
}

