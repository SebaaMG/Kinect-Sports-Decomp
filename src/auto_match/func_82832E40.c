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


undefined4 * fn_82832E40(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar3[1] + 0x1d) != '\0') {
    return puVar3;
  }
  puVar1 = (undefined4 *)puVar3[1];
  do {
    if (puVar1[4] == param_2[1]) {
      uVar5 = puVar1[5];
      uVar4 = param_2[2];
      if (uVar5 == uVar4) {
        uVar5 = puVar1[3];
        uVar4 = *param_2;
      }
      bVar6 = uVar4 <= uVar5;
    }
    else {
      bVar6 = param_2[1] <= (uint)puVar1[4];
    }
    if (bVar6) {
      puVar2 = (undefined4 *)*puVar1;
      puVar3 = puVar1;
    }
    else {
      puVar2 = (undefined4 *)puVar1[2];
    }
    puVar1 = puVar2;
  } while (*(char *)((int)puVar2 + 0x1d) == '\0');
  return puVar3;
}

