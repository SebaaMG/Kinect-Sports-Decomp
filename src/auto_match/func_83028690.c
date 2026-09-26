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
extern unsigned int lbl_832642E0;


undefined8 fn_83028690(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = 0;
  lVar5 = 5;
  puVar2 = (undefined4 *)(param_1 + 0x14);
  do {
    *(undefined1 *)(param_1 + 0x5c + iVar3) = 0xff;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 3;
    *puVar2 = 0;
    iVar1 = lbl_832642E0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar4 = lbl_832642E0 + 0xfe0;
  RtlEnterCriticalSection(iVar4);
  iVar3 = (*(uint *)(param_1 + 0xc) % 0xc1) * 4;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + iVar1 + 0xffc);
  *(int *)(iVar3 + iVar1 + 0xffc) = param_1;
  *(int *)(iVar1 + 0x1300) = *(int *)(iVar1 + 0x1300) + 1;
  RtlLeaveCriticalSection(iVar4);
  return 1;
}

