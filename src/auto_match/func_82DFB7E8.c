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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200D8A8;
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_8207A32C;
extern unsigned int lbl_820885A0;
extern unsigned int lbl_820885C4;
extern unsigned int lbl_821468EC;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82DFB7E8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = lbl_821AAD20;
  uVar6 = lbl_820885C4;
  uVar5 = lbl_820885A0;
  uVar4 = lbl_8207A32C;
  uVar3 = lbl_8200DFF4;
  uVar1 = lbl_82002AE0;
  *(undefined2 *)((int)param_1 + 6) = 1;
  uVar2 = lbl_8200D8A8;
  *param_1 = &lbl_821468EC;
  param_1[2] = uVar3;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[5] = uVar4;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  param_1[8] = uVar7;
  param_1[9] = uVar7;
  param_1[10] = uVar7;
  param_1[0xb] = uVar2;
  return;
}

