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


void fn_82B825D0(int param_1,uint *param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar7;
  ulonglong uVar6;
  
  uVar7 = *(uint *)(param_1 + 8);
  iVar2 = fn_82ABDD90(param_3,uVar7 >> 7 & 0x7f,uVar7 >> 0x13 & 7,uVar7 >> 0xe & 7);
  puVar4 = (uint *)(iVar2 + param_1 + -0x14);
  *param_2 = *puVar4;
  param_2[1] = puVar4[1];
  param_2[2] = puVar4[2];
  puVar1 = *(uint **)(param_1 + 4);
  do {
    if (puVar1 == (uint *)0x0) {
      uVar7 = param_2[1] | 0xfff;
LAB_82b827ec:
      param_2[1] = uVar7;
LAB_82b827f0:
      if ((*(uint *)(param_1 + 8) & 0x380000) != 0) {
        puVar1 = *(uint **)(param_1 + 0x2c);
        *param_2 = *puVar1 >> 0xc & 0x7e0 | *param_2 & 0xfffff81f;
        uVar7 = (*puVar1 & 0x60) << 0x19 | *param_2 & 0x3fffffff;
        *param_2 = uVar7;
        if ((*puVar1 & 0x10) != 0) {
          *param_2 = uVar7 | 0x800;
        }
      }
      if ((*(uint *)(param_1 + 8) & 0x380000) < 0x80001) {
        *param_2 = *param_2 & 0xf80fffff | 0x5f00000;
      }
      else {
        uVar6 = 0x5f - ((ulonglong)(**(uint **)(param_1 + 0x30) >> 0x11) & 0xff);
        *param_2 = (uint)(((uVar6 + ((uVar6 & 0xffffffff) / 3) * -3 & 3) << 5 |
                          (uVar6 & 0xffffffff) / 3 & 0xffffffffffffff9f) << 0x14) & 0x7f00000 |
                   *param_2 & 0xf80fffff;
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
      return;
    }
    if (puVar1[4] != 0) {
      if ((*puVar1 & 0xe000000) != 0) {
        uVar7 = *puVar1 >> 5 & 0x3f000 | *param_2 & 0xfffc0fff;
        *param_2 = uVar7;
        if ((*puVar1 & 0x10) != 0) {
          *param_2 = uVar7 | 0x40000;
        }
        uVar7 = *(uint *)(param_1 + 8) >> 1;
        uVar6 = (ulonglong)(puVar4[3] >> 0x11);
        if ((uVar7 & 1) == 0) {
          uVar3 = param_2[1] | 7;
        }
        else {
          uVar3 = param_2[1] & 0xfffffff8 | puVar4[3] >> 0x11 & 3;
        }
        param_2[1] = uVar3;
        if ((uVar7 & 2) == 0) {
          uVar3 = param_2[1] | 0x38;
        }
        else {
          uVar3 = (uint)((uVar6 & 0xc) << 1) | param_2[1] & 0xffffffc7;
        }
        param_2[1] = uVar3;
        if ((uVar7 & 4) == 0) {
          uVar3 = param_2[1] | 0x1c0;
        }
        else {
          uVar3 = (uint)((uVar6 & 0x30) << 2) | param_2[1] & 0xfffffe3f;
        }
        param_2[1] = uVar3;
        if ((uVar7 & 8) == 0) {
          uVar7 = param_2[1] | 0xe00;
        }
        else {
          uVar7 = (uint)((uVar6 & 0xc0) << 3) | uVar3 & 0xfffff1ff;
        }
        param_2[1] = uVar7;
        uVar7 = puVar4[3] >> 8 & 0xf;
        if (uVar7 != 0) {
          uVar5 = 0x1f - LZCOUNT(uVar7);
          uVar6 = uVar5 & 0xffffffff;
          if (uVar6 == 0) {
            uVar7 = param_2[1] & 0xfffffff8 | 4;
          }
          else if (uVar6 == 1) {
            uVar7 = param_2[1] & 0xffffffc7 | 0x20;
          }
          else {
            uVar5 = uVar5 & 0xffffffff;
            if (uVar5 < 3) {
              uVar7 = param_2[1] & 0xfffffe3f | 0x100;
            }
            else {
              if (uVar5 != 3) goto LAB_82b82778;
              uVar7 = param_2[1] & 0xfffff1ff | 0x800;
            }
          }
          param_2[1] = uVar7;
        }
LAB_82b82778:
        uVar7 = puVar4[3] >> 0xc & 0xf;
        if (uVar7 == 0) goto LAB_82b827f0;
        uVar5 = 0x1f - LZCOUNT(uVar7);
        uVar6 = uVar5 & 0xffffffff;
        if (uVar6 == 0) {
          uVar7 = param_2[1] & 0xfffffff8 | 5;
          goto LAB_82b827ec;
        }
        if (uVar6 == 1) {
          uVar7 = param_2[1] & 0xffffffc7 | 0x28;
          goto LAB_82b827ec;
        }
        uVar5 = uVar5 & 0xffffffff;
        if (uVar5 < 3) {
          uVar7 = param_2[1] & 0xfffffe3f | 0x140;
        }
        else {
          if (uVar5 != 3) goto LAB_82b827f0;
          uVar7 = param_2[1] & 0xfffff1ff | 0xa00;
        }
        goto LAB_82b827ec;
      }
    }
    puVar1 = (uint *)puVar1[2];
  } while( true );
}

