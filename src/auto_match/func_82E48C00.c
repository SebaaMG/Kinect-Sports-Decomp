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
extern int fn_82E47918();
extern int fn_82E4FE08();
extern int fn_82F68CC0();


undefined8 fn_82E48C00(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *puVar2;
  ulonglong uVar1;
  undefined8 uVar3;
  
  RtlEnterCriticalSection(param_1 + 1);
  puVar2 = (undefined2 *)fn_82E47918(param_1,param_2);
  uVar3 = 0;
  if (puVar2 != (undefined2 *)0x0) {
    uVar1 = fn_82E4FE08(param_4);
    *(int *)(puVar2 + 6) = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
      fn_82F68CC0(uVar1,param_3,param_4);
      *(int *)(puVar2 + 4) = (int)param_4;
      *puVar2 = 0x1011;
      goto LAB_82e48c90;
    }
    (**(code **)(*param_1 + 0x4c))(param_1,param_2);
  }
  uVar3 = 0xffffffff8007000e;
LAB_82e48c90:
  RtlLeaveCriticalSection(param_1 + 1);
  return uVar3;
}

