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
extern unsigned int lbl_82057560;
extern unsigned int lbl_8213CAF8;
extern unsigned int lbl_8214186C;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82DA5808(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = lbl_8214186C;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar3 = lbl_821AAD20;
  *param_1 = &lbl_8213CAF8;
  uVar1 = lbl_82057560;
  *(undefined1 *)(param_1 + 2) = 3;
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  param_1[6] = uVar3;
  return;
}

