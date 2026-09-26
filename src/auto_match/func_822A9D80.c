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
extern int fn_828647A8();


undefined4 * fn_822A9D80(undefined4 *param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puStack_40;
  undefined4 *apuStack_3c [15];
  
  puVar3 = *(undefined4 **)(param_2 + 4);
  puVar4 = (undefined4 *)(*(undefined4 **)(param_2 + 4))[1];
  while (*(char *)((int)puVar4 + 0x31) == '\0') {
    cVar1 = fn_828647A8(puVar4 + 3,param_3);
    if (cVar1 == '\0') {
      puVar3 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
    }
    else {
      puVar4 = (undefined4 *)puVar4[2];
    }
  }
  puStack_40 = puVar3;
  if ((puVar3 == *(undefined4 **)(param_2 + 4)) ||
     (cVar1 = fn_828647A8(param_3,puVar3 + 3), cVar1 != '\0')) {
    ppuVar2 = apuStack_3c;
    apuStack_3c[0] = *(undefined4 **)(param_2 + 4);
  }
  else {
    ppuVar2 = &puStack_40;
  }
  *param_1 = *ppuVar2;
  return param_1;
}

