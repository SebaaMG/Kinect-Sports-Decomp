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


undefined8 fn_82F60598(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0;
  RtlEnterCriticalSection(param_1 + 0xd4);
  if (*(char *)(param_1 + 4) == '\0') {
    uVar2 = 0xffffffff82240404;
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 0x1c) + iVar4) != 0) {
          puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar4);
          (**(code **)*puVar1)(puVar1);
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar3 < *(uint *)(param_1 + 0xc));
    }
  }
  RtlLeaveCriticalSection(param_1 + 0xd4);
  return uVar2;
}

