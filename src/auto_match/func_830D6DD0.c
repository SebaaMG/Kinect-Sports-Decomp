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
extern int fn_82A1EFC0();


void fn_830D6DD0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (uint)(*(ushort *)(param_2 + 0x34) >> 1) * (uint)(*(ushort *)(param_2 + 0x32) >> 1);
  iVar3 = iVar5 * 6;
  iVar4 = *(int *)(param_2 + 0x558) * iVar3 * 0x80 + *(int *)(param_1 + 0x56f8);
  *(int *)(param_3 + 0x14) = iVar4;
  iVar1 = *(int *)(param_1 + 0x5704);
  iVar2 = *(int *)(param_2 + 0x558);
  *(int *)(param_3 + 0x1c) = iVar5 * 0x300 + iVar4;
  *(int *)(param_3 + 0x18) = iVar2 * iVar3 * 4 + iVar1;
  *(int *)(param_3 + 0x20) = *(int *)(param_2 + 0x558) * iVar3 * 4 + *(int *)(param_1 + 0x5708);
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(*(undefined4 *)(param_2 + 0x160),0,iVar5 * 4);
}

