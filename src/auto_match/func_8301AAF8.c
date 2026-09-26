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


undefined8 fn_8301AAF8(int param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = *(int **)((param_2 % 0xc1 + 10) * 4 + param_1);
  if (piVar2 != (int *)0x0) {
    while (piVar2[1] != param_2) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)0x0) {
        return 2;
      }
    }
    if ((uint *)(piVar2 + 2) != (uint *)0x0) {
      uVar1 = piVar2[2];
      puVar3 = (undefined4 *)(uVar1 + 0xc);
      if ((ulonglong)uVar1 == 0xfffffffffffffff8) {
        puVar3 = (undefined4 *)0x0;
      }
      *param_3 = *puVar3;
      param_3[1] = puVar3[1];
      return 1;
    }
  }
  return 2;
}

