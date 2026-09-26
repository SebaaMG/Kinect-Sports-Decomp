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
extern int fn_8262FEC8();
extern int fn_8265CA20();
extern int fn_8281B738();
extern unsigned int lbl_831E7B50;


void fn_82675B08(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x28);
  if (*piVar1 != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      if (*(int *)(param_1 + 0x30) == 0) {
        fn_8262FEC8();
        *piVar1 = 0;
        return;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    else {
      if (*(int *)(*piVar1 + 4) != 1) {
        fn_8262FEC8();
        return;
      }
      RtlEnterCriticalSection(0xffffffff831e7b5c);
      fn_8281B738(lbl_831E7B50,*(undefined4 *)(param_1 + 0x2c));
      RtlLeaveCriticalSection(0xffffffff831e7b5c);
      *(undefined4 *)(param_1 + 0x2c) = 0;
      fn_8265CA20(*piVar1);
    }
    *piVar1 = 0;
  }
  return;
}

