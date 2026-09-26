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


void fn_82A3D430(int param_1,short param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x251e);
  if ((int)param_2 < *(int *)(param_1 + 0x2518)) {
    iVar2 = (int)cVar1;
    if ('\x0f' < cVar1) {
      iVar2 = 0x10;
    }
    iVar2 = (iVar2 + 0x127a) * 2;
    *(short *)(iVar2 + param_1) = *(short *)(iVar2 + param_1) + 1;
  }
  else {
    *(char *)(param_1 + 0x251e) = cVar1 + '\x01';
    fn_82A3D430(param_1,*(undefined2 *)((param_2 + 0x3c6) * 4 + param_1));
    fn_82A3D430(param_1,*(undefined2 *)(param_2 * 4 + param_1 + 0xf1a));
    *(char *)(param_1 + 0x251e) = *(char *)(param_1 + 0x251e) + -1;
  }
  return;
}

