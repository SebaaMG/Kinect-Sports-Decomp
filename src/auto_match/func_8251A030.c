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
extern int fn_822315A0();
extern int fn_82250768();
extern int fn_82250848();


void fn_8251A030(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 8))();
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[4] = 0;
  fn_82250768(param_1 + 5,*(undefined4 *)(param_1[6] + 4));
  *(int *)(param_1[6] + 4) = param_1[6];
  *(int *)param_1[6] = param_1[6];
  *(int *)(param_1[6] + 8) = param_1[6];
  param_1[7] = 0;
  fn_82250848(param_1 + 9,*(undefined4 *)(param_1[10] + 4));
  *(int *)(param_1[10] + 4) = param_1[10];
  *(int *)param_1[10] = param_1[10];
  *(int *)(param_1[10] + 8) = param_1[10];
  param_1[0xb] = 0;
  param_1[0xd] = 0x32;
  param_1[0xe] = 0;
  param_1[0xf] = 8;
  iVar1 = param_1[0x12];
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  return;
}

