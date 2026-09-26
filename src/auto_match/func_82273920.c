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
extern int fn_82F68CC0();


undefined4 * fn_82273920(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = param_2[2];
  uVar2 = param_2[1];
  if ((iVar1 != 0) && (cVar3 = fn_8223AAC0(iVar1), cVar3 != '\0')) {
    if (param_1[2] != 0) {
      fn_822315A0();
    }
    param_1[2] = iVar1;
    param_1[1] = uVar2;
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  fn_82F68CC0(param_1 + 0xb,param_2 + 0xb,0x800);
  fn_82F68CC0(param_1 + 0x20b,param_2 + 0x20b,0x800);
  fn_82F68CC0(param_1 + 0x40b,param_2 + 0x40b,0x80);
  param_1[0x42b] = param_2[0x42b];
  param_1[0x42c] = param_2[0x42c];
  param_1[0x42d] = param_2[0x42d];
  return param_1;
}

