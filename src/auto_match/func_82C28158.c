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
extern int fn_82C10B28();
extern int fn_82C279A8();
extern int fn_82C27D50();
extern int fn_82C27E48();


void fn_82C28158(int param_1)

{
  int aiStack_20 [4];
  
  aiStack_20[0] = *(int *)(param_1 + 0x2c);
  fn_82C279A8();
  fn_82C27E48(param_1);
  fn_82C27D50(param_1,1);
  if (*(int *)(aiStack_20[0] + 0x10) != 0) {
    fn_82C10B28(*(undefined4 *)(aiStack_20[0] + 0x48),0x1d,aiStack_20[0] + 0x10);
  }
  if (aiStack_20[0] != 0) {
    fn_82C10B28(*(undefined4 *)(aiStack_20[0] + 0x48),0x1d,aiStack_20);
  }
  return;
}

