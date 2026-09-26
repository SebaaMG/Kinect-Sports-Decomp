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


void fn_82CEA7A8(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar4;
  longlong lVar3;
  uint uVar5;
  
  param_1[1] = param_1[1] + -1;
  *(undefined8 *)(param_2 * 0x10 + *param_1) = 0xffffffffffffffff;
  uVar5 = param_1[2];
  uVar4 = param_2;
  do {
    uVar4 = uVar5 + uVar4 & uVar5;
  } while (*(longlong *)(uVar4 * 0x10 + *param_1) != -1);
  uVar4 = uVar4 + 1 & uVar5;
  uVar2 = param_2 + 1 & uVar5;
  while( true ) {
    iVar1 = uVar2 * 0x10;
    lVar3 = *(longlong *)(*param_1 + iVar1);
    if (lVar3 == -1) break;
    uVar5 = ((uint)lVar3 >> 4) * -0x61c8864f & uVar5;
    if ((((uVar2 < uVar4) || (uVar5 <= param_2)) &&
        ((param_2 <= uVar2 || ((uVar5 <= param_2 && (uVar2 < uVar5)))))) &&
       ((uVar5 <= param_2 || (uVar4 <= uVar5)))) {
      *(longlong *)(param_2 * 0x10 + *param_1) = lVar3;
      *(undefined8 *)(param_2 * 0x10 + *param_1 + 8) = *(undefined8 *)(*param_1 + iVar1 + 8);
      *(undefined8 *)(iVar1 + *param_1) = 0xffffffffffffffff;
      param_2 = uVar2;
    }
    uVar5 = param_1[2];
    uVar2 = uVar2 + 1 & uVar5;
  }
  return;
}

