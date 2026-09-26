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


undefined8 fn_83004E00(int *param_1,uint param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if (param_2 < 4) {
    if (param_1[10] == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 2;
      puVar3 = (undefined4 *)((param_2 + 1) * 0xc + param_1[10]);
      piVar1 = (int *)puVar3[1];
      if (piVar1 != (int *)0x0) {
        uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,0xffffffff831bc7f4);
      }
      puVar3[1] = 0;
      *puVar3 = 0xffffffff;
      (**(code **)(*param_1 + 0x50))(param_1);
    }
  }
  else {
    uVar2 = 0x1f;
  }
  return uVar2;
}

