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
extern unsigned int *auStack_20;
extern int fn_82405638();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int lbl_821CC160;


void fn_82405D70(int param_1)

{
  undefined8 uVar1;
  undefined4 auStack_20 [4];
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  *(undefined4 *)(param_1 + 0x44) = lbl_821CC160;
  auStack_20[0] = *(undefined4 *)(param_1 + 0x88);
  auStack_20[0] =
       fn_82535298(auStack_20,*(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x84c),
                         0xffffffff83296bc0,0xffffffff83296bd0);
  fn_82536288(auStack_20);
  uVar1 = 7;
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar1 = 6;
  }
  fn_82405638(param_1,uVar1);
  return;
}

