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


ulonglong fn_829E11B8(undefined4 *param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 1;
  uVar1 = *puVar2;
  while( true ) {
    if ((uVar1 & 0xffffc000) == 0) {
      return -(ulonglong)(*(short *)(param_1 + 3) == 0) & 0xffffffff80004005;
    }
    if ((puVar2[1] & 0x1ff00) == 0) {
      if (*(short *)(param_1 + 3) != 0) {
        return 0xffffffff80004005;
      }
      *(ushort *)(param_1 + 3) = (ushort)(puVar2[1] >> 0x11);
    }
    uVar1 = (*puVar2 >> 3 & 0x7fe) + (*puVar2 >> 0xe) + param_1[2];
    param_1[2] = uVar1;
    if ((uint)param_1[1] <= uVar1) break;
    if ((uint)*(ushort *)((int)param_1 + 0xe) <= puVar2[1] >> 0x11) {
      *(ushort *)((int)param_1 + 0xe) = (ushort)(puVar2[1] >> 0x11) + 1;
    }
    puVar2 = (uint *)((int)puVar2 + (*puVar2 >> 3 & 0x7fe) + (*puVar2 >> 0xe));
    uVar1 = *puVar2;
  }
  return 0xffffffff80004005;
}

