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
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AC6560();
extern int fn_82F68CC0();
extern int fn_82F691F0();


void fn_82B843F0(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  uVar1 = *(uint *)(param_2 + 8);
  lVar4 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
  lVar7 = lVar4;
  if ((*(uint *)(param_2 + 8) & 0x3f80) == 0x3800) {
    lVar7 = lVar4 + 4;
  }
  puVar5 = (undefined4 *)fn_82AC6560(param_1,lVar7,0x23);
  if ((*(uint *)(param_2 + 8) & 0x3f80) == 0x3800) {
    puVar5 = puVar5 + 1;
  }
  fn_82F68CC0(puVar5,param_2,lVar4);
  puVar5[1] = 0;
  puVar5[2] = puVar5[2] & 0xffbfffff;
  *puVar5 = 0;
  *(undefined2 *)((int)puVar5 + 0xe) = 0;
  puVar5[8] = 0;
  if (((~(ulonglong)*(uint *)(param_1 + 0x28) & 0xffffffff) >> 0xe & 1) != 0) {
    bVar3 = false;
    for (piVar2 = *(int **)(param_2 + 0x10); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      if (*piVar2 != 0) {
        bVar3 = true;
      }
    }
    if (bVar3) {
      puVar5[4] = 0;
      for (piVar2 = *(int **)(param_2 + 0x10); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        if (*piVar2 == 0) {
          uVar8 = 0xc;
        }
        else {
          if (*piVar2 != 1) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          uVar8 = 0x48;
        }
        iVar6 = fn_82AC6560(param_1,uVar8,0);
        fn_82F68CC0(iVar6,piVar2,uVar8);
        *(undefined4 *)(iVar6 + 4) = puVar5[4];
        puVar5[4] = iVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(puVar5 + 0xb,0,*(uint *)(param_2 + 8) >> 0x11 & 0x1c);
}

