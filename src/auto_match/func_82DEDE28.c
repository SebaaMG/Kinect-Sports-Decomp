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


void fn_82DEDE28(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_2 * 0xc + *(int *)(param_1 + 8));
  iVar4 = 0;
  if (0 < piVar5[1]) {
    do {
      piVar3 = (int *)((*piVar5 + iVar4) * 8 + *(int *)(param_1 + 0x14));
      iVar1 = *(int *)((piVar3[1] * 0x14 + param_3 + 0x10) * 4 + *(int *)(*piVar3 + 0x18));
      if (iVar1 != 0) {
        iVar2 = fn_82CE5410();
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar2 + 0x10),param_4,4);
        }
        *(int *)(param_4[1] * 4 + *param_4) = iVar1;
        param_4[1] = param_4[1] + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < piVar5[1]);
  }
  return;
}

