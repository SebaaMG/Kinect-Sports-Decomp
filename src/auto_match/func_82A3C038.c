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
extern int fn_82A39E18();


void fn_82A3C038(int param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x860) != 0) {
    fn_82A39E18();
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x858) - (ulonglong)*(uint *)(param_1 + 0x854);
    if (0 < lVar1) {
      (**(code **)(param_1 + 0x4340))
                (*(undefined4 *)(param_1 + 0x4330),(ulonglong)*(uint *)(param_1 + 0x854),lVar1,
                 *(undefined4 *)(param_1 + 0x860));
    }
  }
  *(undefined4 *)(param_1 + 0x860) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0x20;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_1 + 0x854);
  return;
}

