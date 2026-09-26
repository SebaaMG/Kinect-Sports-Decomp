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
extern int fn_8265C990();
extern int fn_82A45290();
extern unsigned int lbl_83219DD0;


undefined8 fn_82A45C40(int param_1)

{
  if ((*(uint *)(param_1 + 4) & 4) != 0) {
    RtlEnterCriticalSection(0xffffffff8315d948);
    (&lbl_83219DD0)[*(ushort *)(*(int *)(param_1 + 8) + 0x50)] = 0;
    RtlLeaveCriticalSection(0xffffffff8315d948);
  }
  fn_82A45290(param_1);
  if ((*(uint *)(param_1 + 4) & 2) == 0) {
    fn_8265C990(param_1,0xffffffffa7970000);
  }
  return 0;
}

