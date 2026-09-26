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
extern int fn_8251E768();
extern int fn_825503E0();
extern int fn_828BF798();
extern int fn_828E2DC8();
extern int fn_828E5A80();
extern int fn_828E5BD0();
extern unsigned int lbl_821C2734;


void fn_825150E8(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *apuStack_40 [4];
  undefined **ppuStack_30;
  code *pcStack_2c;
  undefined ***pppuStack_20;
  
  iVar3 = fn_8251E768();
  puVar1 = *(uint **)(iVar3 + 4);
  apuStack_40[0] = (undefined4 *)*puVar1;
  while (ZEXT48(apuStack_40[0]) != ZEXT48(puVar1)) {
    fn_828BF798(ZEXT48(apuStack_40[0]) + 0x10);
    fn_825503E0(apuStack_40);
    puVar1 = *(uint **)(iVar3 + 4);
  }
  puVar2 = *(undefined4 **)(iVar3 + 4);
  apuStack_40[0] = (undefined4 *)*puVar2;
  while ((apuStack_40[0] != puVar2 && (apuStack_40[0][3] != 0x1b))) {
    fn_825503E0(apuStack_40);
  }
  if (apuStack_40[0] == puVar2) {
    fn_828E5BD0();
  }
  pcStack_2c = fn_828E5A80;
  pppuStack_20 = &ppuStack_30;
  ppuStack_30 = &lbl_821C2734;
  fn_828E2DC8(&ppuStack_30);
  return;
}

