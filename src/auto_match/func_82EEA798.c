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
extern int fn_82A29A38();
extern int fn_82EE9FF0();
extern int fn_82EEA6E8();


void fn_82EEA798(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *apiStack_30 [12];
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    RtlEnterCriticalSection(param_1 + 0x54);
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 != 0) {
      apiStack_30[0] = (int *)0x0;
      while (iVar2 = fn_82EEA6E8(iVar2,apiStack_30), iVar2 != 0) {
        if (apiStack_30[0] != (int *)0x0) {
          (**(code **)(*apiStack_30[0] + 8))();
          apiStack_30[0] = (int *)0x0;
        }
        iVar2 = *(int *)(param_1 + 0x50);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
      RtlLeaveCriticalSection(param_1 + 0x54);
    }
    fn_82EE9FF0(param_1);
  }
  else {
    fn_82A29A38();
  }
  return;
}

