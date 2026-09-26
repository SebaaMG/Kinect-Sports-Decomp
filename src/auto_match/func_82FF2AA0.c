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
extern unsigned int lbl_831BC7D4;


undefined8 fn_82FF2AA0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 1;
  RtlEnterCriticalSection(0xffffffff83264580);
  for (puVar2 = lbl_831BC7D4; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    if (puVar2[1] == param_1) {
      piVar1 = (int *)puVar2[2];
      uVar3 = 2;
      if (piVar1 != (int *)0x0) {
        uVar3 = (**(code **)(*piVar1 + 4))(piVar1,param_2,param_3,param_4);
      }
    }
  }
  RtlLeaveCriticalSection(0xffffffff83264580);
  return uVar3;
}

