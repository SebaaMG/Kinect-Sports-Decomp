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


void fn_82968878(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  while( true ) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x18) + param_3 * 4);
    iVar2 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x14));
    if (param_4 != 0) {
      if ((*(uint *)(*(int *)(*(int *)(iVar2 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 2) != 0) {
        if (*(int *)(iVar1 + 0x18) != 0) {
          *(undefined4 *)(*(int *)(iVar1 + 0x14) * 4 + *(int *)(iVar1 + 0x18)) =
               *(undefined4 *)(iVar2 + 0x48);
        }
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
        iVar1 = *(int *)(*(int *)(iVar2 + 0x48) * 4 + *(int *)(param_1 + 0x18));
        if (*(int *)(iVar1 + 0x20) != 0) {
          *(int *)(*(int *)(iVar1 + 0x1c) * 4 + *(int *)(iVar1 + 0x20)) = param_3;
        }
        *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
      }
    }
    if (*(int *)(iVar2 + 8) != -1) {
      fn_82968878(param_1,*(int *)(iVar2 + 8),param_3,1);
    }
    param_2 = *(int *)(iVar2 + 0x14);
    if (param_2 == -1) break;
    param_4 = 1;
  }
  return;
}

