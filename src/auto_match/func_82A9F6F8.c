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
extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A9A860();
extern int fn_82A9A9E8();
extern int fn_82A9C480();
extern int fn_82A9D448();
extern int fn_82A9E960();


void fn_82A9F6F8(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xa0) == 0) {
    fn_82A9D448();
  }
  fn_82A99B70(param_2,0xffffffff820d2dc4);
  fn_82A99B70(param_2,0xffffffff821bab90);
  *(undefined4 *)(param_2 + 8) = 1;
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2db8);
  fn_82A99B70(param_2,0xffffffff820d2d74,*(undefined4 *)(param_1 + 0xa0),
                *(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
  fn_82A99B70(param_2,0xffffffff820d2da8,0x2dff);
  fn_82A9A860(param_2);
  fn_82A9A9E8(param_1,param_2);
  fn_82A9C480(param_1,param_2);
  fn_82A9E960(param_1,param_2);
  fn_82A99C28(param_2,0xffffffff820d2db8);
  return;
}

