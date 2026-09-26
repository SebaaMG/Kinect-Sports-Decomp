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
extern int fn_83004B48();
extern int fn_8301B058();
extern unsigned int lbl_832642EC;


void fn_830093E8(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  if (((param_2 == 0) && (*(int *)(param_1 + 0x24) != 0)) &&
     (*(char *)(*(int *)(param_1 + 0x24) + 0x3c) != -1)) {
    fn_8301B058(lbl_832642EC,param_1);
    if (*(int *)(param_1 + 0x24) != 0) {
      fn_83004B48(param_1,*(int *)(param_1 + 0x24),0xff,param_3,param_4);
    }
  }
  return;
}

