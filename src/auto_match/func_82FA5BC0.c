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
extern unsigned int lbl_83264218;


void fn_82FA5BC0(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0xc);
  puVar2 = *(undefined4 **)(param_2 + 8);
  iVar4 = param_3 * 0x20 + param_4 + 0x19;
  puVar2[3] = iVar1;
  *(undefined4 **)(iVar1 + 8) = puVar2;
  if (param_1[iVar4] != param_2) {
    return;
  }
  param_1[iVar4] = (uint)puVar2;
  if (puVar2 != &lbl_83264218) {
    return;
  }
  uVar3 = param_1[param_3 + 1] & ~(1 << (param_4 & 0x3f));
  param_1[param_3 + 1] = uVar3;
  if (uVar3 != 0) {
    return;
  }
  *param_1 = *param_1 & ~(1 << (param_3 & 0x3f));
  return;
}

