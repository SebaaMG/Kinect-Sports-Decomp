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
extern int fn_82CFF8D0();
extern int fn_82D714B8();
extern int fn_82D717C8();


void fn_82DAF7E8(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((*(uint *)(param_1 + 0x50) & 0x80000000) == 0) {
    uVar4 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x48),*(uint *)(param_1 + 0x50) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82141e94,*(undefined4 *)(param_1 + 0x48),
               *(int *)(param_1 + 0x4c) << 2,uVar4);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    iVar6 = 0;
    do {
      iVar2 = *(int *)(iVar6 + *(int *)(param_1 + 0x48));
      (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82141e60,iVar2,0);
      (**(code **)(*param_2 + 0x18))(param_2,0xffffffff82141e68);
      uVar1 = *(ushort *)(iVar2 + 0xb2);
      if ((uVar1 & 0x8000) == 0) {
        (**(code **)(*param_2 + 0x14))
                  (param_2,3,0xffffffff82141e74,*(undefined4 *)(iVar2 + 0xac),
                   (ulonglong)*(ushort *)(iVar2 + 0xb0) * 0x30,
                   (((ulonglong)uVar1 & 0x3fff) + ((ulonglong)uVar1 & 0x3fff) * 2) * 0x10);
      }
      iVar7 = 0;
      if (*(short *)(iVar2 + 0xb0) != 0) {
        iVar8 = 0;
        do {
          iVar3 = *(int *)(*(int *)(iVar2 + 0xac) + iVar8);
          if ((*(ushort *)(iVar3 + 4) & 0x7fff) != 0) {
            (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82141e80,iVar3,0);
          }
          iVar3 = *(int *)(*(int *)(*(int *)(iVar2 + 0xac) + iVar8) + 0xc);
          if ((*(ushort *)(iVar3 + 4) & 0x7fff) != 0) {
            (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82141e8c,iVar3,0);
          }
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 0x30;
        } while (iVar7 < (int)(uint)*(ushort *)(iVar2 + 0xb0));
      }
      (**(code **)(*param_2 + 0x1c))(param_2);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x4c));
  }
  if ((*(uint *)(param_1 + 0x40) & 0x80000000) == 0) {
    uVar4 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x38),*(uint *)(param_1 + 0x40) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82141e54,*(undefined4 *)(param_1 + 0x38),
               *(int *)(param_1 + 0x3c) << 2,uVar4);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    iVar6 = 0;
    do {
      (**(code **)(*param_2 + 0xc))
                (param_2,0xffffffff8213331c,*(undefined4 *)(iVar6 + *(int *)(param_1 + 0x38)),0);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x3c));
  }
  fn_82D717C8(param_1 + 0x58,param_2);
  (**(code **)(*param_2 + 0x18))(param_2,0xffffffff82141e48);
  fn_82D714B8(param_1 + 0x58,*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x78),param_2);
  (**(code **)(*param_2 + 0x1c))(param_2);
  return;
}

