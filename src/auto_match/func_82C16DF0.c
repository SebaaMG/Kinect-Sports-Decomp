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
extern int fn_82C2B580();
extern int fn_82F691F0();


undefined8 fn_82C16DF0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  iVar1 = *param_1;
  iVar2 = fn_82C2B580((ulonglong)*(ushort *)(iVar1 + 0x22) << 3);
  param_1[2] = iVar2;
  if (iVar2 != 0) {
    if (*(short *)(iVar1 + 0x22) == 0) {
      return 0;
    }
    iVar2 = fn_82C2B580(0x1c);
    *(int *)(param_2 + 0x1a8) = iVar2;
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)(iVar2 + -4);
      lVar5 = 7;
      do {
        puVar4 = puVar4 + 1;
        *puVar4 = 0;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      uVar3 = fn_82C2B580(((ulonglong)*(uint *)(iVar1 + 0xe4) & 0x7fffffff) * 2 + 7);
      *(undefined4 *)(*(int *)(param_2 + 0x1a8) + 4) = uVar3;
      iVar2 = *(int *)(*(int *)(param_2 + 0x1a8) + 4);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(iVar2,0,((ulonglong)*(uint *)(iVar1 + 0xe4) & 0x7fffffff) * 2 + 7);
      }
    }
  }
  return 0xffffffff8007000e;
}

