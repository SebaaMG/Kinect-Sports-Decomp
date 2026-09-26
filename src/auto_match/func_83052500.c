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
extern int fn_830514A8();
extern int fn_83051D60();


void fn_83052500(int *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = param_1 + 0xe;
  RtlEnterCriticalSection(piVar4);
  uVar1 = (uint)*(byte *)(param_1 + 0x2a);
  *(longlong *)(param_1 + 0x20) = param_2;
  if (uVar1 < (uint)param_1[0x29]) {
    plVar2 = (longlong *)param_1[0x27];
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        uVar3 = uVar3 + 1;
        plVar2 = *(longlong **)(plVar2 + 2);
      } while (uVar3 < uVar1);
    }
    if (*plVar2 != param_2) {
      fn_83051D60();
      RtlLeaveCriticalSection(piVar4);
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  fn_830514A8(param_1);
  RtlLeaveCriticalSection(piVar4);
  return;
}

