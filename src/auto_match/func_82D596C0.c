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
extern int fn_82CE4040();
extern int fn_82D585E0();
extern unsigned int lbl_82138D78;


undefined4 * fn_82D596C0(undefined4 *param_1,undefined4 param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar3;
  ulonglong uVar2;
  longlong lVar4;
  longlong lVar5;
  
  param_1[2] = param_2;
  *param_1 = &lbl_82138D78;
  *(undefined2 *)((int)param_1 + 6) = 1;
  lVar5 = 0x40;
  puVar3 = (undefined1 *)((int)param_1 + 0x99d);
  do {
    puVar3[0x13] = 0;
    puVar3 = puVar3 + 0x14;
    *puVar3 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar1 = param_1 + 0x5a2;
  lVar5 = 0x10;
  do {
    *(undefined1 *)(puVar1 + 0x16) = 0;
    *(undefined1 *)((int)puVar1 + 0x59) = 0;
    *(undefined1 *)((int)puVar1 + 0x5a) = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1 = puVar1 + 0x14;
    *puVar1 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  param_1[0x789] = 0;
  param_1[0x78a] = 0;
  puVar1 = param_1 + 3;
  param_1[0x78b] = 0x80000000;
  lVar5 = 8;
  param_1[0x78c] = 0;
  param_1[0x78d] = 0;
  param_1[0x78e] = 0;
  param_1[0x78f] = 0;
  *(undefined1 *)(param_1 + 0x788) = 0;
  *(undefined1 *)((int)param_1 + 0x1e23) = 1;
  param_1[0x3a8] = 0;
  *(undefined1 *)((int)param_1 + 0x1e22) = 0;
  do {
    lVar4 = 8;
    do {
      *puVar1 = (int)param_3;
      if ((param_3 & 0xffffffff) != 0) {
        fn_82CE4040(param_3);
      }
      lVar4 = lVar4 + -1;
      puVar1 = puVar1 + 1;
    } while (lVar4 != 0);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar2 = 1;
  puVar1 = param_1 + 0x43;
  lVar5 = 0x20;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = (int)uVar2;
    uVar2 = (uVar2 & 0x7fffffff) << 1 | uVar2 >> 0x1f;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  fn_82D585E0(param_1);
  *(undefined1 *)((int)param_1 + 0x1e21) = 0;
  return param_1;
}

