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
extern int fn_82917810();


undefined4 *
fn_82917920(undefined4 *param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5,
             undefined4 param_6)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  *param_1 = (int)param_2;
  puVar3 = (undefined4 *)(param_3 + -4);
  lVar4 = 5;
  puVar2 = param_1;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  param_1[7] = param_5;
  param_1[8] = param_6;
  param_1[6] = param_4;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  fn_82917810(param_2,param_3,param_4,1,param_1 + 0xb,param_1 + 0xd);
  param_1[10] = (uint)*(ushort *)(param_4 + 8) * param_1[0xb];
  uVar1 = *(ushort *)(param_4 + 8);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xc] = (uint)uVar1 * param_1[0xd];
  return param_1;
}

