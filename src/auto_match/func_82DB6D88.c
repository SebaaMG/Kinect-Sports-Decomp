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
extern int fn_82CE5410();


void fn_82DB6D88(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(*(int *)(*param_2 + 0xcc) + 0x4c);
  piVar3 = (int *)fn_82CE5410();
  iVar2 = *piVar3;
  *piVar3 = (iVar1 + 0x7fU & 0xffffff80) + iVar2;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_82f691f0(iVar2,0,iVar1);
}

