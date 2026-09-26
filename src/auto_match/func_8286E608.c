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
extern int fn_8287A778();


undefined8 fn_8286E608(int param_1)

{
  bool bVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 *puVar4;
  
  bVar1 = false;
  for (puVar4 = *(undefined4 **)(param_1 + 0x14); puVar4 != *(undefined4 **)(param_1 + 0x18);
      puVar4 = puVar4 + 1) {
    iVar3 = fn_8287A778(*puVar4);
    if (iVar3 < 0) {
      bVar1 = true;
    }
  }
  uVar2 = 0xffffffffa0100000;
  if (!bVar1) {
    uVar2 = 0x20100000;
  }
  return uVar2;
}

