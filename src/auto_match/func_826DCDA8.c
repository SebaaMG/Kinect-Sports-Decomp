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
extern int fn_826D6BE0();
extern int fn_826D7FF8();
extern int fn_826DB3B8();


void fn_826DCDA8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  sync(1);
  sync(1);
  *param_1 = 0;
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x20);
    sync(1);
  }
  while (sync(1), param_1[2] != 0) {
    iVar1 = param_1[2];
    sync(1);
    sync(1);
    param_1[2] = *(int *)(param_1[2] + 0x18);
    fn_826DB3B8(iVar1);
  }
  while (sync(1), param_1[6] != 0) {
    iVar1 = param_1[6];
    sync(1);
    sync(1);
    param_1[6] = *(int *)(param_1[6] + 0xc);
    fn_826D6BE0(iVar1,0);
  }
  while (sync(1), param_1[4] != 0) {
    iVar1 = param_1[4];
    sync(1);
    sync(1);
    param_1[4] = *(int *)(param_1[4] + 0xc);
    fn_826D7FF8(iVar1,0);
  }
  return;
}

