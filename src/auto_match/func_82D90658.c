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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82DAE778();
extern int fn_82DBC718();
extern int fn_83081390();


void fn_82D90658(int param_1,int param_2)

{
  int iVar1;
  char cVar4;
  int iVar3;
  longlong lVar2;
  int iVar5;
  
  cVar4 = fn_82DBC718((undefined4 *)(param_1 + 0x1d0),*(undefined4 *)(param_2 + 0x48),
                       *(undefined4 *)(param_2 + 0x4c),0xe0);
  if (cVar4 == '\0') {
    *(byte *)(param_2 + 0x26) = *(byte *)(param_2 + 0x26) & 0xcf | 0x10;
  }
  else {
    iVar3 = fn_82CE5410();
    if (*(uint *)(param_1 + 0x38) == (*(uint *)(param_1 + 0x3c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),(int *)(param_1 + 0x34),4);
    }
    iVar3 = 0;
    *(int *)(*(int *)(param_1 + 0x38) * 4 + *(int *)(param_1 + 0x34)) = param_2;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    *(undefined4 *)((uint)*(ushort *)(param_2 + 0x20) * 4 + *(int *)(param_1 + 0x28)) =
         *(undefined4 *)(*(int *)(param_1 + 0x2c) * 4 + *(int *)(param_1 + 0x28) + -4);
    *(ushort *)(*(int *)((uint)*(ushort *)(param_2 + 0x20) * 4 + *(int *)(param_1 + 0x28)) + 0x20) =
         *(ushort *)(param_2 + 0x20);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x38) + 0xffff;
    *(short *)(param_2 + 0x20) = (short)lVar2;
    *(byte *)(param_2 + 0x26) = *(byte *)(param_2 + 0x26) & 0x3f;
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x1d0);
    if (0 < *(int *)(param_2 + 0x4c)) {
      iVar5 = 0;
      do {
        iVar1 = *(int *)(iVar5 + *(int *)(param_2 + 0x48));
        fn_83081390((double)*(float *)(param_2 + 0x44),lVar2,iVar1 + 0xf0);
        (**(code **)(*(int *)(iVar1 + 0xe0) + 0x40))(iVar1 + 0xe0,0xffffffff8323b1a0);
        lVar2 = (**(code **)(*(int *)(iVar1 + 0xe0) + 0x44))(iVar1 + 0xe0,0xffffffff8323b1a0);
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar3 < *(int *)(param_2 + 0x4c));
    }
    fn_82DAE778(param_1,param_2);
  }
  return;
}

