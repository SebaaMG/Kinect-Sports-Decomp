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
extern int fn_82ABDD90();
extern int fn_82ABE5F8();
extern int fn_82AD20C0();
extern int fn_82AF04D0();
extern int fn_82B25248();
extern int fn_82B83298();
extern int fn_82B8F3D8();


void fn_82B8AC10(int param_1,int *param_2,ulonglong param_3,char param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  
  if (((param_2[2] & 0x3f80U) != 16000) || ((*(uint *)(param_1 + 0x2c) & 0x80000) == 0)) {
    if (param_2[1] != 0) {
      fn_82AF04D0(param_2,param_1);
      fn_82B83298(param_1,param_2);
    }
    if (((uint)param_2[2] >> 0x19 & 1) != 0) {
LAB_82b8ac78:
      puVar9 = (uint *)*param_2;
      do {
        if (puVar9 == (uint *)0x0) {
          puVar7 = (undefined4 *)(param_2[7] + 0x5c);
          lVar10 = 4;
          do {
            if ((int *)*puVar7 == param_2) {
              *puVar7 = 0;
            }
            puVar7 = puVar7 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          param_2[2] = param_2[2] & 0xfdffffff;
          break;
        }
        uVar6 = *puVar9;
        if ((uVar6 & 0x40000000) == 0) {
          bVar3 = true;
          if ((uVar6 & 0xe000000) != 0) goto LAB_82b8ac9c;
        }
        else {
LAB_82b8ac9c:
          bVar3 = false;
        }
        if (bVar3) {
          bVar3 = true;
          if ((uVar6 & 0x1ffe000) == 0) goto LAB_82b8acb4;
        }
        else {
LAB_82b8acb4:
          bVar3 = false;
        }
        if (bVar3) goto LAB_82b8acc8;
        puVar9 = (uint *)puVar9[1];
      } while( true );
    }
LAB_82b8ad1c:
    iVar1 = *param_2;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0xc);
      if ((param_3 & 0xffffffff) != 0) {
        fn_82B25248(param_1,iVar2,param_3);
      }
      fn_82AD20C0(param_2,iVar1,param_1);
      if (((param_3 & 0xffffffff) != 0) && ((param_2[2] & 0x3f80U) == 0x3700)) {
        puVar9 = *(uint **)(iVar2 + 4);
        for (puVar8 = puVar9; puVar8 != (uint *)0x0; puVar8 = (uint *)puVar8[2]) {
          uVar6 = puVar8[4];
          if (((uVar6 != 0) && ((*(uint *)(uVar6 + 8) & 0x3f80) == 0x3700)) &&
             ((*puVar8 & 0xe000000) != 0)) goto LAB_82b8ae10;
        }
        uVar6 = 0;
LAB_82b8ae10:
        if (uVar6 == 0) {
          for (; puVar9 != (uint *)0x0; puVar9 = (uint *)puVar9[2]) {
            if (puVar9[4] != 0) {
              fn_82B25248(param_1,puVar9[4],param_3);
            }
          }
        }
      }
      goto LAB_82b8ad1c;
    }
    if (param_4 != '\0') {
      uVar6 = (uint)param_2 & 0xfffffffe;
      *(uint *)((*(uint *)(uVar6 + 0x28) & 0xfffffffe) + 0x24) = *(uint *)(uVar6 + 0x24);
      *(undefined4 *)(*(uint *)(uVar6 + 0x24) & 0xfffffffe) = *(undefined4 *)(uVar6 + 0x28);
    }
    uVar6 = param_2[2];
    uVar4 = uVar6 >> 7 & 0x7f;
    if ((uVar4 < 0x70) || ((0x71 < uVar4 && (uVar4 != 0x7d)))) {
      if ((*(uint *)(param_1 + 0x28) & 0x1000) == 0) {
        uVar5 = fn_82ABDD90(param_1,uVar4,uVar6 >> 0x13 & 7,uVar6 >> 0xe & 7);
        fn_82ABE5F8(param_1,param_2,uVar5,0x23);
      }
      else {
        param_2[2] = uVar6 & 0xffffc07f | 0x3980;
        param_2[8] = *(int *)(param_1 + 0x21c);
        *(int **)(param_1 + 0x21c) = param_2;
      }
    }
    else {
      param_2[2] = uVar6 & 0xffffc07f | 0x3980;
    }
  }
  return;
LAB_82b8acc8:
  fn_82B8F3D8(param_2[7],((ulonglong)(uVar6 >> 0xd) & 0xfff) - 1,param_2,param_1);
  goto LAB_82b8ac78;
}

