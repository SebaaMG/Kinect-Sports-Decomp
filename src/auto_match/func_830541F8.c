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
extern unsigned int *auStack_30;
extern int fn_830508A0();
extern int fn_83051330();


void fn_830541F8(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 auStack_30 [6];
  
  auStack_30[0] = param_2[2];
  fn_83051330(param_1,auStack_30,*(undefined4 *)(param_2 + 4),
                  *(undefined4 *)((int)param_2 + 0x1c),0);
  fn_830508A0(param_1,*param_2,param_2[2]);
  iVar1 = *(int *)(param_1 + 0x60);
  iVar2 = iVar1 + 0x10;
  RtlEnterCriticalSection(iVar2);
  if (*(int *)(iVar1 + 0x98) == 0) {
    *(undefined8 **)(iVar1 + 0x98) = param_2;
    *(undefined4 *)((int)param_2 + 0xc) = 0;
    RtlLeaveCriticalSection(iVar2);
  }
  else {
    *(int *)((int)param_2 + 0xc) = *(int *)(iVar1 + 0x98);
    *(undefined8 **)(iVar1 + 0x98) = param_2;
    RtlLeaveCriticalSection(iVar2);
  }
  return;
}

