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
extern int fn_82FB38A8();
extern int fn_82FED5B0();
extern int fn_82FF2F20();
extern int fn_82FF3D88();
extern unsigned int lbl_83264574;
extern unsigned int lbl_83264578;
extern unsigned int lbl_8326457C;


undefined8 fn_82FF37F0(void)

{
  RtlEnterCriticalSection(0xffffffff83264580);
  fn_82FED5B0();
  fn_82FF2F20();
  lbl_83264574 = 0;
  lbl_83264578 = 0;
  lbl_8326457C = 0;
  fn_82FF3D88(0xffffffff831bc7b4);
  fn_82FB38A8(0xffffffff831bc7d4);
  RtlLeaveCriticalSection(0xffffffff83264580);
  return 1;
}

