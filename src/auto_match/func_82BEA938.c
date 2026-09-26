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
extern int fn_82BE1A10();
extern int fn_82BE1FA0();
extern int fn_82BE2000();
extern int fn_82BE31D0();
extern int fn_82BE5240();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE56B0();
extern int fn_82BE6590();
extern int fn_82BE66A0();
extern int fn_82BEB9B8();
extern int fn_82BF5710();
extern int fn_82BF6188();
extern unsigned int lbl_8322B1C8;


undefined8 fn_82BEA938(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  if ((lbl_8322B1C8 != 0) && (iVar5 = *(int *)(param_1 + 0x10), iVar5 != 0)) {
    *(undefined4 *)(param_1 + 4) = 0;
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        if (*(int *)(param_1 + 0x40) == 0) {
          fn_82BE5240(param_1,0x130,0xffffffff82196582);
          return 0x130;
        }
        fn_82BE5340();
        while (*(int *)(*(int *)(param_1 + 0x40) + 8) != 0) {
          piVar4 = (int *)fn_82BE5378(*(undefined4 *)(param_1 + 0x40));
          (**(code **)(*piVar4 + 8))();
          fn_82BE5350(*(undefined4 *)(param_1 + 0x40));
        }
      }
      else if (iVar5 == 0xe) {
        *(undefined4 *)(param_1 + 0x10) = 0xf;
      }
      return 1;
    }
    iVar5 = fn_82BE1A10();
    fn_82BE31D0(iVar5,0,0);
    iVar6 = fn_82BE56B0(0x70);
    if (iVar6 == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)fn_82BF5710();
    }
    if (puVar7 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      lVar8 = 0x65;
      uVar9 = 0xffffffff820eacd0;
    }
    else {
      uVar1 = *(uint *)(iVar5 + 0x54);
      uVar2 = *(undefined4 *)(iVar5 + 0x50);
      uVar3 = *(undefined4 *)(iVar5 + 0x4c);
      uVar9 = fn_82BE1FA0(iVar5);
      iVar6 = fn_82BF6188(puVar7,param_1,*(undefined4 *)(param_1 + 0x38),uVar9,uVar3,uVar2,
                                uVar1 & 0xffff);
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        (**(code **)*puVar7)(puVar7,1);
        lVar8 = 0x452;
        uVar9 = 0xffffffff820eaca8;
      }
      else {
        lVar8 = fn_82BE6590(puVar7);
        if (lVar8 == 0) {
          fn_82BE2000(iVar5);
          lVar8 = fn_82BEB9B8(param_1,puVar7);
          if (lVar8 == 0) {
            *(undefined4 *)(param_1 + 0x10) = 0xd;
            *(undefined4 *)(iVar5 + 0x10) = 0xd;
            return 1;
          }
          *(undefined4 *)(param_1 + 0x10) = 0;
          fn_82BE66A0(puVar7);
          (**(code **)*puVar7)(puVar7,1);
          uVar9 = 0xffffffff820eac48;
        }
        else {
          *(undefined4 *)(param_1 + 0x10) = 0;
          (**(code **)*puVar7)(puVar7,1);
          uVar9 = 0xffffffff820eac80;
        }
      }
    }
    fn_82BE5240(param_1,lVar8,uVar9);
  }
  return 0;
}

