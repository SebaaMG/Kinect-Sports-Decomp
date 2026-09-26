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
extern int fn_82CE4118();
extern int fn_82D94BD8();
extern unsigned int lbl_821CA9D8;


void fn_826097E8(undefined4 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = (ulonglong)(uint)param_1[6];
  *param_1 = &lbl_821CA9D8;
  if (0 < (int)param_1[6]) {
    iVar2 = 0;
    do {
      if (*(int *)(param_1[5] + iVar2) != 0) {
        fn_82CE4118(*(int *)(param_1[5] + iVar2));
        *(undefined4 *)(param_1[5] + iVar2) = 0;
      }
      uVar1 = uVar1 - 1;
      iVar2 = iVar2 + 4;
    } while (uVar1 != 0);
  }
  uVar1 = (ulonglong)(uint)param_1[9];
  if (0 < (int)param_1[9]) {
    iVar2 = 0;
    do {
      if (*(int *)(param_1[8] + iVar2) != 0) {
        fn_82CE4118(*(int *)(param_1[8] + iVar2));
        *(undefined4 *)(param_1[8] + iVar2) = 0;
      }
      uVar1 = uVar1 - 1;
      iVar2 = iVar2 + 4;
    } while (uVar1 != 0);
  }
  uVar1 = (ulonglong)(uint)param_1[3];
  if (0 < (int)param_1[3]) {
    iVar2 = 0;
    do {
      if (*(int *)(param_1[2] + iVar2) != 0) {
        fn_82CE4118(*(int *)(param_1[2] + iVar2));
        *(undefined4 *)(param_1[2] + iVar2) = 0;
      }
      uVar1 = uVar1 - 1;
      iVar2 = iVar2 + 4;
    } while (uVar1 != 0);
  }
  uVar1 = (ulonglong)(uint)param_1[0xc];
  if (0 < (int)param_1[0xc]) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + param_1[0xb]) != 0) {
        fn_82CE4118(*(int *)(iVar2 + param_1[0xb]));
        *(undefined4 *)(iVar2 + param_1[0xb]) = 0;
      }
      uVar1 = uVar1 - 1;
      iVar2 = iVar2 + 4;
    } while (uVar1 != 0);
  }
  fn_82D94BD8(param_1);
  return;
}

