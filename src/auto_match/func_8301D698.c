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
extern int fn_8301BCA0();
extern int fn_8301C090();
extern int fn_8301D4F0();
extern int fn_83026B30();
extern int fn_83037500();
extern int fn_8303A630();


byte fn_8301D698(int param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  undefined8 uVar7;
  char acStack_60 [96];
  
  if (*(int *)(param_1 + 8) != 1) {
    return 0;
  }
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0xc) + 0xfc) + 8);
  iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2);
  if ((iVar3 != -1) && (*(undefined1 *)(param_2 + 0x353) = 1, iVar3 == 0)) {
LAB_8301d86c:
    fn_8303A630(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xfc));
    *(undefined4 *)(param_1 + 8) = 2;
    return 0;
  }
  (**(code **)(*piVar2 + 0x24))(piVar2,param_1 + 0x160);
  fn_83037500(param_2,*(uint *)(piVar2[0x1b] + 0x24) >> 0xe);
  fn_8301C090(param_1,*(undefined1 *)(param_2 + 0x350),piVar2,param_2,acStack_60);
  if ((*(char *)(param_1 + 0x3e) == '\0') || (cVar5 = '\0', acStack_60[0] == '\0')) {
    cVar5 = '\x01';
  }
  if ((acStack_60[0] != '\0') || ((*(byte *)((int)piVar2 + 0xda) & 2) != 0)) {
    if ((*(byte *)((int)piVar2 + 0xd9) & 2) == 0) {
      if ((*(byte *)((int)piVar2 + 0xda) & 0x80) != 0) {
        *(undefined1 *)(param_2 + 0x352) = 1;
      }
    }
    else {
      *(undefined1 *)(param_2 + 0x353) = 1;
    }
  }
  *(char *)(param_2 + 0x351) = cVar5;
  iVar3 = *(int *)(param_1 + 0xc);
  bVar6 = 1;
  if (cVar5 == '\0') {
    if (*(int *)(param_1 + 0x194) == 2) {
      bVar6 = 0;
      if (*(char *)(param_1 + 0x3d) != '\0') {
        (**(code **)(*(int *)(iVar3 + 0xc0) + 0x10))(iVar3 + 0xc0,*(undefined4 *)(param_1 + 400));
      }
      if (*(int *)(param_1 + 400) == 0) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0xc0) + 8))(*(int *)(param_1 + 0xc) + 0xc0);
      }
      else if (*(int *)(param_1 + 400) == 1) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0xc0) + 8))(*(int *)(param_1 + 0xc) + 0xc0);
        uVar1 = *(ushort *)(param_2 + 0xc);
        if (piVar2[0x4d] < (int)(uint)uVar1) {
          iVar4 = fn_8301D4F0(param_1,uVar1);
          if (iVar4 == 0x11) {
            fn_8303A630(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xfc));
            *(undefined4 *)(param_1 + 8) = 2;
          }
        }
        else {
          piVar2[0x4d] = piVar2[0x4d] - (uint)uVar1;
        }
      }
      goto LAB_8301d9c4;
    }
    if (*(int *)(param_1 + 0x194) != 1) goto LAB_8301d9c4;
    fn_8303A630(*(undefined4 *)(iVar3 + 0xfc));
    *(undefined4 *)(param_1 + 8) = 2;
  }
  else {
    if (((*(char *)(param_1 + 0x3d) != '\0') &&
        ((*(byte *)(*(int *)(iVar3 + 0xfc) + 0xc) & 0x80) != 0)) || (*(int *)(param_1 + 0x194) != 2)
       ) goto LAB_8301d9c4;
    if ((*(byte *)(*(int *)(iVar3 + 0xfc) + 0xc) & 0x80) != 0) {
      uVar7 = 0;
      iVar4 = (**(code **)(*piVar2 + 0x34))(piVar2,*(undefined4 *)(param_1 + 400));
      if (iVar4 == 1) {
        fn_83026B30(*(undefined4 *)(param_1 + 0xc));
        uVar7 = 1;
      }
      else if (iVar4 == 2) goto LAB_8301d86c;
      iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0xc0) + 0x14))
                        (*(int *)(param_1 + 0xc) + 0xc0,*(undefined4 *)(param_1 + 400),uVar7);
      if (iVar4 != 1) {
        fn_8303A630(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xfc));
        *(undefined4 *)(param_1 + 8) = 2;
        return 0;
      }
      goto LAB_8301d9c4;
    }
    iVar4 = fn_8301BCA0(param_1);
    if (iVar4 == 0x3f) {
      cVar5 = '\0';
    }
    else {
      if (iVar4 == 1) goto LAB_8301d9c4;
      fn_8303A630(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xfc));
      cVar5 = '\0';
      *(undefined4 *)(param_1 + 8) = 2;
    }
  }
  bVar6 = 0;
LAB_8301d9c4:
  *(char *)(param_1 + 0x3d) = cVar5;
  *(char *)(param_1 + 0x3e) = acStack_60[0];
  if ((cVar5 != '\0') || (bVar6 != 0)) {
    if ((int)(uint)*(ushort *)(param_2 + 0xc) <= piVar2[0x4d]) {
      piVar2[0x4d] = piVar2[0x4d] - (uint)*(ushort *)(param_2 + 0xc);
      bVar6 = -(*(char *)(iVar3 + 0xba) == '\0') & bVar6;
    }
  }
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return bVar6;
}

