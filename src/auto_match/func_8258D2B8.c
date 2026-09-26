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
extern int fn_8251CF80();
extern int fn_8258C000();
extern int fn_8260D428();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8258D2B8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined4 *puStack_60;
  undefined4 *apuStack_5c [3];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 ***apppuStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  
  fn_82230110(apppuStack_40,param_1);
  iVar1 = fn_8258C000();
  puStack_60 = *(undefined4 **)(iVar1 + 0x1c4);
  puVar4 = (undefined4 *)(*(undefined4 **)(iVar1 + 0x1c4))[1];
  while (*(char *)((int)puVar4 + 0x2d) == '\0') {
    ppppuVar3 = (undefined4 ****)apppuStack_40[0];
    if (uStack_2c < 0x10) {
      ppppuVar3 = apppuStack_40;
    }
    iVar2 = fn_8260D428(puVar4 + 3,0,puVar4[7],ppppuVar3,uStack_30);
    if (iVar2 < 0) {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puStack_60 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
    }
  }
  if (puStack_60 != *(undefined4 **)(iVar1 + 0x1c4)) {
    puVar4 = puStack_60 + 3;
    if (0xf < (uint)puStack_60[8]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    iVar2 = fn_8260D428(apppuStack_40,0,uStack_30,puVar4,puStack_60[7]);
    if (-1 < iVar2) {
      ppuVar5 = &puStack_60;
      goto LAB_8258d388;
    }
  }
  apuStack_5c[0] = *(undefined4 **)(iVar1 + 0x1c4);
  ppuVar5 = apuStack_5c;
LAB_8258d388:
  puVar4 = *ppuVar5;
  fn_82230300(apppuStack_40,1,0);
  iVar1 = fn_8258C000();
  if (ZEXT48(puVar4) != (ulonglong)*(uint *)(iVar1 + 0x1c4)) {
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    fn_8251CF80(ZEXT48(puVar4) + 0x28,0,&uStack_50);
  }
  return;
}

