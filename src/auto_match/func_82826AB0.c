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
extern int fn_8282D0E0();
extern unsigned int iStack00000014;
extern unsigned int stack0x00000014;


void fn_82826AB0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iStack00000014;
  
  if (((*(byte *)(param_1 + 0x134) & 0x20) == 0) || ((*(byte *)(param_1 + 0x134) & 0x10) == 0)) {
    iStack00000014 = param_1;
    fn_8282D0E0(*(undefined4 *)(param_1 + 0xcc),3,&stack0x00000014);
    param_1 = iStack00000014;
  }
  iVar2 = *(int *)(param_1 + 0xe8) + param_2 * 0xe;
  iVar1 = *(int *)((*(byte *)(iVar2 + -2) + 0xff & 0xff) * 0x21 + *(int *)(param_1 + 0x114) + 0xd) +
          *(int *)(iVar2 + -10);
  *param_3 = iVar1;
  *param_4 = *(int *)(iVar2 + -6) + iVar1 + -1;
  return;
}

