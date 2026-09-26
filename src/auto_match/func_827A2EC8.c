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
extern int fn_82790538();
extern int fn_82794EA0();
extern int fn_82795C78();
extern int fn_82795EE0();
extern int fn_827A2C28();
extern int fn_827A2E70();


void fn_827A2EC8(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  fn_827A2C28();
  iVar1 = param_1 + 0x14;
  fn_82794EA0(iVar1);
  fn_82790538(iVar1,*(undefined4 *)(param_1 + 0x10),param_2,param_3);
  fn_82795C78(iVar1,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),0,
                    *(undefined4 *)(param_1 + 0x18));
  fn_82795EE0(iVar1,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8));
  fn_827A2E70(param_1);
  return;
}

