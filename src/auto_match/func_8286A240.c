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
extern int fn_8260D428();


int fn_8286A240(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (param_2 - param_1) / 0x1c;
  while (uVar1 = uVar5, 0 < (int)uVar1) {
    uVar5 = ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0);
    iVar4 = uVar5 * 0x1c + param_1;
    puVar3 = param_3;
    if (0xf < (uint)param_3[5]) {
      puVar3 = (undefined4 *)*param_3;
    }
    iVar2 = fn_8260D428(iVar4,0,*(undefined4 *)(iVar4 + 0x10),puVar3,param_3[4]);
    if (iVar2 < 0) {
      param_1 = iVar4 + 0x1c;
      uVar5 = (uVar1 - uVar5) - 1;
    }
  }
  return param_1;
}

