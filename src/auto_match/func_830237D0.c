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
extern int fn_82A1E810();
extern int fn_83023568();
extern int fn_83023618();
extern unsigned int lbl_83264AA4;


void fn_830237D0(int param_1)

{
  bool bVar1;
  char cVar2;
  
  RtlEnterCriticalSection(param_1 + 4);
  cVar2 = fn_83023568(param_1 + -4);
  if ((cVar2 == '\0') || (bVar1 = true, *(short *)(param_1 + 0x44) == 0)) {
    bVar1 = false;
  }
  if (bVar1) {
    fn_83023618(param_1 + -4);
  }
  RtlLeaveCriticalSection(param_1 + 4);
  fn_82A1E810(lbl_83264AA4);
  return;
}

