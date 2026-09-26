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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8265C9E0();
extern unsigned int lbl_82196E94;


undefined4 * fn_82359DB8(undefined4 *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar4;
  undefined4 *puVar3;
  undefined4 **ppuVar5;
  undefined4 *puStack_30;
  undefined4 *apuStack_2c [11];
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_2 + 8))[1];
  puStack_30 = *(undefined4 **)(param_2 + 8);
  while (puVar3 = puVar1, *(char *)((int)puVar3 + 0x19) == '\0') {
    if ((uint)puVar3[3] < param_3) {
      puVar1 = (undefined4 *)puVar3[2];
    }
    else {
      puVar1 = (undefined4 *)*puVar3;
      puStack_30 = puVar3;
    }
  }
  if ((puStack_30 == *(undefined4 **)(param_2 + 8)) || (param_3 < (uint)puStack_30[3])) {
    apuStack_2c[0] = *(undefined4 **)(param_2 + 8);
    ppuVar5 = apuStack_2c;
  }
  else {
    ppuVar5 = &puStack_30;
  }
  puVar1 = *ppuVar5;
  puVar3 = *(undefined4 **)(param_2 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  if (puVar1 == puVar3) {
    puVar3 = (undefined4 *)fn_8265C9E0(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[3] = 0;
      puVar3[1] = 1;
      *puVar3 = &lbl_82196E94;
      puVar3[2] = 1;
    }
    if (param_1[1] != 0) {
      fn_822315A0();
    }
    *param_1 = 0;
  }
  else {
    puVar3 = (undefined4 *)puVar1[5];
    uVar2 = puVar1[4];
    if (puVar3 == (undefined4 *)0x0) {
      return param_1;
    }
    cVar4 = fn_8223AAC0(puVar3);
    if (cVar4 == '\0') {
      return param_1;
    }
    if (param_1[1] != 0) {
      fn_822315A0();
    }
    *param_1 = uVar2;
  }
  param_1[1] = puVar3;
  return param_1;
}

