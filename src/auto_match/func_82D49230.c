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
extern unsigned int *auStack_230;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_82134504;
extern unsigned int lbl_8323B4A0;


double fn_82D49230(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar3;
  undefined8 uVar2;
  int *piVar4;
  int *piVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_230 [560];
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "TthkpShapeCollection::getMaximumProjection";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  piVar5 = (int *)(param_1 + 0x10);
  dVar7 = (double)lbl_82134504;
  uVar2 = (**(code **)(*piVar5 + 8))(piVar5);
  iVar3 = (int)uVar2;
  while (iVar3 != -1) {
    piVar4 = (int *)(**(code **)(*piVar5 + 0x14))(piVar5,uVar2,auStack_230);
    dVar6 = (double)(**(code **)(*piVar4 + 0xc))(piVar4,param_2);
    if ((float)(dVar7 - dVar6) < 0.0) {
      dVar7 = dVar6;
    }
    uVar2 = (**(code **)(*piVar5 + 0xc))(piVar5,uVar2);
    iVar3 = (int)uVar2;
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  return dVar7;
}

