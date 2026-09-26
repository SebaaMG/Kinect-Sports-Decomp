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
extern int fn_8235A028();
extern int fn_823BE9F8();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B9030;
extern unsigned int lbl_821B9B9C;


int * fn_824E21C0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 *apuStack_50 [2];
  int aiStack_48 [18];
  
  puVar1 = (undefined4 *)fn_8265C9E0(0x1c0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 1;
    *puVar1 = &lbl_821A8D8C;
    puVar1[2] = 1;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)fn_823BE9F8(puVar1 + 4,param_3);
      *puVar2 = &lbl_821B9B9C;
      puVar2 = (undefined4 *)((uint)(puVar2 + 0x68) & 0xfffffff0);
      *puVar2 = in_register_000104d0;
      puVar2[1] = in_register_000104d4;
      puVar2[2] = in_register_000104d8;
      puVar2[3] = in_vr77;
    }
  }
  puVar2 = (undefined4 *)fn_8265C9E0(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &lbl_821B9030;
    puVar2[1] = 0;
    puVar2[2] = 0;
    if ((puVar1 != (undefined4 *)0x0) && (cVar3 = fn_8223AAC0(puVar1), cVar3 != '\0')) {
      if (puVar2[2] != 0) {
        fn_822315A0();
      }
      puVar2[2] = puVar1;
      puVar2[1] = puVar1 + 4;
    }
  }
  puVar4 = (undefined4 *)0x0;
  apuStack_50[0] = puVar2;
  puVar5 = (undefined4 *)0x0;
  if ((puVar1 != (undefined4 *)0x0) && (cVar3 = fn_8223AAC0(puVar1), cVar3 != '\0')) {
    puVar4 = puVar1 + 4;
    puVar5 = puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  puVar6 = puVar5;
  if (param_1 != aiStack_48) {
    puVar6 = (undefined4 *)0x0;
    param_1[1] = (int)puVar5;
    *param_1 = (int)puVar4;
  }
  fn_8235A028(param_1 + 2,apuStack_50);
  if (puVar6 != (undefined4 *)0x0) {
    fn_822315A0(puVar6);
  }
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (puVar1 != (undefined4 *)0x0) {
    fn_822315A0(puVar1);
  }
  return param_1;
}

