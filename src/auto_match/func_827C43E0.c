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


undefined8 fn_827C43E0(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar4;
  undefined8 uVar3;
  undefined4 *puVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x198);
  uVar2 = *(uint *)(iVar1 + 0x10);
  *(uint *)(*(int *)(param_1 + 0x194) + 0x14) =
       ((int)uVar2 >> 3) + (uint)((int)uVar2 < 0 && (uVar2 & 7) != 0) +
       *(int *)(*(int *)(param_1 + 0x194) + 0x14);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  cVar4 = (**(code **)(*(int *)(param_1 + 0x194) + 8))();
  if (cVar4 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x124)) {
      puVar5 = (undefined4 *)(iVar1 + 0x14);
      do {
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + 1;
        *puVar5 = 0;
      } while (iVar6 < *(int *)(param_1 + 0x124));
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0xfc);
    if (*(int *)(param_1 + 0x17c) == 0) {
      *(undefined1 *)(iVar1 + 8) = 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}

