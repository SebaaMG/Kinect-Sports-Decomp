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
extern int fn_82A277E0();
extern int fn_82A28568();
extern unsigned int uRam83297854;


int fn_82522CF8(int param_1,ulonglong param_2)

{
  undefined8 in_r0;
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  if ((uRam83297854 != 0) && ((ulonglong)uRam83297854 == (param_2 & 0xffffffff))) {
    trapWord(0x1f,in_r0,0x16);
  }
  iVar1 = fn_82A28568(*(undefined4 *)(param_1 + 0x24),0,param_2 + 4);
  if (iVar1 != 0) {
    iVar2 = fn_82A277E0(*(undefined4 *)(param_1 + 0x24),0,iVar1);
    puVar3 = (undefined2 *)(iVar2 + iVar1 + -4);
    *puVar3 = 0x9876;
    *(char *)(puVar3 + 1) = (char)*(undefined4 *)(param_1 + 0x20);
    *(int *)(param_1 + 0x2c) = (int)param_2 + *(int *)(param_1 + 0x2c);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  return iVar1;
}

