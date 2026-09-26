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
extern int (*lbl_8320A4FC)();


void fn_82814B70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (lbl_8320A4FC != (code *)0x0) {
    uVar2 = (*lbl_8320A4FC)(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(iVar1 + 0x5c),
                            *(undefined4 *)(iVar1 + 0x58),4);
    *(undefined4 *)(iVar1 + 0x5c) = uVar2;
  }
  if (*(int *)(iVar1 + 0x5c) == 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 8;
  }
  return;
}

