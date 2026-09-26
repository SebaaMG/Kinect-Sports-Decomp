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
extern int fn_82B81860();


void fn_82B82900(uint param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  
  uVar9 = *(uint *)(param_1 + 8) >> 7 & 0x7f;
  puVar10 = (uint *)0x0;
  uVar6 = 0xe4;
  puVar5 = (uint *)0x0;
  if (((uVar9 == 0x61) || (uVar9 == 99)) || (bVar3 = false, uVar9 == 100)) {
    bVar3 = true;
  }
  if (bVar3) {
    uVar9 = *(uint *)(param_1 + 8);
    iVar4 = fn_82ABDD90(param_3,uVar9 >> 7 & 0x7f,uVar9 >> 0x13 & 7,uVar9 >> 0xe & 7);
    puVar5 = (uint *)(iVar4 + (param_1 - 0x18));
    *param_2 = *puVar5;
    param_2[1] = puVar5[1];
    param_2[2] = puVar5[2];
    uVar6 = (ulonglong)*(byte *)((int)puVar5 + 0xe);
  }
  else {
    uVar9 = *param_2;
    *param_2 = uVar9 | 0x80000;
    param_2[1] = param_2[1] | 0xf1ff000;
    uVar7 = *(uint *)(param_1 + 8) >> 7 & 0x7f;
    if (uVar7 == 0x62) {
      uVar9 = uVar9 & 0xffffffe0 | 0x80018;
    }
    else if (uVar7 == 0x65) {
      uVar9 = uVar9 & 0xffffffe0 | 0x80019;
    }
    else {
      if (uVar7 != 0x66) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(*(undefined4 *)(*(int *)(param_1 & 0xfffff000) + 0x94),0x12c0);
      }
      uVar9 = uVar9 & 0xffffffe0 | 0x8001a;
    }
    *param_2 = uVar9;
  }
  if ((*(uint *)(param_1 + 8) & 0x380000) < 0x80001) {
    puVar1 = *(uint **)(param_1 + 0x2c);
  }
  else {
    puVar10 = *(uint **)(param_1 + 0x2c);
    puVar1 = *(uint **)(param_1 + 0x30);
  }
  puVar2 = *(uint **)(param_1 + 4);
  do {
    if (puVar2 == (uint *)0x0) {
      uVar9 = param_2[1] | 0xfff;
LAB_82b82c04:
      param_2[1] = uVar9;
LAB_82b82c08:
      if (puVar1 != (uint *)0x0) {
        *param_2 = *puVar1 >> 0xc & 0x7e0 | *param_2 & 0xfffff81f;
        if ((*puVar1 & 0xe) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(*(undefined4 *)(*(int *)(param_1 & 0xfffff000) + 0x94),0x12c0);
        }
        if ((*puVar1 & 0x10) != 0) {
          *param_2 = *param_2 | 0x800;
        }
        *param_2 = (*puVar1 >> 5) << 0x1a | *param_2 & 0x3ffffff;
      }
      if (puVar10 != (uint *)0x0) {
        uVar9 = (*puVar10 & 0x3e0000) << 3;
        *param_2 = uVar9 | *param_2 & 0xfe0fffff;
        if ((((*(uint *)(param_3 + 0x30) & 0xffff0000) != 0xffff0000) && (0x13fffff < uVar9)) &&
           (*(int *)(param_3 + 0x38) != 0)) {
          *(undefined4 *)(*(int *)(param_3 + 0x38) + 0x1c) = 1;
        }
      }
      if ((*(uint *)(*(int *)(param_1 + 0x1c) + 0x4c) >> 0x16 & 1) == 0) {
        param_2[2] = (*(uint *)(param_1 + 8) & 0x40000) << 0xd | param_2[2] & 0x7fffffff;
        param_2[1] = (*(uint *)(param_1 + 8) & 0x20000) << 0xe | param_2[1] & 0x7fffffff;
      }
      else {
        param_2[1] = param_2[1] | 0x80000000;
        param_2[2] = (*(uint *)(*(int *)(param_1 + 0x1c) + 0x4c) >> 0x17) << 0x1f |
                     param_2[2] & 0x7fffffff;
      }
      fn_82B81860(param_3,param_1,param_2,1);
      return;
    }
    if (puVar2[4] != 0) {
      if ((*puVar2 & 0xe000000) != 0) {
        *param_2 = *puVar2 >> 5 & 0x3f000 | *param_2 & 0xfffc0fff;
        if ((*puVar2 & 9) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(*(undefined4 *)(*(int *)(param_1 & 0xfffff000) + 0x94),0x12c0);
        }
        if ((*puVar2 & 0x10) != 0) {
          *param_2 = *param_2 | 0x40000;
        }
        uVar9 = *(uint *)(param_1 + 8) >> 1;
        if ((uVar9 & 1) == 0) {
          uVar7 = param_2[1] | 7;
        }
        else {
          uVar7 = param_2[1] & 0xfffffff8 | (uint)uVar6 & 3;
        }
        param_2[1] = uVar7;
        if ((uVar9 & 2) == 0) {
          uVar7 = param_2[1] | 0x38;
        }
        else {
          uVar7 = (uint)(uVar6 << 1) & 0x18 | param_2[1] & 0xffffffc7;
        }
        param_2[1] = uVar7;
        if ((uVar9 & 4) == 0) {
          uVar7 = param_2[1] | 0x1c0;
        }
        else {
          uVar7 = (uint)((uVar6 & 0x30) << 2) | param_2[1] & 0xfffffe3f;
        }
        param_2[1] = uVar7;
        if ((uVar9 & 8) == 0) {
          uVar7 = uVar7 | 0xe00;
        }
        else {
          uVar7 = (uint)(uVar6 << 3) & 0x600 | uVar7 & 0xfffff1ff;
        }
        param_2[1] = uVar7;
        if (puVar5 == (uint *)0x0) goto LAB_82b82c08;
        if ((puVar5[3] & 0xf) != 0) {
          uVar8 = 0x1f - LZCOUNT(puVar5[3] & 0xf);
          uVar6 = uVar8 & 0xffffffff;
          if (uVar6 == 0) {
            uVar9 = param_2[1] & 0xfffffff8 | 4;
          }
          else if (uVar6 == 1) {
            uVar9 = param_2[1] & 0xffffffc7 | 0x20;
          }
          else {
            uVar8 = uVar8 & 0xffffffff;
            if (uVar8 < 3) {
              uVar9 = param_2[1] & 0xfffffe3f | 0x100;
            }
            else {
              if (uVar8 != 3) goto LAB_82b82b90;
              uVar9 = param_2[1] & 0xfffff1ff | 0x800;
            }
          }
          param_2[1] = uVar9;
        }
LAB_82b82b90:
        uVar9 = puVar5[3] >> 4 & 0xf;
        if (uVar9 == 0) goto LAB_82b82c08;
        uVar8 = 0x1f - LZCOUNT(uVar9);
        uVar6 = uVar8 & 0xffffffff;
        if (uVar6 == 0) {
          uVar9 = param_2[1] & 0xfffffff8 | 5;
          goto LAB_82b82c04;
        }
        if (uVar6 == 1) {
          uVar9 = param_2[1] & 0xffffffc7 | 0x28;
          goto LAB_82b82c04;
        }
        uVar8 = uVar8 & 0xffffffff;
        if (uVar8 < 3) {
          uVar9 = param_2[1] & 0xfffffe3f | 0x140;
        }
        else {
          if (uVar8 != 3) goto LAB_82b82c08;
          uVar9 = param_2[1] & 0xfffff1ff | 0xa00;
        }
        goto LAB_82b82c04;
      }
    }
    puVar2 = (uint *)puVar2[2];
  } while( true );
}

