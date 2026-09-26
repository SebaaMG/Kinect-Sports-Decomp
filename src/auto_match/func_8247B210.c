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
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int lbl_82196E94;


undefined4 * fn_8247B210(undefined4 *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 *puStack_30;
  undefined4 *apuStack_2c [11];
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_2 + 8))[1];
  puStack_30 = *(undefined4 **)(param_2 + 8);
  while (puVar2 = puVar1, *(char *)((int)puVar2 + 0x19) == '\0') {
    if ((uint)puVar2[3] < param_3) {
      puVar1 = (undefined4 *)puVar2[2];
    }
    else {
      puVar1 = (undefined4 *)*puVar2;
      puStack_30 = puVar2;
    }
  }
  if ((puStack_30 == *(undefined4 **)(param_2 + 8)) || (param_3 < (uint)puStack_30[3])) {
    apuStack_2c[0] = *(undefined4 **)(param_2 + 8);
    ppuVar3 = apuStack_2c;
  }
  else {
    ppuVar3 = &puStack_30;
  }
  if (ZEXT48(*ppuVar3) == (ulonglong)*(uint *)(param_2 + 8)) {
    *param_1 = 0;
    param_1[1] = 0;
    puVar1 = (undefined4 *)fn_8265C9E0(0x10);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[3] = 0;
      puVar1[1] = 1;
      *puVar1 = &lbl_82196E94;
      puVar1[2] = 1;
    }
    if (param_1[1] != 0) {
      fn_822315A0();
    }
    param_1[1] = puVar1;
    *param_1 = 0;
  }
  else {
    fn_82365BD8(param_1,ZEXT48(*ppuVar3) + 0x10);
  }
  return param_1;
}

