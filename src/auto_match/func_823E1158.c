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
extern int fn_822C6880();
extern int fn_822C72E0();
extern int fn_822C8C60();


void fn_823E1158(int param_1,int param_2)

{
  if (param_2 == 1) {
    fn_822C72E0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x114) + 0x20),
                      param_1 + 0x24);
    fn_822C8C60(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x114),1,0);
    fn_822C6880(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x114) + 0x48));
  }
  else if (param_2 == 2) {
    fn_822C72E0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 0x114) + 0x20),
                      param_1 + 100);
  }
  return;
}

