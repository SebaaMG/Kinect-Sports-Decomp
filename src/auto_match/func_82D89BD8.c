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
extern int fn_82D80768();
extern int fn_82D90920();


void fn_82D89BD8(int param_1)

{
  int iVar1;
  byte bVar2;
  
  if (*(int *)(param_1 + 0xcc) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(*(int *)(param_1 + 0xcc) + 0x26) >> 4 & 3;
  }
  if (((bVar2 == 0) && (*(char *)(param_1 + 0xe8) != '\x05')) && (*(int *)(param_1 + 8) != 0)) {
    *(undefined2 *)(param_1 + 0xea) = 0;
    *(undefined2 *)(param_1 + 0xec) = 0;
    fn_82D90920();
    iVar1 = *(int *)(param_1 + 8);
    fn_82D80768(param_1 + 0xe0,*(undefined1 *)(iVar1 + 0x305),*(undefined1 *)(iVar1 + 0x306),
                 *(undefined1 *)(iVar1 + 0x307));
  }
  return;
}

