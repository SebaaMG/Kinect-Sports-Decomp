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
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82DAF6D0();


void fn_82D8F6B0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (*(short *)(param_2 + 0x20c) != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(iVar4 + *(int *)(param_2 + 0x208));
      if (*(int *)(iVar1 + 0xc) == *(int *)(param_1 + 0x20)) {
        iVar2 = fn_82CE5410();
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar2 + 0x10),param_3,4);
        }
        *(int *)(param_3[1] * 4 + *param_3) = iVar1;
        param_3[1] = param_3[1] + 1;
        fn_82CE4040(iVar1);
        fn_82DAF6D0(*(undefined4 *)(param_1 + 0x20),iVar1);
        *(byte *)(*(int *)(param_1 + 0x20) + 0x25) =
             *(byte *)(*(int *)(param_1 + 0x20) + 0x25) & 0xf3 | 4;
        iVar1 = *(int *)(param_1 + 0x20);
        if (*(short *)(iVar1 + 0x22) == -1) {
          *(short *)(iVar1 + 0x22) = (short)*(undefined4 *)(param_1 + 0x44);
          iVar2 = fn_82CE5410();
          if (*(uint *)(param_1 + 0x44) == (*(uint *)(param_1 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar2 + 0x10),(int *)(param_1 + 0x40),4);
          }
          *(int *)(*(int *)(param_1 + 0x44) * 4 + *(int *)(param_1 + 0x40)) = iVar1;
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < (int)(uint)*(ushort *)(param_2 + 0x20c));
  }
  return;
}

