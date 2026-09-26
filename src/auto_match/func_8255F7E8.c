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
extern int fn_8251FA58();
extern int fn_82563400();


void fn_8255F7E8(int param_1)

{
  if ((((*(int *)(param_1 + 0x164) != 0) && (*(int *)(param_1 + 0x180) != 0)) &&
      (*(int *)(param_1 + 0x16c) != 0)) && (*(int *)(param_1 + 0x110) != 0)) {
    fn_82563400(*(int *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x17c),
                      *(int *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x170),
                      *(undefined4 *)(param_1 + 0x174),*(undefined4 *)(param_1 + 0x178));
  }
  if ((*(int *)(param_1 + 0x168) == 0) && (*(int *)(param_1 + 0x164) != 0)) {
    fn_8251FA58();
  }
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  return;
}

