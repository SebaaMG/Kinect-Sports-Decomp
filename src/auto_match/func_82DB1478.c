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


void fn_82DB1478(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = 0;
  if (0 < *(int *)(param_2 + 0x38)) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)(param_2 + 0x34);
      iVar5 = 0;
      if (0 < *(int *)(*(int *)(iVar4 + iVar3) + 0x4c)) {
        iVar6 = 0;
        do {
          iVar3 = *(int *)(*(int *)(*(int *)(iVar4 + iVar3) + 0x48) + iVar6);
          iVar1 = fn_82CE5410();
          if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),param_1,4);
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 4;
          *(int *)(param_1[1] * 4 + *param_1) = iVar3 + 0x10;
          param_1[1] = param_1[1] + 1;
          iVar3 = *(int *)(param_2 + 0x34);
        } while (iVar5 < *(int *)(*(int *)(iVar4 + iVar3) + 0x4c));
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < *(int *)(param_2 + 0x38));
  }
  iVar2 = *(int *)(param_2 + 0x20);
  iVar3 = 0;
  iVar4 = *(int *)(param_2 + 0x24);
  if (0 < *(int *)(iVar2 + 0x4c)) {
    iVar5 = 0;
    do {
      iVar6 = *(int *)(*(int *)(iVar2 + 0x48) + iVar5);
      if (iVar6 != iVar4) {
        iVar1 = fn_82CE5410();
        if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),param_1,4);
        }
        *(int *)(param_1[1] * 4 + *param_1) = iVar6 + 0x10;
        param_1[1] = param_1[1] + 1;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar3 < *(int *)(iVar2 + 0x4c));
  }
  return;
}

