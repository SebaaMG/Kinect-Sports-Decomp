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
extern unsigned int *auStack_60;
extern int fn_8225C590();
extern int fn_8225D8B8();
extern int fn_8225DA18();
extern int fn_82278950();
extern int fn_82289670();
extern int fn_8228A5F0();
extern int fn_82529320();
extern int fn_82A1DD38();
extern int fn_82F68CC0();


void fn_82289408(longlong param_1,ulonglong param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar6;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_60 [96];
  
  iVar2 = (int)param_1;
  if (param_4 != 0) {
    iVar6 = fn_82289670();
    iVar1 = (int)((param_2 & 0xffffffff) << 6) + iVar2;
    if (*(int *)(iVar1 + 0x6a8) == 0) {
      if (iVar6 != 0) {
        return;
      }
      uVar4 = fn_8225C590();
      uVar5 = fn_8225DA18(uVar4,*(undefined4 *)(iVar1 + 0x6ac));
      fn_8225D8B8(uVar4,uVar5);
    }
    if (iVar6 != 0) {
      return;
    }
  }
  lVar9 = (param_2 & 0x3ffffff) * 0x40 + param_1;
  lVar8 = param_2 * 0x18 + param_1;
  *(undefined4 *)((int)lVar9 + 0x6a8) = 4;
  iVar1 = *(int *)((int)lVar8 + 0x61c);
  *(undefined4 *)(iVar1 + 0xb4) = 0;
  fn_82278950(*(undefined4 *)(iVar1 + 0xb0));
  iVar6 = (int)((param_2 + 0x1b & 0xffffffff) << 6);
  iVar1 = *(int *)(iVar6 + iVar2);
  if (iVar1 != 0) {
    fn_82529320(iVar1,0);
    *(undefined4 *)(iVar6 + iVar2) = 0;
  }
  if ((param_3 != 0) && ((int)param_2 < 3)) {
    lVar9 = lVar9 + 0x6e8;
    lVar8 = lVar8 + 0x634;
    lVar7 = 3 - param_2;
    do {
      puVar3 = (undefined4 *)lVar9;
      if (puVar3[-0x10] == 4) {
        fn_82F68CC0(auStack_60,lVar8 + -0x18,0x18);
        fn_82F68CC0(lVar8 + -0x18,lVar8,0x18);
        fn_82F68CC0(lVar8,auStack_60,0x18);
        fn_82A1DD38(lVar9 + -0x40,lVar9,0x40);
        *puVar3 = 4;
        puVar3[6] = 0;
      }
      lVar7 = lVar7 + -1;
      lVar8 = lVar8 + 0x18;
      lVar9 = lVar9 + 0x40;
    } while (lVar7 != 0);
  }
  if ((*(int *)(*(int *)(iVar2 + 0x11f0) + 0x18b8) == 1) && ((int)param_2 == 1)) {
    iVar1 = *(int *)(iVar2 + 0x664);
    *(undefined4 *)(iVar1 + 0xb4) = 0;
    fn_82278950(*(undefined4 *)(iVar1 + 0xb0));
  }
  fn_8228A5F0(param_1);
  *(undefined4 *)(iVar2 + 0x604) = 1;
  return;
}

