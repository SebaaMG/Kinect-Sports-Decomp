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
extern int fn_82A1BB18();
extern int fn_82A1E650();


undefined8 fn_82E50F00(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    bVar1 = false;
    iVar2 = fn_82A1BB18();
    RtlEnterCriticalSection(param_1);
    if ((*(int *)(param_1 + 0x38) == iVar2) ||
       ((((*(int *)(param_1 + 0x38) == 0 && (*(int *)(param_1 + 0x34) == 0)) &&
         (*(int *)(param_1 + 0x2c) == 0)) && (*(int *)(param_1 + 0x28) == 0)))) {
      iVar3 = *(int *)(param_1 + 0x30) + 1;
      *(int *)(param_1 + 0x30) = iVar3;
      if (iVar3 == 1) {
        *(int *)(param_1 + 0x38) = iVar2;
      }
    }
    else {
      bVar1 = true;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    RtlLeaveCriticalSection(param_1);
    if (bVar1) {
      fn_82A1E650(*(undefined4 *)(param_1 + 0x1c),0xffffffffffffffff);
      RtlEnterCriticalSection(param_1);
      *(int *)(param_1 + 0x38) = iVar2;
      *(undefined4 *)(param_1 + 0x34) = 0;
      RtlLeaveCriticalSection(param_1);
    }
    return 0;
  }
  bVar1 = false;
  RtlEnterCriticalSection();
  if ((*(int *)(param_1 + 0x30) == 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  else {
    bVar1 = true;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  RtlLeaveCriticalSection(param_1);
  if (bVar1) {
    fn_82A1E650(*(undefined4 *)(param_1 + 0x20),0xffffffffffffffff);
  }
  return 0;
}

