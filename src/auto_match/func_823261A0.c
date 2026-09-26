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
extern int fn_8260D428();


undefined4 fn_823261A0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puStack_40;
  undefined4 *apuStack_3c [15];
  
  iVar2 = *param_2;
  puVar7 = (undefined4 *)(iVar2 + 4);
  puVar8 = *(undefined4 **)(param_1 + 0xd0);
  puVar5 = (undefined4 *)(*(undefined4 **)(param_1 + 0xd0))[1];
  while (*(char *)((int)puVar5 + 0x2d) == '\0') {
    puVar4 = puVar7;
    if (0xf < *(uint *)(iVar2 + 0x18)) {
      puVar4 = (undefined4 *)*puVar7;
    }
    iVar1 = fn_8260D428(puVar5 + 3,0,puVar5[7],puVar4,*(undefined4 *)(iVar2 + 0x14));
    if (iVar1 < 0) {
      puVar5 = (undefined4 *)puVar5[2];
    }
    else {
      puVar8 = puVar5;
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  puStack_40 = puVar8;
  if (puVar8 != *(undefined4 **)(param_1 + 0xd0)) {
    puVar5 = puVar8 + 3;
    if (0xf < (uint)puVar8[8]) {
      puVar5 = (undefined4 *)*puVar5;
    }
    iVar2 = fn_8260D428(puVar7,0,*(undefined4 *)(iVar2 + 0x14),puVar5,puVar8[7]);
    if (-1 < iVar2) {
      ppuVar6 = &puStack_40;
      goto LAB_82326270;
    }
  }
  ppuVar6 = apuStack_3c;
  apuStack_3c[0] = *(undefined4 **)(param_1 + 0xd0);
LAB_82326270:
  uVar3 = 0;
  if (*ppuVar6 != *(undefined4 **)(param_1 + 0xd0)) {
    uVar3 = (*ppuVar6)[10];
  }
  return uVar3;
}

