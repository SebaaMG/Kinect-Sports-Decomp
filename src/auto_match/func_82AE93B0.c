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


void fn_82AE93B0(int *param_1)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar3 = (uint)param_1[2] >> 7 & 0x7f;
  if ((uVar3 < 0x60) || (bVar2 = true, 0x66 < uVar3)) {
    bVar2 = false;
  }
  if (bVar2) {
    uVar4 = 1;
  }
  else {
    for (puVar1 = (uint *)*param_1; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
      uVar3 = *(uint *)(puVar1[3] + 8) >> 7 & 0x7f;
      if ((uVar3 < 0x60) || (bVar2 = true, 0x66 < uVar3)) {
        bVar2 = false;
      }
      if (bVar2) {
        uVar5 = 1;
      }
      else {
        uVar3 = *puVar1 >> 0x1c & 3;
        uVar5 = (*(uint *)(puVar1[3] + 0x14) >> 0xd & 0x1fff) + uVar3;
        if ((uVar3 == 3) || (0x1fff < uVar5)) {
          uVar5 = 0x1fff;
        }
      }
      if (uVar4 < uVar5) {
        uVar4 = uVar5;
      }
    }
  }
  param_1[5] = (uVar4 & 0x1fff) << 0xd | param_1[5] & 0xfc001fffU;
  return;
}

