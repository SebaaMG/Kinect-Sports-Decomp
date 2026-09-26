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
extern int fn_826768C8();
extern int fn_826793F0();
extern int fn_8267A6B8();


void fn_826794F0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  RtlEnterCriticalSection(param_1 + 0x57);
  while (piVar1 = (int *)param_1[0x56], piVar1 != param_1 + 0x55) {
    piVar2 = piVar1 + -2;
    if (piVar1 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    fn_826768C8(piVar2);
  }
  RtlLeaveCriticalSection(param_1 + 0x57);
  if (*(char *)(param_1 + 4) != '\0') {
    (**(code **)(*param_1 + 0x90))(param_1);
  }
  fn_8267A6B8(param_1 + 0x879,param_1,1);
  fn_826793F0(param_1);
  return;
}

