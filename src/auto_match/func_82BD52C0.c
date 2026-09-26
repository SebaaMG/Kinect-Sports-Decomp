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


void fn_82BD52C0(int param_1,longlong param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x60);
    do {
      if (param_2 == *(longlong *)*puVar1) break;
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  iVar3 = uVar2 * 3 + *(int *)(param_3 + 0xc);
  *param_4 = *(undefined4 *)((iVar3 + 200) * 4 + param_1);
  *param_5 = *(undefined4 *)((iVar3 + 0x62) * 4 + param_1);
  return;
}

