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
extern int fn_82BA8CB8();
extern int fn_82BC2EF0();


undefined8 fn_82BAA230(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = fn_82BC2EF0(param_2,*param_1);
  if (iVar1 != 4) {
    if (iVar1 < 5) {
      return 0;
    }
    if (iVar1 < 7) {
      if (*(char *)((int)param_1 + 0x7d) == '\0') {
        if (*(int *)(*(int *)(*param_1 + 0xab0) + 0x824) == 0) {
          fn_82BA8CB8(param_1,0,2);
        }
        *(undefined1 *)((int)param_1 + 0x7d) = 1;
        return 1;
      }
      return 0;
    }
    if (8 < iVar1) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x1f) != '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x1f) = 1;
  return 1;
}

