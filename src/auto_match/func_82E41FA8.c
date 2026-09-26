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


undefined8 fn_82E41FA8(int param_1,uint param_2,int *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  uVar3 = 0;
  uVar1 = 0;
  if (param_3 == (int *)0x0) {
    return 0xffffffff80004003;
  }
  param_2 = param_2 & 0xffff;
  if (param_2 == 0x80) {
    *param_3 = 0;
    uVar2 = 0;
    param_3[1] = 0;
    uVar5 = *(uint *)(param_1 + 0x2ac);
    if (uVar5 == 0) {
      return uVar1;
    }
    piVar4 = (int *)(param_1 + 0x2b0);
    do {
      if (*piVar4 != 0) {
        uVar3 = uVar3 + 1;
        param_3[1] = *(int *)(*piVar4 + 4) + param_3[1];
        *param_3 = *(int *)*piVar4 + *param_3;
        uVar5 = *(uint *)(param_1 + 0x2ac);
        if (uVar3 == uVar5) {
          return uVar1;
        }
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar2 < uVar5);
    return uVar1;
  }
  if (param_2 < 0x80) {
    piVar4 = *(int **)((param_2 + 0xac) * 4 + param_1);
    if (piVar4 != (int *)0x0) {
      *param_3 = *piVar4;
      param_3[1] = piVar4[1];
      return uVar1;
    }
  }
  return 0xffffffff80070057;
}

