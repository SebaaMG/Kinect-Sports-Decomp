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
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern int fn_8223E2E8();
extern int fn_8223E810();
extern int fn_82F64020();
extern unsigned int lbl_82195518;
extern unsigned int lbl_82195520;
extern unsigned int lbl_82195AF0;
extern unsigned int lbl_82195AF8;
extern unsigned int lbl_82195B00;
extern unsigned int lbl_82195B08;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
fn_8223E8B0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [208];
  
  lVar2 = *(longlong *)(param_5 + 0x18);
  if ((lVar2 < 1) && ((*(uint *)(param_5 + 0x14) & 0x2000) == 0)) {
    lVar2 = 6;
  }
  iVar3 = 0x24;
  if (lVar2 < 0x25) {
    iVar3 = (int)lVar2;
  }
  uVar4 = 0;
  lVar2 = lVar2 - iVar3;
  uVar5 = 0;
  if (((*(uint *)(param_5 + 0x14) & 0x3000) == 0x2000) && (param_1 * lbl_82195520 != param_1)) {
    bVar6 = param_1 < lbl_82195518;
    if (bVar6) {
      param_1 = -param_1;
    }
    for (; (lbl_82195AF0 <= param_1 && ((uVar4 & 0xffffffff) < 5000)); uVar4 = uVar4 + 10) {
      param_1 = param_1 * lbl_82195AF8;
    }
    if (lbl_82195518 < param_1) {
      for (; ((9 < lVar2 && (param_1 <= lbl_82195B00)) && ((uVar5 & 0xffffffff) < 5000));
          uVar5 = uVar5 + 10) {
        lVar2 = lVar2 + -10;
        param_1 = param_1 * lbl_82195B08;
      }
    }
    if (bVar6) {
      param_1 = -param_1;
    }
  }
  uVar1 = fn_8223E810(param_3,auStack_e0,0);
  fn_82F64020(param_1,auStack_d0,0x6c,uVar1,iVar3,param_1);
  fn_8223E2E8(param_2,param_3,param_4,param_5,param_6,auStack_d0,uVar4,uVar5);
  return param_2;
}

