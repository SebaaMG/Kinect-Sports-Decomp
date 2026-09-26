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
extern unsigned int lbl_821AAD20;


void fn_82852358(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = lbl_821AAD20;
  uVar2 = lbl_82002AE0;
  if (param_2 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    *puVar1 = lbl_82002AE0;
    puVar1[4] = uVar3;
    puVar1[8] = uVar3;
    puVar1[0xc] = uVar3;
    puVar1[1] = uVar3;
    puVar1[5] = uVar2;
    puVar1[9] = uVar3;
    puVar1[0xd] = uVar3;
    puVar1[2] = uVar3;
    puVar1[6] = uVar3;
    puVar1[10] = uVar2;
    puVar1[0xe] = uVar3;
    puVar1[3] = uVar3;
    puVar1[7] = uVar3;
    puVar1[0xb] = uVar3;
    puVar1[0xf] = uVar2;
    return;
  }
  puVar1 = (undefined4 *)*param_1;
  if (param_2 == puVar1) {
    return;
  }
  *puVar1 = *param_2;
  puVar1[4] = param_2[4];
  puVar1[8] = param_2[8];
  puVar1[0xc] = param_2[0xc];
  puVar1[1] = param_2[1];
  puVar1[5] = param_2[5];
  puVar1[9] = param_2[9];
  puVar1[0xd] = param_2[0xd];
  puVar1[2] = param_2[2];
  puVar1[6] = param_2[6];
  puVar1[10] = param_2[10];
  puVar1[0xe] = param_2[0xe];
  puVar1[3] = param_2[3];
  puVar1[7] = param_2[7];
  puVar1[0xb] = param_2[0xb];
  puVar1[0xf] = param_2[0xf];
  return;
}

