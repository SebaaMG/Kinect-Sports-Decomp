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
extern int fn_827D50F8();
extern int fn_827D9DA0();
extern int fn_827D9DC0();
extern int fn_827E4408();
extern int fn_827E8298();


undefined8 fn_827E5AF8(int *param_1)

{
  int iVar3;
  undefined8 uVar1;
  ulonglong uVar2;
  uint *puVar4;
  
  iVar3 = fn_827D50F8(param_1[5]);
  if (iVar3 == 0) {
    uVar2 = fn_827D9DC0(param_1[2]);
    if (*(int *)((param_1[1] + 3) * 0x28 + param_1[8]) == 0) {
      uVar1 = 0x4b0;
    }
    else {
      if (((uVar2 & 2) == 0) && ((uVar2 & 1) == 0)) {
        fn_827D9DA0(param_1[2],uVar2 | 1);
        puVar4 = (uint *)(**(code **)(*param_1 + 0x1c))(param_1);
        iVar3 = fn_827E8298(((ulonglong)(uint)param_1[7] & 0x3ffffff) * 0x40 + (ulonglong)*puVar4);
        if (iVar3 != 0) {
          iVar3 = *(int *)param_1[2];
          uVar1 = fn_827E4408();
          (**(code **)(iVar3 + 8))(param_1[2],uVar1);
        }
      }
      uVar1 = 0x3e4;
    }
  }
  else {
    uVar1 = 0x4c7;
  }
  return uVar1;
}

