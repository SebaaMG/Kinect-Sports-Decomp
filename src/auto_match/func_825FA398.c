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
extern int fn_82522ED8();


void fn_825FA398(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  puVar5 = param_1 + 2;
  lVar4 = 3;
  do {
    iVar1 = puVar5[3];
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x28);
      fn_82522ED8();
    }
    puVar5[2] = 0;
    lVar4 = lVar4 + -1;
    puVar5 = puVar5 + 3;
    *puVar5 = 0;
  } while (lVar4 != 0);
  iVar1 = param_1[2];
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x1c);
    iVar3 = *(int *)(iVar1 + 0x20);
    while (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 0x18);
      fn_82522ED8();
    }
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    fn_82522ED8(iVar1);
    iVar1 = iVar3;
  }
  *param_1 = 0;
  param_1[2] = 0;
  return;
}

