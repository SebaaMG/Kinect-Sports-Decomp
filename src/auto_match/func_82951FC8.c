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


undefined8 fn_82951FC8(int param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  iVar5 = uVar3 * 4;
  uVar1 = *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x18));
  if (uVar3 < uVar2) {
    if (uVar3 < uVar2) {
      param_2 = param_2 - param_3;
      do {
        puVar4 = (undefined4 *)(iVar5 + *(int *)(param_1 + 0x18));
        iVar5 = iVar5 + 4;
        *puVar4 = puVar4[1];
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  else if (uVar2 < uVar3) {
    param_3 = param_3 - param_2;
    do {
      puVar4 = (undefined4 *)(iVar5 + *(int *)(param_1 + 0x18));
      iVar5 = iVar5 + -4;
      *puVar4 = puVar4[-1];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *(undefined4 *)(uVar2 * 4 + *(int *)(param_1 + 0x18)) = uVar1;
  return 0;
}

