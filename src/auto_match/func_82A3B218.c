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


void fn_82A3B218(int *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = (uint *)((uint)*(ushort *)(*param_1 + param_2) * 4 + param_1[2]);
  if (*puVar1 != param_2) {
    return;
  }
  iVar3 = param_2 * 4;
  if (*puVar1 <= param_3) {
    *puVar1 = 0;
    *(undefined4 *)(param_1[4] + iVar3) = 0;
    *(undefined4 *)(param_1[3] + iVar3) = 0;
    return;
  }
  uVar4 = *(uint *)(param_1[3] + iVar3);
  if (uVar4 <= param_3) {
    uVar4 = 0;
    *(undefined4 *)(param_1[3] + iVar3) = 0;
  }
  uVar2 = *(uint *)(param_1[4] + iVar3);
  if (uVar2 <= param_3) {
    uVar2 = 0;
    *(undefined4 *)(param_1[4] + iVar3) = 0;
  }
  while( true ) {
    for (; uVar4 <= uVar2; uVar2 = *(uint *)(uVar2 * 4 + param_1[3])) {
      uVar2 = -(uint)(param_3 < uVar2) & uVar2;
      *puVar1 = uVar2;
      if (uVar2 == 0) {
        return;
      }
      puVar1 = (uint *)(uVar2 * 4 + param_1[3]);
    }
    uVar4 = -(uint)(param_3 < uVar4) & uVar4;
    *puVar1 = uVar4;
    if (uVar4 == 0) break;
    puVar1 = (uint *)(uVar4 * 4 + param_1[4]);
    uVar4 = *(uint *)(uVar4 * 4 + param_1[4]);
  }
  return;
}

