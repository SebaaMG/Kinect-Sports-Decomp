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
extern int fn_8241FE58();
extern unsigned int iStack_20;
extern unsigned int lbl_821B9BC8;
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_c;


void fn_8241CD48(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  undefined4 *puStack_30;
  undefined4 *apuStack_2c [3];
  int iStack_20;
  undefined **ppuStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(uint *)(param_2 + 0xc);
  iVar1 = *(int *)(*param_1 + 0x8c);
  puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 0x60))[1];
  puStack_30 = *(undefined4 **)(iVar1 + 0x60);
  while (puVar3 = puVar2, *(char *)((int)puVar3 + 0x35) == '\0') {
    if ((uint)puVar3[3] < uStack_10) {
      puVar2 = (undefined4 *)puVar3[2];
    }
    else {
      puVar2 = (undefined4 *)*puVar3;
      puStack_30 = puVar3;
    }
  }
  if ((puStack_30 == *(undefined4 **)(iVar1 + 0x60)) || (uStack_10 < (uint)puStack_30[3])) {
    ppuVar4 = apuStack_2c;
    apuStack_2c[0] = *(undefined4 **)(iVar1 + 0x60);
  }
  else {
    ppuVar4 = &puStack_30;
  }
  if (*ppuVar4 == *(undefined4 **)(iVar1 + 0x60)) {
    iStack_20 = 0;
  }
  else {
    iStack_20 = (*ppuVar4)[4];
  }
  if (iStack_20 != 0) {
    uStack_18 = *(undefined4 *)(param_2 + 4);
    uStack_14 = *(undefined4 *)(param_2 + 8);
    uStack_c = *(undefined4 *)(param_2 + 0x10);
    ppuStack_1c = &lbl_821B9BC8;
    fn_8241FE58(param_1 + 0xfe,&iStack_20);
  }
  return;
}

