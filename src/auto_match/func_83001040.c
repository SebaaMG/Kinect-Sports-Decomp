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
extern int fn_82FFFF50();
extern int fn_82FFFFE0();
extern int fn_83027260();


undefined8 fn_83001040(int *param_1,ulonglong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  if ((param_2 & 0xffffffff) < 4) {
    bVar1 = (int)param_2 != 0;
    if (param_2 == 1 && bVar1) {
      fn_82FFFFE0(param_1);
      *(byte *)((int)param_1 + 0x3d) = *(byte *)((int)param_1 + 0x3d) | 1;
      return 1;
    }
    if ((param_2 != 2 || !bVar1) && (!bVar1)) {
      fn_82FFFFE0(param_1);
      return 1;
    }
    if (param_1[0x19] == 0) {
      fn_82FFFF50(param_1);
    }
  }
  if (param_1[0x19] == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = fn_83027260(param_1[0x19],param_2);
    (**(code **)(*param_1 + 0x48))((double)(longlong)(int)param_2,param_1);
  }
  return uVar2;
}

