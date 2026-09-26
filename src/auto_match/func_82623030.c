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
extern int fn_825D5F20();
extern int fn_825D6090();


void fn_82623030(int param_1,int param_2,undefined4 *param_3)

{
  if ((*(uint *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + param_2) & 0x800) == 0) {
    fn_825D6090(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)*param_3,4);
  }
  else {
    fn_825D5F20();
  }
  if ((*(uint *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + param_2) & 0x8000) == 0) {
    fn_825D6090(*(undefined4 *)(param_1 + 0x1c));
  }
  else {
    fn_825D5F20();
  }
  if (((~(ulonglong)*(uint *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + param_2) & 0xffffffff) >> 0x13
      & 1) == 0) {
    fn_825D6090();
  }
  else {
    fn_825D5F20(*(undefined4 *)(param_1 + 0x1c));
  }
  return;
}

