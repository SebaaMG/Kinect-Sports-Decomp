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
extern int fn_8263FB88();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8248B6D8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)fn_8263FB88(param_1,0xd,4,0x10);
  uVar3 = lbl_821CC160;
  uVar2 = lbl_821CA460;
  uVar1 = lbl_82192734;
  *puVar4 = lbl_82192734;
  puVar4[1] = uVar2;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  puVar4[4] = uVar2;
  puVar4[5] = uVar2;
  puVar4[6] = uVar3;
  puVar4[7] = uVar3;
  puVar4[8] = uVar2;
  puVar4[9] = uVar1;
  puVar4[10] = uVar3;
  puVar4[0xb] = uVar2;
  puVar4[0xc] = uVar1;
  puVar4[0xd] = uVar1;
  puVar4[0xe] = uVar2;
  puVar4[0xf] = uVar2;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x3554);
  return;
}

