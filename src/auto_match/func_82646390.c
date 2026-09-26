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
extern int fn_82637398();
extern int fn_82639238();
extern int fn_82639EA8();
extern int fn_8263E9F0();
extern int fn_82643B08();
extern int fn_82645110();
extern int fn_826458A0();
extern int fn_82645EA8();
extern int fn_8264F1D8();
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined8
fn_82646390(undefined8 param_1,int param_2,ulonglong param_3,undefined4 *param_4,ulonglong param_5
             )

{
  uint uVar1;
  bool bVar2;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar3;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_64;
  
  if (param_4 == (undefined4 *)0x0) {
    if ((param_5 & 0xffffffff) != 0) {
      param_4 = (undefined4 *)(param_2 + 0x3280);
      goto LAB_826463dc;
    }
  }
  else {
LAB_826463dc:
    if (((param_5 & 0xffffffff) != 0) && (uVar9 = 0, *(int *)(param_2 + 0x327c) != 0)) {
      uVar10 = 0;
      do {
        uStack_70 = *param_4;
        uStack_6c = param_4[1];
        uStack_68 = param_4[2];
        uStack_64 = param_4[3];
        uVar1 = *(uint *)(*(int *)(param_2 + 0x3264) + 0x24);
        if (uStack_68 == (uVar1 >> 0x12) + 1) {
          uStack_68 = uStack_68 + 7 & 0xfffffff8;
        }
        if (uStack_64 == (uVar1 >> 3 & 0x7fff) + 1) {
          uStack_64 = uStack_64 + 7 & 0xfffffff8;
        }
        fn_82645EA8(param_2,3 << (uVar10 & 0x3f));
        fn_82639238(param_2,(~(ulonglong)*(byte *)(param_2 + 0x2abf) & 0xffffffff) >> 4 & 2);
        if (uVar9 < *(int *)(param_2 + 0x327c) - 1U) {
          uVar6 = param_3;
          if (*(int *)(param_2 + 0x3148) != 0) {
            uVar6 = param_3 | 0x100;
          }
          if (*(int *)(param_2 + 0x3158) != 0) {
            uVar6 = uVar6 | 0x200;
          }
          fn_8263E9F0((double)*(float *)(param_2 + 0x3450),param_2,uVar6,&uStack_70,0,0,
                            param_5,param_4,0);
        }
        else {
          fn_8263E9F0(param_1,param_2,param_3,&uStack_70,0,0,param_5,param_4,0);
        }
        uVar9 = uVar9 + 1;
        param_4 = param_4 + 4;
        uVar10 = uVar10 + 2;
      } while (uVar9 < *(uint *)(param_2 + 0x327c));
    }
  }
  fn_82645EA8(param_2,0);
  fn_82639238(param_2,2);
  uVar9 = 0x1000000 << (*(uint *)(param_2 + 0x2c3c) & 0x3f);
  if ((*(uint *)(param_2 + 0x3434) & 0x3f000000) != 0) {
    uVar9 = *(uint *)(param_2 + 0x3434) & 0x3f000000;
  }
  if (*(int *)(param_2 + 0x327c) == 1) {
    fn_82645110(param_2);
  }
  else {
    fn_82645EA8(param_2,0xffffffff80000000);
    uVar10 = *(uint *)(param_2 + 0x3500);
    if (uVar10 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = ((ulonglong)(uVar10 >> 0x14) + 0x200 & 0x1000) + ((ulonglong)uVar10 & 0x1fffffff) +
              -0x40000000;
    }
    fn_826458A0(param_2,uVar9,0xffffffff8264ef50,lVar7);
    fn_82645EA8(param_2,0);
    fn_82645110(param_2);
    puVar4 = *(undefined4 **)(param_2 + 0x350c);
    if (*(undefined4 **)(param_2 + 0x3510) < puVar4 + 2) {
      puVar4 = (undefined4 *)fn_82643B08(param_2 + 0x3500);
    }
    *puVar4 = 0x88000000;
    puVar4[1] = 0x80000000;
    *(undefined4 **)(param_2 + 0x350c) = puVar4 + 2;
    puVar4 = *(undefined4 **)(param_2 + 0x350c);
    if (*(undefined4 **)(param_2 + 0x3510) < puVar4 + 3) {
      puVar4 = (undefined4 *)fn_82643B08(param_2 + 0x3500);
    }
    *puVar4 = 0x89000000;
    uVar10 = *(uint *)(param_2 + 0x3470);
    if (uVar10 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = ((uVar10 >> 0x14) + 0x200 & 0x1000) + (uVar10 & 0x1fffffff) + -0x40000000;
    }
    puVar4[1] = iVar5;
    uVar10 = *(uint *)(param_2 + 0x34e8);
    if (uVar10 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = ((uVar10 >> 0x14) + 0x200 & 0x1000) + (uVar10 & 0x1fffffff) + -0x40000000;
    }
    puVar4[2] = iVar5;
    *(undefined4 **)(param_2 + 0x350c) = puVar4 + 3;
  }
  puVar4 = *(undefined4 **)(param_2 + 0x350c);
  if (*(undefined4 **)(param_2 + 0x3510) < puVar4 + 1) {
    puVar4 = (undefined4 *)fn_82643B08(param_2 + 0x3500);
  }
  *puVar4 = 0x87000000;
  bVar8 = *(byte *)(param_2 + 0x2abc);
  *(undefined4 **)(param_2 + 0x350c) = puVar4 + 1;
  *(undefined4 *)(param_2 + 0x3264) = 0;
  *(undefined4 *)(param_2 + 0x325c) = 0;
  *(byte *)(param_2 + 0x2abc) = bVar8 & 0xdf;
  *(byte *)(param_2 + 0x2abf) = *(byte *)(param_2 + 0x2abf) & 0xcf;
  if ((((bVar8 & 8) == 0) && ((bVar8 & 4) == 0)) && (*(char *)(param_2 + 0x304b) == '\0')) {
    if ((bVar8 & 0x10) == 0) {
      if (((((*(byte *)(param_2 + 0x2abc) & 0x20) == 0) ||
           ((*(int *)(param_2 + 0x3268) != *(int *)(param_2 + 0x3148) &&
            (*(int *)(param_2 + 0x3148) != 0)))) ||
          ((*(int *)(param_2 + 0x326c) != *(int *)(param_2 + 0x314c) &&
           (*(int *)(param_2 + 0x314c) != 0)))) ||
         ((((*(int *)(param_2 + 0x3270) != *(int *)(param_2 + 0x3150) &&
            (*(int *)(param_2 + 0x3150) != 0)) ||
           ((*(int *)(param_2 + 0x3274) != *(int *)(param_2 + 0x3154) &&
            (*(int *)(param_2 + 0x3154) != 0)))) ||
          ((*(int *)(param_2 + 0x3278) != *(int *)(param_2 + 0x3158) &&
           (*(int *)(param_2 + 0x3158) != 0)))))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
    bVar8 = 1;
    if (bVar2) goto LAB_826467e4;
  }
  bVar8 = 0;
LAB_826467e4:
  *(undefined4 *)(param_2 + 0x3258) = 0;
  *(undefined4 *)(param_2 + 0x3254) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x2ab4) = 0;
  *(undefined4 *)(param_2 + 0x2ab8) = 0;
  *(byte *)(param_2 + 0x2abc) = bVar8 | *(byte *)(param_2 + 0x2abc) & 0xfe;
  iVar5 = fn_8264F1D8(param_2,uVar9);
  fn_82639EA8(param_2,0xffffffff821cc030);
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    fn_82637398(param_2,0);
    uVar3 = 0xffffffff8007000e;
  }
  return uVar3;
}

