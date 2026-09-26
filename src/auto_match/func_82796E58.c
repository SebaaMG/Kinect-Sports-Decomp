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
extern int fn_8278FD68();
extern int fn_82795EE0();
extern int fn_82796498();


void fn_82796E58(int param_1)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x10) - 1;
  if (((longlong)uVar3 < 0) || (bVar1 = false, (int)*(uint *)(param_1 + 0x10) <= (int)uVar3)) {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)*(uint *)((int)((uVar3 & 0xffffffff) << 2) + *(int *)(param_1 + 0xc));
  }
  if ((uVar3 == 0) && (uVar3 = fn_82796498(param_1,0), uVar3 == 0)) {
    return;
  }
  cVar2 = fn_8278FD68(uVar3);
  if (cVar2 == '\0') {
    fn_82795EE0(uVar3,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
  }
  return;
}

