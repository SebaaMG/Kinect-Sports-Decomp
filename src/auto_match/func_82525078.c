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
extern int fn_82A1F238();


void fn_82525078(int param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x7c);
    lVar2 = 4;
    do {
      iVar1 = puVar3[1];
      if (*(int *)(iVar1 + 0x4c) != 0) {
        fn_82A1F238();
        *(undefined4 *)(iVar1 + 0x4c) = 0;
      }
      if (*(int *)(iVar1 + 0x50) != 0) {
        fn_82A1F238();
        *(undefined4 *)(iVar1 + 0x50) = 0;
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
    } while (lVar2 != 0);
  }
  return;
}

