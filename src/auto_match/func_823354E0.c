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
extern unsigned int *auStack_e0;
extern int fn_82A1EFC0();
extern int fn_82F6A548();


/* WARNING: Removing unreachable block (ram,0x82335598) */
/* WARNING: Removing unreachable block (ram,0x823355a4) */
/* WARNING: Removing unreachable block (ram,0x823355b4) */
/* WARNING: Removing unreachable block (ram,0x823355ec) */
/* WARNING: Removing unreachable block (ram,0x82335668) */
/* WARNING: Removing unreachable block (ram,0x823356ac) */
/* WARNING: Removing unreachable block (ram,0x823356e4) */
/* WARNING: Removing unreachable block (ram,0x823356bc) */
/* WARNING: Removing unreachable block (ram,0x82335674) */
/* WARNING: Removing unreachable block (ram,0x82335698) */
/* WARNING: Removing unreachable block (ram,0x823356a4) */
/* WARNING: Removing unreachable block (ram,0x82335660) */

void fn_823354E0(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_e0 [224];
  
  iVar2 = fn_82F6A548();
  iVar1 = *(int *)param_2;
  if ((param_2 & 0xffffffff) == (ulonglong)*(uint *)(iVar1 + 0x2b20)) {
    *(undefined4 *)(iVar1 + 0x2cb0) = *(undefined4 *)(iVar1 + 0x6d0);
    *(undefined4 *)(iVar1 + 0x2cb4) = *(undefined4 *)(iVar1 + 0xae4);
    *(undefined4 *)(iVar1 + 0x2cac) = 1;
  }
  *(undefined4 *)(iVar2 + 0x210) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_e0,0,100);
}

