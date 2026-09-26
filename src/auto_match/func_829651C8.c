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


undefined8 fn_829651C8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_3 + 0xbc) + 0x58);
  iVar3 = iVar4 + param_1 * 0xc;
  iVar4 = iVar4 + param_2 * 0xc;
  uVar1 = *(uint *)(iVar3 + 4);
  uVar2 = *(uint *)(iVar4 + 4);
  if (uVar2 <= uVar1) {
    if (uVar2 < uVar1) {
      return 1;
    }
    iVar3 = *(int *)(iVar3 + 8);
    iVar4 = *(int *)(iVar4 + 8);
    if (iVar4 <= iVar3) {
      if (iVar4 < iVar3) {
        return 1;
      }
      iVar4 = *(int *)(*(int *)(param_3 + 0xbc) + 0x58);
      uVar1 = *(uint *)(iVar4 + param_2 * 0xc);
      uVar2 = *(uint *)(iVar4 + param_1 * 0xc);
      if (uVar2 <= uVar1) {
        if (uVar1 <= uVar2) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0xffffffffffffffff;
}

