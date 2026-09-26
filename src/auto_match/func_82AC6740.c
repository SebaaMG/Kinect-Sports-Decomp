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
extern int fn_82ABDD90();


undefined8 fn_82AC6740(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint *puVar4;
  
  uVar1 = *(uint *)(param_1 + 8) >> 7 & 0x7f;
  if ((uVar1 == 0) || (bVar3 = true, 0x66 < uVar1)) {
    bVar3 = false;
  }
  if (!bVar3) {
    if (uVar1 < 0x69) {
      return 0;
    }
    if (0x6d < uVar1) {
      if (uVar1 == 0x75) {
        iVar2 = fn_82ABDD90(*(undefined4 *)(*(int *)(param_1 & 0xfffff000) + 0x94),0x75,0,0);
        puVar4 = (uint *)(iVar2 + (param_1 - 0x10));
        if ((*puVar4 & 7) != 7) {
          return 0;
        }
        uVar1 = puVar4[1];
        if (uVar1 == 2) {
          return 1;
        }
        bVar3 = uVar1 == 3;
      }
      else {
        bVar3 = uVar1 == 0x7b;
      }
      if (!bVar3) {
        return 0;
      }
    }
  }
  return 1;
}

