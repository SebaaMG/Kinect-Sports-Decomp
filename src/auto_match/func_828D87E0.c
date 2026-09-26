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
extern int fn_828D83F0();
extern int fn_828D8768();
extern unsigned int lbl_82026D70;


void fn_828D87E0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *puVar4;
  
  uVar1 = param_1[1];
  if ((uVar1 <= param_2) || (bVar3 = true, param_2 < *param_1)) {
    bVar3 = false;
  }
  if (bVar3) {
    uVar2 = *param_1;
    if (uVar1 == param_1[2]) {
      fn_828D8768(param_1,1);
    }
    puVar4 = (undefined4 *)param_1[1];
    param_2 = ((int)(param_2 - uVar2) / 0x1c) * 0x1c + *param_1;
    if (puVar4 == (undefined4 *)0x0) goto LAB_828d88d8;
    *puVar4 = &lbl_82026D70;
    puVar4[1] = *(undefined4 *)(param_2 + 4);
    puVar4[2] = *(undefined4 *)(param_2 + 8);
  }
  else {
    if (uVar1 == param_1[2]) {
      fn_828D8768(param_1,1);
    }
    puVar4 = (undefined4 *)param_1[1];
    if (puVar4 == (undefined4 *)0x0) goto LAB_828d88d8;
    *puVar4 = &lbl_82026D70;
    puVar4[1] = *(undefined4 *)(param_2 + 4);
    puVar4[2] = *(undefined4 *)(param_2 + 8);
  }
  fn_828D83F0(puVar4 + 3,param_2 + 0xc);
LAB_828d88d8:
  param_1[1] = param_1[1] + 0x1c;
  return;
}

