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
extern int fn_82552890();
extern int fn_825529B0();
extern int fn_82552B50();
extern int fn_8261D538();


undefined8 fn_825DA108(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (*(int *)(param_2 + 0x5bc) != 0) {
    fn_8261D538();
  }
  uVar4 = *(undefined4 *)(param_2 + 0x5cc);
  uVar1 = *(undefined4 *)(param_2 + 0x5d8);
  uVar2 = *(undefined4 *)(param_2 + 0x5c4);
  uVar3 = *(undefined4 *)(param_2 + 0x5c8);
  iVar9 = 0;
  *(undefined4 *)(param_1 + 0xb78) = uVar3;
  *(int *)(param_1 + 0xb60) = param_1;
  *(undefined4 *)(param_1 + 0xb7c) = uVar3;
  *(undefined4 *)(param_1 + 0xb74) = uVar2;
  *(undefined4 *)(param_1 + 0xb80) = uVar4;
  *(undefined4 *)(param_1 + 0xb70) = uVar1;
  if (*(int *)(param_1 + 0xb68) != 0) {
    *(undefined4 *)(param_1 + 0xb68) = 0;
  }
  *(undefined4 *)(param_1 + 0xb84) = *(undefined4 *)(param_2 + 0x5c0);
  iVar5 = *(int *)(param_2 + 0x5bc);
  if (iVar5 != 0) {
    iVar10 = param_1 + 0xa30;
    iVar7 = (iVar5 + 0xa30) - iVar10;
    do {
      if ((iVar9 != 4) && (iVar9 != 7)) {
        iVar8 = iVar7 + iVar10;
        iVar6 = fn_825529B0(iVar8);
        if (iVar6 != 0) {
          iVar6 = fn_825529B0(iVar10);
          if (iVar6 != 0) {
            fn_82552B50(iVar10,1);
          }
          if (*(int *)(param_1 + 0x38) == 0) {
            fn_82552890(iVar10,iVar8,param_1);
          }
        }
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x18;
    } while (iVar9 < 9);
    *(undefined4 *)(param_1 + 0xb08) = *(undefined4 *)(iVar5 + 0xb08);
  }
  return 1;
}

