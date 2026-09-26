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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8260D428();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_822C72E0(int param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar4;
  int iVar3;
  undefined8 uVar2;
  undefined4 ****ppppuVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puStack_70;
  undefined4 *apuStack_6c [3];
  undefined4 ***apppuStack_60 [4];
  undefined4 uStack_50;
  uint uStack_4c;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  piVar1 = *(int **)(param_1 + 0x28);
  iVar9 = 0;
  piVar8 = (int *)0x0;
  if ((iVar3 != 0) && (cVar4 = fn_8223AAC0(iVar3), cVar4 != '\0')) {
    iVar9 = iVar3;
    piVar8 = piVar1;
  }
  fn_82230110(apppuStack_60,param_2);
  puStack_70 = *(undefined4 **)(param_1 + 0x44);
  puVar6 = (undefined4 *)(*(undefined4 **)(param_1 + 0x44))[1];
  while (*(char *)((int)puVar6 + 0x45) == '\0') {
    ppppuVar5 = (undefined4 ****)apppuStack_60[0];
    if (uStack_4c < 0x10) {
      ppppuVar5 = apppuStack_60;
    }
    iVar3 = fn_8260D428(puVar6 + 3,0,puVar6[7],ppppuVar5,uStack_50);
    if (iVar3 < 0) {
      puVar6 = (undefined4 *)puVar6[2];
    }
    else {
      puStack_70 = puVar6;
      puVar6 = (undefined4 *)*puVar6;
    }
  }
  if (puStack_70 != *(undefined4 **)(param_1 + 0x44)) {
    puVar6 = puStack_70 + 3;
    if (0xf < (uint)puStack_70[8]) {
      puVar6 = (undefined4 *)*puVar6;
    }
    iVar3 = fn_8260D428(apppuStack_60,0,uStack_50,puVar6,puStack_70[7]);
    if (-1 < iVar3) {
      ppuVar7 = &puStack_70;
      goto LAB_822c73e4;
    }
  }
  apuStack_6c[0] = *(undefined4 **)(param_1 + 0x44);
  ppuVar7 = apuStack_6c;
LAB_822c73e4:
  puVar6 = *ppuVar7;
  fn_82230300(apppuStack_60,1,0);
  if (ZEXT48(puVar6) == (ulonglong)*(uint *)(param_1 + 0x44)) {
    if (iVar9 != 0) {
      fn_822315A0(iVar9);
    }
    uVar2 = 0;
  }
  else {
    (**(code **)(*piVar8 + 4))(piVar8,ZEXT48(puVar6) + 0x28);
    if (iVar9 != 0) {
      fn_822315A0(iVar9);
    }
    uVar2 = 1;
  }
  return uVar2;
}

