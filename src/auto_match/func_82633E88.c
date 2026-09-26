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


undefined8 fn_82633E88(uint *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar1 = *param_1;
  uVar6 = 0;
  uVar4 = uVar1 >> 0xc & 7;
  puVar7 = (uint *)((uVar1 & 0xfff) * 0xc + param_2);
  if (uVar4 == 0) {
    return 1;
  }
  uVar5 = 0;
  do {
    if ((1 << (uVar5 & 0x3f) & uVar1 >> 0x10 & 0xfff) == 0) {
      if (((*(byte *)(puVar7 + 2) & 0x1f) < 0x14) ||
         (bVar3 = true, 0x17 < (*(byte *)(puVar7 + 2) & 0x1f))) {
        bVar3 = false;
      }
      if ((*puVar7 >> 0x1a < 0x1b) || (bVar2 = true, 0x22 < *puVar7 >> 0x1a)) {
        bVar2 = false;
      }
      if ((bVar3) || (bVar2)) {
        return 0;
      }
    }
    uVar6 = uVar6 + 1;
    uVar5 = uVar5 + 2;
    puVar7 = puVar7 + 3;
    if (uVar4 <= uVar6) {
      return 1;
    }
  } while( true );
}

