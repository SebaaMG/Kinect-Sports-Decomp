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
extern unsigned int *auStack_c0;
extern int fn_82CE5410();
extern int fn_82D20268();
extern int fn_82F6A548();
extern int fn_82F6A594();


/* WARNING: Removing unreachable block (ram,0x82d21d24) */
/* WARNING: Removing unreachable block (ram,0x82d21afc) */
/* WARNING: Removing unreachable block (ram,0x82d21a70) */
/* WARNING: Removing unreachable block (ram,0x82d219c4) */
/* WARNING: Removing unreachable block (ram,0x82d21aa4) */
/* WARNING: Removing unreachable block (ram,0x82d21ab4) */
/* WARNING: Removing unreachable block (ram,0x82d21ac8) */
/* WARNING: Removing unreachable block (ram,0x82d21ad0) */
/* WARNING: Removing unreachable block (ram,0x82d21b0c) */
/* WARNING: Removing unreachable block (ram,0x82d21b20) */
/* WARNING: Removing unreachable block (ram,0x82d21b28) */
/* WARNING: Removing unreachable block (ram,0x82d21b50) */
/* WARNING: Removing unreachable block (ram,0x82d21b60) */
/* WARNING: Removing unreachable block (ram,0x82d21b8c) */
/* WARNING: Removing unreachable block (ram,0x82d21b90) */
/* WARNING: Removing unreachable block (ram,0x82d21bcc) */
/* WARNING: Removing unreachable block (ram,0x82d21bdc) */
/* WARNING: Removing unreachable block (ram,0x82d21bf8) */
/* WARNING: Removing unreachable block (ram,0x82d21c0c) */
/* WARNING: Removing unreachable block (ram,0x82d21c48) */
/* WARNING: Removing unreachable block (ram,0x82d21c58) */
/* WARNING: Removing unreachable block (ram,0x82d21c6c) */
/* WARNING: Removing unreachable block (ram,0x82d21c74) */
/* WARNING: Removing unreachable block (ram,0x82d21c8c) */
/* WARNING: Removing unreachable block (ram,0x82d21c90) */
/* WARNING: Removing unreachable block (ram,0x82d21cb0) */
/* WARNING: Removing unreachable block (ram,0x82d21cc0) */
/* WARNING: Removing unreachable block (ram,0x82d21cd4) */
/* WARNING: Removing unreachable block (ram,0x82d21cdc) */
/* WARNING: Removing unreachable block (ram,0x82d21ce8) */
/* WARNING: Removing unreachable block (ram,0x82d21cf0) */
/* WARNING: Removing unreachable block (ram,0x82d219dc) */
/* WARNING: Removing unreachable block (ram,0x82d219f4) */
/* WARNING: Removing unreachable block (ram,0x82d21a14) */
/* WARNING: Removing unreachable block (ram,0x82d21a4c) */
/* WARNING: Removing unreachable block (ram,0x82d21a5c) */
/* WARNING: Removing unreachable block (ram,0x82d21a78) */
/* WARNING: Removing unreachable block (ram,0x82d21d64) */

void fn_82D21940(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_c0 [192];
  
  iVar1 = fn_82F6A548();
  *(undefined4 *)(iVar1 + 0x7b0) = 0;
  if (*(int *)(iVar1 + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    fn_82D20268(iVar1,auStack_c0,1);
    uVar2 = *(undefined4 *)(iVar1 + 0x7b0);
    fn_82CE5410();
    fn_82CE5410();
  }
  fn_82F6A594(uVar2);
  return;
}

