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


undefined8 fn_82817F30(int param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x20)) {
      iVar3 = 0;
      do {
        if (*(int *)(iVar3 + *(int *)(param_1 + 0x24)) == param_2) {
          uVar1 = 0;
          uVar4 = *(undefined4 *)(iVar2 * 0x18 + *(int *)(param_1 + 0x24) + 0x14);
          goto code_r0x82817f74;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x18;
      } while (iVar2 < *(int *)(param_1 + 0x20));
    }
  }
  uVar4 = 0;
  uVar1 = 1;
code_r0x82817f74:
  *param_3 = uVar4;
  return uVar1;
}

