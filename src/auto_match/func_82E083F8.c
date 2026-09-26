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
extern int fn_82E06B90();
extern int fn_82E06BF8();


void fn_82E083F8(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    iVar6 = fn_82E06B90(iVar1 + 0x5c,1,0);
    uVar2 = *(uint *)(iVar1 + 0x44);
    uVar9 = (ulonglong)uVar2;
    if ((iVar6 != 0) && (0 < (int)uVar2)) {
      iVar7 = fn_82E06BF8(iVar1,iVar6);
      uVar3 = param_2[1];
      iVar1 = *(int *)(iVar6 + 8);
      lVar10 = uVar3 + uVar9;
      iVar6 = fn_82CE5410();
      iVar11 = (int)lVar10;
      if ((int)(param_2[2] & 0x3fffffffU) < iVar11) {
        lVar8 = ((ulonglong)(uint)param_2[2] & 0x3fffffff) << 1;
        if ((int)lVar8 <= iVar11) {
          lVar8 = lVar10;
        }
        fn_82CE6310(*(undefined4 *)(iVar6 + 0x10),param_2,lVar8,0x10);
      }
      param_2[1] = iVar11;
      if (0 < (int)uVar2) {
        iVar6 = uVar3 << 4;
        do {
          puVar4 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
          uVar12 = puVar4[1];
          uVar13 = puVar4[2];
          uVar14 = puVar4[3];
          iVar7 = iVar1 + iVar7;
          puVar5 = (undefined4 *)(iVar6 + *param_2 & 0xfffffff0);
          *puVar5 = *puVar4;
          puVar5[1] = uVar12;
          puVar5[2] = uVar13;
          puVar5[3] = uVar14;
          iVar6 = iVar6 + 0x10;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
  }
  return;
}

