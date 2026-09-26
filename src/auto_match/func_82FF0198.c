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
extern int fn_82FECEE8();
extern int fn_82FF53E8();
extern int fn_8301B4D8();
extern unsigned int lbl_832642F4;
extern unsigned int lbl_832642F8;


undefined8 fn_82FF0198(int param_1)

{
  RtlEnterCriticalSection(0xffffffff83264558);
  if (((*(byte *)(param_1 + 0xd9) & 2) == 0) && ((*(byte *)(param_1 + 0xda) & 0x80) == 0x80)) {
    if (*(int *)(param_1 + 0x17c) != 0) {
      fn_8301B4D8(lbl_832642F8);
    }
    *(byte *)(param_1 + 0xda) = *(byte *)(param_1 + 0xda) & 0x7f;
    fn_82FECEE8(4,param_1);
    if (*(int *)(param_1 + 0x58) != 0) {
      fn_82FF53E8(lbl_832642F4);
    }
  }
  RtlLeaveCriticalSection(0xffffffff83264558);
  return 1;
}

