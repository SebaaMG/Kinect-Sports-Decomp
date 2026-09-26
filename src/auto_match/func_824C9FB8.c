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
extern int fn_8260D428();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


longlong fn_824C9FB8(int param_1)

{
  int iVar2;
  longlong lVar1;
  undefined4 ****ppppuVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined4 *puStack_60;
  undefined4 *apuStack_5c [3];
  undefined4 ***apppuStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  
  fn_82230110(apppuStack_50);
  puStack_60 = *(undefined4 **)(param_1 + 0x48);
  puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 0x48))[1];
  while (*(char *)((int)puVar4 + 0xb9) == '\0') {
    ppppuVar3 = (undefined4 ****)apppuStack_50[0];
    if (uStack_3c < 0x10) {
      ppppuVar3 = apppuStack_50;
    }
    iVar2 = fn_8260D428(puVar4 + 4,0,puVar4[8],ppppuVar3,uStack_40);
    if (iVar2 < 0) {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puStack_60 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
    }
  }
  if (puStack_60 != *(undefined4 **)(param_1 + 0x48)) {
    puVar4 = puStack_60 + 4;
    if (0xf < (uint)puStack_60[9]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    iVar2 = fn_8260D428(apppuStack_50,0,uStack_40,puVar4,puStack_60[8]);
    if (-1 < iVar2) {
      ppuVar5 = &puStack_60;
      goto LAB_824ca084;
    }
  }
  apuStack_5c[0] = *(undefined4 **)(param_1 + 0x48);
  ppuVar5 = apuStack_5c;
LAB_824ca084:
  puVar4 = *ppuVar5;
  fn_82230300(apppuStack_50,1,0);
  lVar1 = ZEXT48(puVar4) + 0x30;
  if (ZEXT48(puVar4) == (ulonglong)*(uint *)(param_1 + 0x48)) {
    lVar1 = 0;
  }
  return lVar1;
}

