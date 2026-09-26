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
extern int fn_828EA608();


void fn_824B85D8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  if ((((param_2 == 0xb) && (*(int *)(param_1 + 0x1c) != 0)) &&
      (cVar3 = fn_828EA608(), cVar3 != '\0')) && (*(int *)(param_1 + 0x20) != 0)) {
    iVar2 = *(int *)(param_1 + 0x20) * 4;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x100);
    if (*(int *)(iVar1 + iVar2) != 0) {
      *(undefined4 *)(iVar1 + iVar2) = 0;
    }
    if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
      (**(code **)(param_1 + 0x2c))
                (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_1 + 0x28));
    }
  }
  RtlEnterCriticalSection(param_1);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_2 != 0xb) {
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  RtlLeaveCriticalSection(param_1);
  return;
}

