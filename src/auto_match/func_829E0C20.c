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


uint * fn_829E0C20(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  if ((param_2 & 0xffff) == 0) {
    if (param_1[2] + 8U <= (uint)param_1[1]) {
      return (uint *)(*param_1 + param_1[2]);
    }
  }
  else {
    puVar3 = (uint *)*param_1;
    uVar4 = 0;
    while( true ) {
      if (puVar3[1] >> 0x11 == (param_2 & 0xffff)) {
        return puVar3;
      }
      uVar1 = *puVar3 >> 0xe;
      if (uVar1 == 0) break;
      iVar2 = (*puVar3 >> 3 & 0x7fe) + uVar1;
      uVar4 = iVar2 + uVar4;
      if ((uint)param_1[2] <= uVar4) {
        return (uint *)0x0;
      }
      puVar3 = (uint *)(iVar2 + (int)puVar3);
    }
  }
  return (uint *)0x0;
}

