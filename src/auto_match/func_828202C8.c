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
extern int fn_82814D10();
extern int fn_82814D28();
extern int fn_82F68CC0();


void fn_828202C8(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x20);
  pcVar2 = *(char **)(iVar1 + 0x30);
  if (*pcVar2 == '\x01') {
    fn_82F68CC0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(pcVar2 + 0x18),
                 *(undefined4 *)(pcVar2 + 0x10));
    iVar5 = fn_82814D10(param_1);
    if (iVar5 != 0) {
      fn_82814D28(param_1);
    }
  }
  iVar5 = 0;
  iVar6 = 0;
  lVar7 = 2;
  do {
    iVar3 = *(int *)(iVar1 + 0x2c) + iVar6;
    iVar4 = iVar5 + *(int *)(param_1 + 0x1c);
    iVar6 = iVar6 + 4;
    iVar5 = iVar5 + 0x14;
    *(undefined4 *)(iVar4 + 0x5c) = *(undefined4 *)(iVar3 + 4);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

