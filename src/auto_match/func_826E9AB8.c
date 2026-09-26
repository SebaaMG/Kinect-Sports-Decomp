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
extern int fn_826E96C8();
extern int fn_82F678C8();
extern int fn_82F6BE90();


undefined8 fn_826E9AB8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 0x1c) != 1)) {
    fn_82F6BE90(*(undefined4 *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x1c) = 1;
  uVar1 = fn_82F678C8(param_2,1,param_3,*(undefined4 *)(param_1 + 0x10));
  if ((int)uVar1 < (int)param_3) {
    uVar2 = fn_826E96C8();
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  return uVar1;
}

