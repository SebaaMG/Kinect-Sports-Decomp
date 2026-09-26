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
extern int fn_82F60160();
extern int fn_82F60C10();
extern int fn_82F61288();


void fn_82F60A18(int param_1)

{
  RtlEnterCriticalSection(param_1 + 0xd4);
  if (*(char *)(param_1 + 4) != '\0') {
    fn_82F61288(param_1 + 0x90);
    fn_82F60C10(param_1 + 0x24);
    fn_8265C990(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x14));
    fn_8265C990(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  RtlLeaveCriticalSection(param_1 + 0xd4);
  fn_82F60160(param_1);
  fn_8265C990(param_1,0x24be4000);
  return;
}

