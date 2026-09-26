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
extern int fn_82F58C88();
extern int fn_82F593C8();
extern int fn_82F593D8();
extern int fn_82F593E8();
extern int fn_82F5D068();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;


/* WARNING: Removing unreachable block (ram,0x82f58e38) */
/* WARNING: Removing unreachable block (ram,0x82f58e44) */

void fn_82F58D40(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  ulonglong param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar6;
  undefined8 uVar5;
  int iVar7;
  int iVar8;
  undefined8 extraout_f1;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  
  iVar6 = fn_82F6A548();
  uVar5 = 0xffffffff80004005;
  if ((*(int *)(iVar6 + 0x10) != 0) && (param_4 < 2)) {
    dVar11 = (double)lbl_82002AE0;
    uVar5 = fn_82F593D8(dVar11,extraout_f1,0xffffffff80004005);
    piVar3 = (int *)(param_4 * 8 + iVar6);
    iVar7 = fn_82F5D068(*(undefined4 *)(param_4 * 8 + iVar6),param_2,0);
    iVar8 = fn_82F5D068(uVar5,piVar3[1],param_2,1);
    iVar1 = *piVar3;
    uVar5 = fn_82F58C88(iVar1);
    iVar2 = piVar3[1];
    uVar9 = fn_82F58C88(iVar2);
    fn_82F593E8(*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar2 + 0x30));
    puVar4 = (undefined4 *)param_5;
    if ((param_5 & 0xffffffff) != 0) {
      uVar5 = fn_82F593D8(uVar5,uVar9);
      dVar10 = (double)fn_82F593C8(dVar11,uVar5);
      puVar4[1] = (float)dVar10;
      puVar4[2] = *(undefined4 *)((param_4 + 5) * 4 + iVar6);
      if ((iVar7 == 0) && (iVar8 == 0)) {
        *puVar4 = 0;
      }
      else {
        puVar4[1] = (float)dVar11;
        *puVar4 = 1;
      }
      puVar4[3] = *(undefined4 *)((int)param_2 + 4);
    }
    if ((float)puVar4[1] < lbl_82186E6C) {
      *(undefined4 *)((param_4 + 5) * 4 + iVar6) = lbl_821AAD20;
    }
    uVar5 = 0;
  }
  fn_82F6A594(uVar5);
  return;
}

