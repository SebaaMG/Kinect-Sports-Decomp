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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82630B08();
extern int fn_82A1DBD8();
extern unsigned int lbl_8320A898;


void fn_82266AE8(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int *piVar11;
  
  iVar10 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x100) + 0x44);
  iVar3 = *(int *)(*(int *)(param_1 + 0xdc) + 0x8c0);
  piVar11 = (int *)(iVar3 + 0x80);
  piVar7 = *(int **)((iVar2 + 0x20) * 4 + iVar3);
  iVar3 = *piVar7;
  iVar4 = piVar7[1];
  do {
    if (iVar10 != iVar2) {
      piVar7 = (int *)*piVar11;
      iVar5 = *piVar7;
      uVar1 = *(ushort *)(piVar7 + 2);
      iVar6 = piVar7[1];
      if ((iVar5 != 0) && (iVar3 != 0)) {
        iVar8 = (uint)uVar1 * 0x40;
        fn_82A1DBD8(iVar5,iVar3,iVar8);
        for (uVar9 = CONCAT44(iVar5,iVar5) & 0xffffffffffffff7f; (int)uVar9 < iVar8 + iVar5;
            uVar9 = uVar9 + 0x80) {
          dataCacheBlockFlush(uVar9);
        }
        fn_82630B08(lbl_8320A898,iVar5,iVar8,0);
      }
      if ((iVar6 != 0) && (iVar4 != 0)) {
        iVar5 = (uint)uVar1 * 0x40;
        fn_82A1DBD8(iVar6,iVar4,iVar5);
        for (uVar9 = CONCAT44(iVar6,iVar6) & 0xffffffffffffff7f; (int)uVar9 < iVar5 + iVar6;
            uVar9 = uVar9 + 0x80) {
          dataCacheBlockFlush(uVar9);
        }
        fn_82630B08(lbl_8320A898,iVar6,iVar5,0);
      }
    }
    iVar10 = iVar10 + 1;
    piVar11 = piVar11 + 1;
  } while (iVar10 < 4);
  return;
}

