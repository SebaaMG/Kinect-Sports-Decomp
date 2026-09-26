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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CED2F8();
extern int fn_82E02358();
extern int fn_82E080B8();
extern unsigned int lbl_821482BC;


undefined4 * fn_82E048D8(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_821482BC;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x80000000;
  puVar6 = param_1 + 2;
  iVar3 = fn_82CE5410();
  uVar1 = param_1[3];
  uVar2 = *(uint *)(param_2 + 0xc);
  uVar5 = (ulonglong)uVar2;
  uVar10 = (ulonglong)uVar1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar10 = uVar5;
  }
  if ((int)(param_1[4] & 0x3fffffff) < (int)uVar2) {
    uVar9 = ((ulonglong)(uint)param_1[4] & 0x3fffffff) << 1;
    if ((int)uVar9 <= (int)uVar2) {
      uVar9 = uVar5;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),puVar6,uVar9,0x10);
  }
  lVar4 = uVar1 - uVar5;
  lVar7 = ((ulonglong)uVar2 & 0xfffffff) * 0x10 + (ulonglong)*puVar6;
  if (0 < lVar4) {
    do {
      fn_82E02358(lVar7);
      lVar4 = lVar4 + -1;
      lVar7 = lVar7 + 0x10;
    } while (lVar4 != 0);
  }
  uVar9 = (ulonglong)*puVar6;
  if (0 < (int)uVar10) {
    lVar4 = *(uint *)(param_2 + 8) - uVar9;
    uVar8 = uVar10;
    do {
      fn_82E080B8(uVar9,lVar4 + uVar9);
      uVar8 = uVar8 - 1;
      uVar9 = uVar9 + 0x10;
    } while (uVar8 != 0);
  }
  lVar7 = (uVar10 & 0xfffffff) * 0x10;
  lVar4 = uVar5 - uVar10;
  uVar10 = (ulonglong)*puVar6 + lVar7;
  if (0 < lVar4) {
    lVar7 = ((ulonglong)*(uint *)(param_2 + 8) + lVar7) - uVar10;
    do {
      if ((uVar10 & 0xffffffff) != 0) {
        fn_82CED2F8(uVar10);
        iVar3 = (int)uVar10;
        *(undefined4 *)(iVar3 + 4) = 0;
        *(undefined4 *)(iVar3 + 8) = 0;
        *(undefined4 *)(iVar3 + 0xc) = 0x80000000;
        fn_82E080B8(uVar10,lVar7 + uVar10);
      }
      lVar4 = lVar4 + -1;
      uVar10 = uVar10 + 0x10;
    } while (lVar4 != 0);
  }
  param_1[3] = uVar2;
  return param_1;
}

