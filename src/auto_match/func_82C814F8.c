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
extern int fn_82C53960();
extern int fn_82C53970();
extern int fn_82C80360();


ulonglong fn_82C814F8(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x130) != 0) {
    fn_82C53970();
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  if (*(int *)(param_1 + 0x134) != 0) {
    fn_82C53970();
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  uVar1 = fn_82C80360(param_1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  uVar2 = fn_82C80360(param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  uVar3 = fn_82C53960(uVar1,0);
  *(int *)(param_1 + 0x130) = (int)uVar3;
  if ((uVar3 & 0xffffffff) != 0) {
    lVar4 = fn_82C53960(uVar2,0);
    *(int *)(param_1 + 0x134) = (int)lVar4;
    uVar3 = (ulonglong)(lVar4 != 0);
  }
  return uVar3;
}

