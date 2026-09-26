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
extern int fn_828093F0();


undefined8 fn_8306BC58(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x3f8) != '\0') {
    RtlEnterCriticalSection(0xffffffff83265098);
  }
  iVar2 = (*(int *)(param_1 + 8) + 4) * 4;
  *(uint *)(iVar2 + param_1) =
       *(uint *)((*(int *)(param_1 + 0xc) + 4) * 4 + param_1) ^ *(uint *)(iVar2 + param_1);
  uVar1 = fn_828093F0(*(undefined4 *)((*(int *)(param_1 + 8) + 4) * 4 + param_1));
  iVar2 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 == 0xf9) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc) + 1;
  *(int *)(param_1 + 0xc) = iVar2;
  if (iVar2 == 0xf9) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 0x3f8) != '\0') {
    RtlLeaveCriticalSection(0xffffffff83265098);
  }
  return uVar1;
}

