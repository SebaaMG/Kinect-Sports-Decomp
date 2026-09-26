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
extern int fn_82634AE0();
extern int fn_82637168();
extern int fn_82F691F0();


longlong fn_82635F00(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  param_1[iVar1 * 0x9b4 + 0x22] = 0;
  if (((~(ulonglong)*(uint *)(param_1[iVar1 * 0x9b4 + 4] + 0x4db4) & 0xffffffff) >> 4 & 1) != 0) {
    uVar4 = param_2[1] >> 0xc & 0xf;
    uVar3 = 1 << uVar4;
    if ((uVar3 & 0x6ff8) != 0) {
      uVar2 = param_1[iVar1 * 0x9b4 + 0x1d];
      fn_82634AE0(param_1 + iVar1 * 0x9b4 + 4);
      if (((ulonglong)(uint)param_1[iVar1 * 0x9b4 + 0x1d] - (ulonglong)uVar2 != 0) &&
         ((uVar3 & 0x607e) != 0)) {
        *param_2 = *param_2 & 0xfffff000 |
                   *param_2 +
                   (int)((ulonglong)(uint)param_1[iVar1 * 0x9b4 + 0x1d] - (ulonglong)uVar2) & 0xfff;
      }
    }
    if (((((~(ulonglong)*(uint *)(param_1[iVar1 * 0x9b4 + 4] + 0x4db4) & 0xffffffff) >> 5 & 1) != 0)
        && (uVar4 == 0xc)) && ((param_2[1] & 0x100) == 0)) {
      param_1[iVar1 * 0x9b4 + 5] = 0;
      *(undefined1 *)(param_1 + iVar1 * 0x9b4 + 0x23) = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_1 + iVar1 * 0x9b4 + 0x24,0,0x20);
    }
  }
  fn_82637168(param_1 + iVar1 * 0x9b4 + 0x1f,param_2,param_1 + iVar1 * 0x9b4 + 0x18);
  return (ulonglong)(uint)param_1[iVar1 * 0x9b4 + 0x20] - 1;
}

