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


undefined8 fn_828F48D8(int param_1,uint *param_2,int *param_3)

{
  uint *puVar1;
  uint *puVar3;
  int iVar4;
  uint *puVar2;
  
  puVar3 = (uint *)(*(uint **)(param_1 + 0x274))[0x17];
  puVar1 = *(uint **)(param_1 + 0x274);
  while (puVar2 = puVar3, puVar2 != (uint *)0x0) {
    puVar1 = puVar2;
    puVar3 = (uint *)puVar2[0x17];
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = *puVar1;
  }
  if (param_3 != (int *)0x0) {
    iVar4 = puVar1[1] - *puVar1;
    if (puVar1[1] < *puVar1) {
      iVar4 = 0;
    }
    *param_3 = iVar4;
  }
  return 0;
}

