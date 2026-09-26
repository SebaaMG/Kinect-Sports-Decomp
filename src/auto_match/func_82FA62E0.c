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
extern unsigned int lbl_83264218;
extern unsigned int lbl_8326421C;
extern unsigned int lbl_83264220;
extern unsigned int lbl_83264224;


void fn_82FA62E0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lbl_83264220 = &lbl_83264218;
  lbl_83264224 = &lbl_83264218;
  iVar3 = 0x19;
  lbl_8326421C = 0;
  lbl_83264218 = 0;
  *param_1 = 0;
  puVar1 = param_1;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    iVar4 = 0;
    lVar5 = 0x20;
    do {
      iVar2 = iVar3 + iVar4;
      iVar4 = iVar4 + 1;
      param_1[iVar2] = &lbl_83264218;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar3 = iVar3 + 0x20;
  } while (iVar3 < 0x319);
  return;
}

