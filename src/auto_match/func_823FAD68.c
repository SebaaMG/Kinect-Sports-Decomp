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
extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B7054;


undefined4 * fn_823FAD68(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_20 [8];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)fn_82365BD8(auStack_20);
    puVar3 = param_1 + 5;
    param_1[4] = 0;
    param_1[3] = &lbl_821B7054;
    param_1[5] = 0;
    param_1[6] = 0;
    if (puVar3 != puVar2) {
      uVar1 = param_1[6];
      param_1[6] = puVar2[1];
      puVar2[1] = uVar1;
      uVar1 = *puVar3;
      *puVar3 = *puVar2;
      *puVar2 = uVar1;
    }
    if (puVar2[1] != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

