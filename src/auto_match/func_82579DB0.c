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
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8257AC80();
extern int fn_8260D428();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined4 * fn_82579DB0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 ****ppppuVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  undefined4 *puStack_60;
  undefined4 *apuStack_5c [3];
  undefined4 ***apppuStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  
  fn_82230110(apppuStack_50);
  iVar1 = fn_8257AC80(param_1 + 0x20,apppuStack_50);
  puVar3 = *(undefined4 **)(iVar1 * 8 + *(int *)(param_1 + 0x30));
  while( true ) {
    puVar5 = *(undefined4 **)(param_1 + 0x24);
    piVar6 = (int *)(iVar1 * 8 + *(int *)(param_1 + 0x30));
    puVar7 = puVar5;
    if ((undefined4 *)*piVar6 != puVar5) {
      puVar7 = *(undefined4 **)piVar6[1];
    }
    puStack_60 = puVar3;
    if (puVar3 == puVar7) goto LAB_82579ea8;
    puVar5 = puVar3 + 2;
    ppppuVar4 = (undefined4 ****)apppuStack_50[0];
    if (uStack_3c < 0x10) {
      ppppuVar4 = apppuStack_50;
    }
    iVar2 = fn_8260D428(puVar5,0,puVar3[6],ppppuVar4,uStack_40);
    if (-1 < iVar2) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  if (0xf < (uint)puVar3[7]) {
    puVar5 = (undefined4 *)*puVar5;
  }
  iVar1 = fn_8260D428(apppuStack_50,0,uStack_40,puVar5,puVar3[6]);
  if (iVar1 < 0) {
    apuStack_5c[0] = *(undefined4 **)(param_1 + 0x24);
    ppuVar8 = apuStack_5c;
  }
  else {
    ppuVar8 = &puStack_60;
  }
  puVar5 = *ppuVar8;
LAB_82579ea8:
  fn_82230300(apppuStack_50,1,0);
  if (puVar5 == *(undefined4 **)(param_1 + 0x24)) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar5 + 9;
    if (0xf < (uint)puVar5[0xe]) {
      puVar3 = (undefined4 *)*puVar3;
    }
  }
  return puVar3;
}

