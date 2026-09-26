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
extern int fn_8267C4C8();
extern int fn_826DAE80();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


ulonglong fn_826DAF58(int param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uStack0000001c;
  
  iVar2 = param_1 + 0x14;
  uStack0000001c = (undefined4)param_2;
  RtlEnterCriticalSection(iVar2);
  puVar1 = (uint *)fn_826DAE80(param_1 + 0x10,&stack0x0000001c);
  if (puVar1 == (uint *)0x0) {
    RtlLeaveCriticalSection(iVar2);
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*(int *)(iVar2 + 8) + 0xc))(iVar2 + 8,param_2);
    }
  }
  else {
    fn_8267C4C8(*puVar1);
    uVar3 = (ulonglong)*puVar1;
    RtlLeaveCriticalSection(iVar2);
  }
  return uVar3;
}

