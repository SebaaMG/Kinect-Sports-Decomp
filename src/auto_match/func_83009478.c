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
extern int fn_82FA5060();
extern int fn_830177C8();
extern int fn_8301B058();
extern int fn_83034858();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642EC;
extern unsigned int lbl_832642FC;


undefined4 fn_83009478(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  
  fn_8301B058(lbl_832642EC,param_1);
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar3 = 0;
    lVar6 = 0;
    uVar4 = 1;
    uVar5 = 0;
    dVar10 = (double)lbl_821AAD20;
    do {
      iVar1 = *(int *)(param_1 + 0x28);
      bVar8 = false;
      uVar7 = (uint)lVar6;
      if (iVar1 != 0) {
        bVar8 = (bool)(*(byte *)(iVar1 + 0x3c) >> (uVar7 & 0x3f) & 1);
        if ((*(int *)(uVar5 + iVar1 + 0xc) == -1) ||
           ((((uVar4 & 0xff) << 0x18 | uVar4 >> 8) & (ulonglong)*(uint *)(param_1 + 0x40)) == 0)) {
          if (*(int *)(param_1 + 0x24) != 0) {
            bVar8 = (bool)(*(byte *)(*(int *)(param_1 + 0x24) + 0x3d) >> (uVar7 & 0x3f) & 1);
          }
        }
        else {
          dVar9 = (double)fn_830177C8(lbl_832642FC,param_1,lVar6 + 0x18,0);
          bVar8 = dVar9 != dVar10;
        }
      }
      uVar5 = uVar5 + 0xc;
      uVar4 = (uVar4 & 0x7fffffff) << 1 | uVar4 >> 0x1f;
      uVar3 = (uint)(bVar8 != false) << (uVar7 & 0x3f) | uVar3;
      lVar6 = lVar6 + 1;
    } while (uVar5 < 0x30);
    uVar4 = fn_82FA5060(lbl_831BC768,0x40);
    if ((uVar4 & 0xffffffff) != 0) {
      uVar2 = fn_83034858(uVar4,param_1,uVar3);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return *(undefined4 *)(param_1 + 0x24);
}

