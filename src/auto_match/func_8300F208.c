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
extern int fn_82A1E650();
extern int fn_83037648();
extern int fn_83037D58();


undefined8 fn_8300F208(int param_1,undefined2 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  *param_2 = (short)param_3;
  iVar2 = param_1 + 4;
  RtlEnterCriticalSection(iVar2);
  uVar1 = fn_83037D58(param_1 + 0x20,param_2,param_3);
  RtlLeaveCriticalSection(iVar2);
  if ((int)uVar1 == 0x34) {
    do {
      *(undefined1 *)(param_1 + 0x44) = 1;
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      fn_83037648(param_1 + 0x9c);
      fn_82A1E650(*(undefined4 *)(param_1 + 0xb0),0xffffffffffffffff);
      RtlEnterCriticalSection(iVar2);
      uVar1 = fn_83037D58(param_1 + 0x20,param_2,param_3);
      RtlLeaveCriticalSection(iVar2);
    } while ((int)uVar1 == 0x34);
  }
  return uVar1;
}

