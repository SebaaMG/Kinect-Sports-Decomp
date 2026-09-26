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


undefined8 fn_82A2B9A0(int param_1,uint param_2,uint param_3,uint *param_4,undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar2 = (uint)*(byte *)(param_1 + 0xc9);
  uVar3 = uVar2;
  if ((param_3 != 0) && (param_3 < 4)) {
    uVar1 = *(uint *)("XLNI_DET_MEDIA" + param_3 * 4 + 0xc);
    trapWord(6,(ulonglong)uVar1,0);
    param_2 = (param_2 / uVar1) * uVar1;
  }
  while( true ) {
    puVar4 = (uint *)(uVar3 * 8 + *(int *)(param_1 + 0x30));
    if ((*(byte *)((int)puVar4 + 7) & 0x80) == 0) {
      return 0;
    }
    if ((*puVar4 == param_2) && ((*(byte *)((int)puVar4 + 7) & 3) == param_3)) break;
    uVar3 = (uint)*(byte *)((int)puVar4 + 5);
    if (uVar3 == uVar2) {
      return 0;
    }
  }
  *param_4 = uVar3;
  *param_5 = puVar4;
  return 1;
}

