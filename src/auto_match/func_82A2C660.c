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


undefined4 * fn_82A2C660(undefined4 *param_1,undefined2 *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  
  bVar2 = false;
  puVar4 = param_1;
  while( true ) {
    for (puVar1 = (undefined4 *)*puVar4; puVar1 != puVar4; puVar1 = (undefined4 *)*puVar1) {
      iVar3 = RtlCompareStringN(*(undefined4 *)(param_2 + 2),*param_2,puVar1 + 2,
                                *(undefined1 *)(puVar1 + -5),1);
      if (iVar3 == 0) {
        return puVar1 + -0x12;
      }
    }
    if (bVar2) break;
    if ((*(byte *)((int)param_1 + 0x35) & 4) == 0) {
      puVar4 = (undefined4 *)param_1[3];
      if (puVar4 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
    }
    else {
      puVar4 = param_1 + 0x10;
    }
    bVar2 = true;
  }
  return (undefined4 *)0x0;
}

