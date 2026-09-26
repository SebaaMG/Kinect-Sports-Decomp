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
extern int fn_822315A0();
extern int fn_8236FB68();
extern int fn_82508078();


void fn_82374FA0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  
  if (((*(int *)(param_3 + 0x2c) == *(int *)(param_4 + 0x2c)) && (param_5 == 4)) &&
     (lVar1 = fn_8236FB68(0xf), lVar1 != 0)) {
    fn_82508078(*(undefined4 *)(param_1 + 0xa4),lVar1,0);
  }
  if (*(int *)(param_3 + 0x24) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x7dc) + 0x1c) = 1;
  }
  if (*(int *)(param_1 + 0x204) == 0) {
    iVar2 = (*(int *)(param_3 + 0x2c) * 2 + *(int *)(param_3 + 0x28)) * 0x88 + param_1 + 0xa14;
    *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + 1;
  }
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

