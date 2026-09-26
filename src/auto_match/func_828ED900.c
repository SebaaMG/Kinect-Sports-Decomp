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


undefined4 fn_828ED900(int param_1,int param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 4) + param_2 * 0x5c;
  iVar3 = 0;
  iVar1 = *(int *)(iVar4 + 0x50);
  if (0 < iVar1) {
    iVar4 = *(int *)(iVar4 + 0x58);
    iVar5 = 0;
    do {
      if (*(int *)(iVar5 + iVar4) == param_3) {
        iVar4 = iVar3 * 8 + iVar4;
        if (iVar4 != 0) {
          uVar2 = *(undefined4 *)(iVar4 + 4);
          if (param_4 == (undefined1 *)0x0) {
            return uVar2;
          }
          *param_4 = 1;
          return uVar2;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 8;
    } while (iVar3 < iVar1);
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return 0;
}

