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
extern int fn_8306C690();


ulonglong fn_82EE93F8(int param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    RtlEnterCriticalSection(param_1 + 0x50);
    (**(code **)(*param_2 + 4))(param_2);
    iVar2 = fn_8306C690(*(undefined4 *)(param_1 + 0x70),0,0,param_2 + 1);
    if (iVar2 == 0) {
      uVar1 = thunk_FUN_82a2b798();
      (**(code **)(*param_2 + 8))(param_2);
      if (0 < (int)uVar1) {
        uVar1 = uVar1 & 0xffff | 0x80070000;
      }
    }
    else {
      uVar1 = 0;
    }
    RtlLeaveCriticalSection(param_1 + 0x50);
  }
  else {
    fn_82A29A38();
    uVar1 = 0xffffffffc00d3e85;
  }
  return uVar1;
}

