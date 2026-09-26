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
extern int fn_8267C8D8();
extern int fn_8267D9C0();


/* WARNING: Removing unreachable block (ram,0x8267e50c) */
/* WARNING: Removing unreachable block (ram,0x8267e488) */
/* WARNING: Removing unreachable block (ram,0x8267e4cc) */
/* WARNING: Removing unreachable block (ram,0x8267e510) */
/* WARNING: Removing unreachable block (ram,0x8267e524) */
/* WARNING: Removing unreachable block (ram,0x8267e4e0) */
/* WARNING: Removing unreachable block (ram,0x8267e4f4) */
/* WARNING: Removing unreachable block (ram,0x8267e490) */
/* WARNING: Removing unreachable block (ram,0x8267e4a0) */
/* WARNING: Removing unreachable block (ram,0x8267e4a4) */
/* WARNING: Removing unreachable block (ram,0x8267e4c8) */

bool fn_8267E6B0(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    return false;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (*(int *)(iVar1 + 0x10) < iVar2) {
    bVar3 = false;
  }
  else {
    fn_8267C8D8(iVar1 + 0x18);
    bVar3 = *(int *)(iVar1 + 0x14) + iVar2 <= *(int *)(iVar1 + 0x10);
    if (bVar3) {
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + iVar2;
    }
    fn_8267D9C0(iVar1 + 0x18);
  }
  return bVar3;
}

