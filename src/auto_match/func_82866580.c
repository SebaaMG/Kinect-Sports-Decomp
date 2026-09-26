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
extern int fn_82868268();
extern int fn_82868328();
extern int fn_828683E8();
extern int fn_828684A8();
extern int fn_82868648();
extern int fn_82868708();
extern int fn_828687C8();


undefined8 fn_82866580(int param_1)

{
  if (*(int *)(param_1 + 0x4a8) != 0) {
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    fn_82868328();
  }
  if (*(int *)(param_1 + 0x4a4) != 0) {
    *(undefined4 *)(param_1 + 0x4a4) = 0;
    fn_828683E8();
  }
  if (*(int *)(param_1 + 0x4a0) != 0) {
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    fn_82868268();
  }
  if (*(int *)(param_1 + 0x49c) != 0) {
    *(undefined4 *)(param_1 + 0x49c) = 0;
    fn_828687C8();
  }
  if (*(int *)(param_1 + 0x498) != 0) {
    *(undefined4 *)(param_1 + 0x498) = 0;
    fn_82868708();
  }
  if (*(int *)(param_1 + 0x494) != 0) {
    *(undefined4 *)(param_1 + 0x494) = 0;
    fn_82868648();
  }
  if (*(int *)(param_1 + 0x490) != 0) {
    *(undefined4 *)(param_1 + 0x490) = 0;
    fn_828684A8();
  }
  return 0x200a0000;
}

