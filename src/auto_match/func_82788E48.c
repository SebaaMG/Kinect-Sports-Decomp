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


void fn_82788E48(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*param_1 != 0) {
    uVar5 = param_2 + 1;
    if (uVar5 < *param_1) {
      do {
        uVar1 = uVar5 >> 4;
        uVar3 = uVar5 & 0x3f;
        uVar2 = param_2 >> 4;
        uVar4 = param_2 & 0x3f;
        uVar5 = uVar5 + 1;
        param_2 = param_2 + 1;
        *(undefined4 *)(*(int *)((uVar2 & 0xffffffc) + param_1[3]) + uVar4 * 4) =
             *(undefined4 *)(*(int *)((uVar1 & 0xffffffc) + param_1[3]) + uVar3 * 4);
      } while (uVar5 < *param_1);
    }
    *param_1 = *param_1 - 1;
    return;
  }
  return;
}

