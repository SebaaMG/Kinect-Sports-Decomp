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
#define TBLr 0
extern int fn_82CE5410();
extern int fn_82D71B20();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


longlong fn_82D742B0(int param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                      undefined8 param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = "TtList3";
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  iVar5 = **(int **)(param_1 + 4);
  uVar2 = *(uint *)(iVar5 + 0x1c);
  uVar11 = (ulonglong)uVar2;
  piVar6 = (int *)fn_82CE5410();
  iVar3 = *piVar6;
  iVar8 = 0;
  uVar10 = 0;
  uVar9 = 1;
  *piVar6 = (uVar2 * 4 + 0x83 & 0xffffff80) + iVar3;
  if (0 < (int)uVar2) {
    puVar7 = (uint *)(iVar3 + -4);
    do {
      if ((0xff < uVar10) || ((*(uint *)(((uVar10 >> 5) + 0x14) * 4 + iVar5) & (uint)uVar9) != 0)) {
        puVar7 = puVar7 + 1;
        *puVar7 = uVar10;
        iVar8 = iVar8 + 1;
      }
      uVar10 = uVar10 + 1;
      uVar9 = (uVar9 & 0x7fffffff) << 1 | uVar9 >> 0x1f;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  *(undefined4 *)(iVar8 * 4 + iVar3) = 0xffffffff;
  fn_82D71B20(param_3,param_1,iVar5 + 0x10,iVar3,param_5);
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  piVar6 = (int *)fn_82CE5410();
  *piVar6 = iVar3;
  return param_3 + 0x10;
}

