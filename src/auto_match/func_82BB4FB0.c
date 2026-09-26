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
extern int fn_82AB15D0();
extern int fn_82BD32C0();
extern int fn_82BD32F8();


void fn_82BB4FB0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = 0;
  if ((param_1[1] == 3) || (param_1[1] == 2)) {
    uVar7 = 1;
    if (*param_1 == 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0158,0xffffffff820e0168,0x181);
    }
    iVar2 = *param_1;
    do {
      iVar6 = iVar2;
      if (param_1[1] == 2) {
        cVar3 = fn_82BD32C0(*(undefined4 *)(iVar6 + 0x28));
        if (cVar3 == '\0') goto LAB_82bb5048;
      }
      else {
LAB_82bb5048:
        if (param_1[1] == 3) {
          cVar3 = fn_82BD32F8(*(undefined4 *)(iVar6 + 0x28));
          if (cVar3 != '\0') goto LAB_82bb507c;
        }
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e00d0,0xffffffff820e0168,0x187);
      }
LAB_82bb507c:
      uVar7 = -((uint)(*(int *)(iVar6 + 0x3c) == 0) - (*(int *)(iVar6 + 0x3c) >> 0x1f)) & uVar7;
      iVar2 = *(int *)(iVar6 + 0x40);
    } while (*(int *)(iVar6 + 0x40) != 0);
    if (uVar7 != 0) {
      *param_1 = 0;
      if (param_1[1] == 3) {
        param_1[1] = 1;
      }
      else if (param_1[1] == 2) {
        param_1[1] = 0;
      }
    }
  }
  lVar5 = 2;
  do {
    if (*param_2 != 0) {
      piVar1 = *(int **)(*param_2 + 0x28);
      cVar3 = (**(code **)(*piVar1 + 0x14))(piVar1);
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*piVar1 + 0x18))(piVar1);
        if (cVar3 != '\0') {
          if (param_1[1] == 3) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e00b8,0xffffffff820e0168,0x1b4);
          }
          cVar3 = fn_82BD32C0(piVar1);
          iVar2 = param_1[1];
          if (cVar3 == '\0') {
            if (iVar2 == 1) {
              param_1[1] = 0;
            }
          }
          else {
            if ((iVar2 == 0) || (iVar2 == 1)) {
              param_1[1] = 2;
            }
            if (*param_1 != 0) {
              if (iVar6 == 0) {
                fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e006c,0xffffffff820e0168,0x1bb);
              }
              *(int *)(iVar6 + 0x40) = *param_2;
              if (*(int *)(*param_2 + 0x40) != 0) {
                uVar4 = 0x1bd;
                goto LAB_82bb51bc;
              }
              goto LAB_82bb51d0;
            }
            iVar6 = *param_2;
            *param_1 = iVar6;
            if (*(int *)(iVar6 + 0x40) != 0) {
              uVar4 = 0x1c2;
              goto LAB_82bb52d0;
            }
          }
        }
      }
      else {
        if (param_1[1] == 2) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0054,0xffffffff820e0168,0x19e);
        }
        cVar3 = fn_82BD32F8(piVar1);
        iVar2 = param_1[1];
        if (cVar3 == '\0') {
          if (iVar2 == 0) {
            param_1[1] = 1;
          }
        }
        else {
          if ((iVar2 == 0) || (iVar2 == 1)) {
            param_1[1] = 3;
          }
          if (*param_1 == 0) {
            iVar6 = *param_2;
            *param_1 = iVar6;
            if (*(int *)(iVar6 + 0x40) != 0) {
              uVar4 = 0x1ac;
LAB_82bb52d0:
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e009c,0xffffffff820e0168,uVar4);
            }
          }
          else {
            if (iVar6 == 0) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e006c,0xffffffff820e0168,0x1a5);
            }
            *(int *)(iVar6 + 0x40) = *param_2;
            if (*(int *)(*param_2 + 0x40) != 0) {
              uVar4 = 0x1a7;
LAB_82bb51bc:
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e007c,0xffffffff820e0168,uVar4);
            }
LAB_82bb51d0:
            iVar6 = *(int *)(iVar6 + 0x40);
          }
        }
      }
    }
    lVar5 = lVar5 + -1;
    param_2 = param_2 + 1;
    if (lVar5 == 0) {
      return;
    }
  } while( true );
}

