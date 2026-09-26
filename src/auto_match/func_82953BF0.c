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


longlong fn_82953BF0(int param_1)

{
  int iVar3;
  longlong lVar1;
  longlong lVar2;
  
  while( true ) {
    while( true ) {
      if (param_1 == 0) {
        return 0;
      }
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 == 1) {
        lVar1 = fn_82953BF0(*(undefined4 *)(param_1 + 0xc));
        lVar2 = fn_82953BF0(*(undefined4 *)(param_1 + 8));
        return lVar1 + lVar2;
      }
      if (iVar3 != 6) break;
      param_1 = *(int *)(param_1 + 0x18);
    }
    if (iVar3 == 8) {
      iVar3 = fn_82953BF0(*(undefined4 *)(param_1 + 0x10));
      return (longlong)iVar3 * (longlong)*(int *)(param_1 + 0x14);
    }
    if (iVar3 == 9) break;
    if (iVar3 != 0xb) {
      return 0;
    }
    param_1 = *(int *)(param_1 + 0x30);
  }
  return (longlong)*(int *)(param_1 + 0x20) * (longlong)*(int *)(param_1 + 0x1c);
}

