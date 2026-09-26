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


undefined8 fn_82BD58A8(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  RtlEnterCriticalSection(param_1 + 0xf0);
  uVar1 = 0;
  *param_2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x60);
    puVar2 = (ulonglong *)(param_3 + -8);
    do {
      uVar4 = *(ulonglong *)*puVar3;
      if ((uVar4 != 0) && ((uVar4 & 0xfbdf00ddeadbeef0) != 0xfbdf00ddeadbeef0)) {
        puVar2 = puVar2 + 1;
        *puVar2 = uVar4;
        *param_2 = *param_2 + 1;
      }
      uVar1 = uVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  RtlLeaveCriticalSection(param_1 + 0xf0);
  return 0;
}

