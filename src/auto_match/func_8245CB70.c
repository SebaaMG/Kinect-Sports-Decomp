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
extern int fn_82459C60();
extern int fn_8245CBE0();
extern int fn_82522FF0();


void fn_8245CB70(int param_1,int param_2)

{
  double dVar1;
  
  RtlEnterCriticalSection();
  *(undefined4 *)(param_1 + 0x6a4) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  fn_82459C60(param_1 + 0x40);
  fn_8245CBE0(param_1);
  if (param_2 != 0) {
    dVar1 = (double)fn_82522FF0();
    *(double *)(param_1 + 0x678) = dVar1 - *(double *)(param_1 + 0x670);
  }
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  RtlLeaveCriticalSection(param_1);
  return;
}

