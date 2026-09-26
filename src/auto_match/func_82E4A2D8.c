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
extern int fn_82E49FA8();
extern int fn_82F68CC0();


undefined8 fn_82E4A2D8(int param_1,uint *param_2,int param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if ((param_2 == (uint *)0x0) || (param_3 == 0)) {
    uVar5 = 0xffffffff80070057;
  }
  else {
    *param_2 = *(uint *)(param_3 + 0x20);
    if ((ulonglong)*(uint *)(param_3 + 0x48) != (ulonglong)*(uint *)(param_3 + 0x3c)) {
      uVar3 = (ulonglong)*(uint *)(param_3 + 0x54);
      if (uVar3 < *(uint *)(param_3 + 0x20)) {
        uVar1 = *(uint *)(param_3 + 0x20) - uVar3;
        if ((ulonglong)*(uint *)(param_3 + 0x40) <= (uVar1 & 0xffffffff)) {
          uVar1 = (ulonglong)*(uint *)(param_3 + 0x40);
        }
        fn_82F68CC0((ulonglong)*(uint *)(param_3 + 0x3c),uVar3 + *(uint *)(param_3 + 0x48),uVar1);
        if (*(int *)(param_1 + 0xb8) == 0) {
          return 0xffffffffc00d36bb;
        }
        fn_82E49FA8(*(int *)(param_1 + 0xb8),*(undefined4 *)(param_3 + 0x48));
        uVar2 = *(int *)(param_3 + 0x20) - *(int *)(param_3 + 0x54);
        uVar4 = *(uint *)(param_3 + 0x40);
        if (uVar2 < *(uint *)(param_3 + 0x40)) {
          uVar4 = uVar2;
        }
        *param_2 = uVar4;
      }
      else {
        *param_2 = 0;
      }
    }
    *(undefined4 *)(param_3 + 0x48) = 0;
  }
  return uVar5;
}

