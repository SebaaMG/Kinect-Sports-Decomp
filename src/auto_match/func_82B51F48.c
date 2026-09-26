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
extern int fn_82AE7308();
extern int fn_82B51E30();


ulonglong fn_82B51F48(int param_1,undefined8 param_2,uint param_3,uint param_4,ulonglong param_5,
                       undefined8 param_6)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x234) + 0x50);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_3 * 4 + iVar3);
  }
  if ((((*(uint *)(param_1 + 0x28) & 0x10000) == 0) || (0x2d6 < param_3)) &&
     (((*(uint *)(param_1 + 0x28) & 0x40000) == 0 ||
      ((param_3 < *(uint *)(param_1 + 600) || (*(uint *)(param_1 + 600) + 0xc <= param_3)))))) {
    puVar4 = (uint *)(param_3 * 0x28 + *(int *)(param_1 + 0xc));
    if (puVar4[7] == 0) {
      fn_82AE7308(param_1,param_3);
    }
    uVar1 = 0;
    uVar5 = 0;
    if ((*puVar4 & 0x1fff8) != 0) {
      iVar3 = 0;
      do {
        if ((*(uint *)(puVar4[7] + iVar3) >> 4 & 0x3fff) == param_4) {
          fn_82B51E30(param_1,param_2,param_3,uVar2,uVar5,1,param_6);
          uVar1 = uVar1 + 1;
          if ((param_5 & 0xffffffff) <= (uVar1 & 0xffffffff)) {
            return uVar1;
          }
        }
        uVar5 = uVar5 + 1;
        iVar3 = iVar3 + 8;
      } while ((uVar5 & 0xffffffff) < ((ulonglong)(*puVar4 >> 3) & 0x3fff));
    }
  }
  else {
    fn_82B51E30(param_1,param_2,param_3,uVar2,0,4,param_6);
    uVar1 = 4;
  }
  return uVar1;
}

