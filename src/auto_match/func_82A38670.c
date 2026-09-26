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
extern int fn_8265C990();


void fn_82A38670(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1[1] != 0) {
    RtlEnterCriticalSection(param_1 + 5);
    if ((param_1[3] != 0) && (uVar1 = 0, param_1[2] != 0)) {
      iVar2 = 0;
      do {
        if (*(int *)(iVar2 + param_1[1]) != -1) {
          (**(code **)(*(int *)*param_1 + 4))(((int *)(iVar2 + param_1[1]))[1]);
          NtClose(*(undefined4 *)(iVar2 + param_1[1] + 0x14));
          NtClose(*(undefined4 *)(iVar2 + param_1[1]));
        }
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 0x58;
      } while (uVar1 < (uint)param_1[2]);
    }
    RtlLeaveCriticalSection(param_1 + 5);
  }
  if (param_1[0xc] != 0) {
    param_1[0xc] = 0;
  }
  if (param_1[0xe] != 0) {
    fn_8265C990(param_1[0xd],0x24830000);
    param_1[0xe] = 0;
  }
  param_1[0xd] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

