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


void fn_823C4DD0(int param_1)

{
  uint uVar1;
  undefined4 auStack_10 [4];
  
  uVar1 = *(uint *)(param_1 + 0x1028);
  if (uVar1 == 0) {
    auStack_10[0] = *(undefined4 *)(param_1 + 0x1014);
  }
  else if (uVar1 == 1) {
    auStack_10[0] = *(undefined4 *)(param_1 + 0x1018);
  }
  else if (uVar1 < 3) {
    auStack_10[0] = *(undefined4 *)(param_1 + 0x101c);
  }
  else {
    if (uVar1 != 3) {
      return;
    }
    auStack_10[0] = *(undefined4 *)(param_1 + 0x1020);
  }
  auStack_10[0] =
       fn_82535298(auStack_10,**(undefined4 **)(param_1 + 0xfe0),0xffffffff83296bc0,
                         0xffffffff83296bd0);
  fn_82536288(auStack_10);
  return;
}

