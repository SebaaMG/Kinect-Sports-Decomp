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
extern int fn_8265C9E0();
extern unsigned int lbl_82196C88;
extern unsigned int lbl_821B5EC4;
extern unsigned int lbl_821B5EDC;


undefined4 * fn_823BCBF8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  
  param_1[1] = 0;
  *param_1 = &lbl_821B5EC4;
  puVar1 = (undefined4 *)((uint)(param_1 + 4) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar1 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[4] = param_2;
    *puVar1 = &lbl_82196C88;
    puVar1[5] = param_3;
    puVar1[6] = param_2;
    puVar1[7] = param_3;
  }
  puVar2 = (undefined4 *)param_1[8];
  if (puVar1 != puVar2) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    param_1[8] = puVar1;
  }
  puVar2 = (undefined4 *)fn_8265C9E0(8);
  puVar1 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &lbl_821B5EDC;
    puVar1 = puVar2;
  }
  puVar2 = (undefined4 *)param_1[9];
  if (puVar1 != puVar2) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    param_1[9] = puVar1;
  }
  return param_1;
}

