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
extern int fn_82DAD5A8();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_82DAE9A0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x16c);
  piVar9 = (int *)(param_1 + 0x168);
  uVar4 = uVar7;
  while (uVar7 = uVar7 - 1, -1 < (longlong)uVar7) {
    uVar8 = uVar4;
    if ((int)*(uint *)(param_1 + 0x16c) < (int)uVar4) {
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x16c);
      uVar7 = (uVar8 - uVar4) + uVar7;
    }
    iVar6 = (int)((uVar7 & 0xffffffff) << 2);
    uVar4 = uVar8;
    if (*(int *)(*piVar9 + iVar6) != 0) {
      iVar5 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(undefined4 **)(iVar5 + 4);
      if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
        *puVar1 = "TtpostSimCb";
        uVar3 = TBLr;
        puVar1[1] = (int)uVar3;
        *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
      }
      piVar2 = *(int **)(*piVar9 + iVar6);
      (**(code **)(*piVar2 + 4))(piVar2,param_1);
      iVar6 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(undefined4 **)(iVar6 + 4);
      if (puVar1 < *(undefined4 **)(iVar6 + 0xc)) {
        *puVar1 = &lbl_82132BC4;
        uVar3 = TBLr;
        puVar1[1] = (int)uVar3;
        *(undefined4 **)(iVar6 + 4) = puVar1 + 3;
      }
    }
  }
  fn_82DAD5A8(piVar9);
  return;
}

