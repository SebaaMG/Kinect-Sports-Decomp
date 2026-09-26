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
extern int fn_82672C20();


void fn_823DEE48(int param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(**(int **)(*(int *)(param_1 + 8) + 0x4b0) + 0xd4) + 0xc);
  if (puVar1[4] == 0) {
    fn_82672C20(*puVar1,0xffffffff821a8484,0,0);
    puVar1[4] = 1;
    puVar1 = puVar1 + 0x1c;
    lVar2 = 8;
    do {
      puVar1 = puVar1 + 1;
      *puVar1 = 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

