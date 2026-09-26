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
extern unsigned int *auStack_10;
extern int fn_82535298();
extern int fn_82536288();


void fn_82456AC8(int param_1,undefined4 *param_2)

{
  undefined4 auStack_10 [4];
  
  auStack_10[0] = *param_2;
  auStack_10[0] =
       fn_82535298(auStack_10,**(undefined4 **)(param_1 + 0x28),0xffffffff83296bc0,
                         0xffffffff83296bd0);
  fn_82536288(auStack_10);
  return;
}

