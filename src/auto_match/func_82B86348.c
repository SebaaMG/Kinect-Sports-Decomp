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
extern int fn_82AC6560();
extern int fn_82B83B68();
extern int fn_82F6E018();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x0000002c;
extern unsigned int uStack0000002c;


uint fn_82B86348(int param_1,ulonglong param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar11;
  double dVar12;
  uint uStack0000002c;
  uint uVar10;
  
  uStack0000002c = param_4;
  uVar2 = fn_82ABDD90(param_1,0x7d,0,param_2);
  uVar3 = fn_82AC6560(param_1,uVar2,0x23);
  fn_82B83B68(uVar3,param_1,-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4),
                0x7d,0,param_2);
  if ((param_2 & 0xffffffff) != 0) {
    puVar7 = (undefined4 *)(param_3 + -4);
    puVar5 = (undefined4 *)(uVar3 + 0x28);
    uVar11 = param_2;
    do {
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = *puVar7;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if ((param_4 & 0xff) != 0) {
    *(uint *)(uVar3 + 0x14) = (param_4 & 0xff) << 2 | *(uint *)(uVar3 + 0x14) & 0xfffffc03;
  }
  uVar8 = uVar3 & 0xfffffffe;
  uVar6 = -(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4);
  *(undefined4 *)(uVar8 + 0x24) = *(undefined4 *)(uVar6 + 0x10);
  *(uint *)(*(uint *)(uVar6 + 0x10) & 0xfffffffe) = uVar8;
  *(uint *)(uVar8 + 0x28) = uVar6 - 0x14 | 1;
  *(uint *)(uVar6 + 0x10) = uVar8 + 0x28;
  if ((param_2 & 0xffffffff) != 0) {
    uVar6 = 0;
    uVar8 = 0;
    dVar12 = (double)lbl_821AAD20;
    do {
      uVar9 = 0;
      uVar1 = ((2 << (uVar8 + 1 & 0x1f)) - 1U &
               *(uint *)((int)&stack0x0000002c + (uVar8 >> 3 & 0x1ffffffc)) & -1 << (uVar8 & 0x1f))
              >> (uVar8 & 0x1f);
      if (uVar1 == 0) {
        if (dVar12 <= (double)*(float *)(uVar6 + param_3)) {
          uVar9 = 2;
        }
        if ((double)*(float *)(uVar6 + param_3) <= dVar12) {
          uVar9 = uVar9 | 1;
        }
        if ((float)(longlong)(int)*(float *)(uVar6 + param_3) == *(float *)(uVar6 + param_3)) {
          uVar9 = uVar9 | 4;
        }
        iVar4 = fn_82F6E018();
        if ((iVar4 < 1) || (2 < iVar4)) {
          uVar9 = uVar9 | 8;
        }
      }
      else {
        iVar4 = *(int *)(uVar6 + param_3);
        uVar10 = 0xc;
        if (uVar1 == 1) {
          if (-1 < iVar4) {
            uVar10 = 0xe;
            uVar9 = 0xe;
            if (0 < iVar4) goto LAB_82b8652c;
          }
          uVar9 = uVar10 | 1;
        }
        else {
          uVar9 = 0xe;
          if (iVar4 == 0) {
            uVar9 = 0xf;
          }
        }
      }
LAB_82b8652c:
      uVar9 = uVar9 << (uVar6 & 0x3f);
      if ((*(uint *)(uVar3 + 0xc) & uVar9 & 0xffff) != uVar9) {
        *(ushort *)(uVar3 + 0xe) = (ushort)*(uint *)(uVar3 + 0xc) | (ushort)uVar9;
      }
      param_2 = param_2 - 1;
      uVar8 = uVar8 + 2;
      uVar6 = uVar6 + 4;
    } while (param_2 != 0);
  }
  return uVar3;
}

