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
extern int fn_83011240();
extern unsigned int lbl_832642E4;
extern unsigned int lbl_83264574;


void fn_82FF2FF0(int param_1)

{
  int iVar1;
  
  RtlEnterCriticalSection(0xffffffff83264580);
  for (iVar1 = lbl_83264574; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    if (*(int *)(iVar1 + 0x18) == param_1) {
      (*(code *)**(undefined4 **)(iVar1 + 4))(iVar1 + 4,0,0);
      fn_83011240(lbl_832642E4,*(undefined4 *)(*(int *)(iVar1 + 0x68) + 0xc),0);
    }
  }
  RtlLeaveCriticalSection(0xffffffff83264580);
  return;
}

