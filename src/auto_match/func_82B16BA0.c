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
extern int fn_82ABDBE8();


undefined8 fn_82B16BA0(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_2 == 0) {
    if (param_3 != 0) {
      return 0;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    uVar1 = *(uint *)(param_2 + 4);
    if (uVar1 != *(uint *)(param_3 + 4)) {
      return 0;
    }
    uVar3 = 0;
    if (uVar1 != 0) {
      puVar4 = (undefined4 *)(param_2 + 8);
      do {
        cVar2 = fn_82ABDBE8(*puVar4,*(undefined4 *)((param_3 - param_2) + (int)puVar4));
        if (cVar2 == '\0') {
          return 0;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return 1;
}

