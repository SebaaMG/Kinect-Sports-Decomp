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
extern unsigned int *auStack_40;
extern int fn_82E838A0();
extern int fn_82E86AF0();
extern int fn_82E86C50();
extern int fn_82F02410();
extern int fn_82F15B18();
extern int fn_82F19D30();
extern int fn_82F6B2A8();
extern float lbl_82005708;
extern unsigned int lbl_831ADEE0;
extern unsigned int lbl_831ADEE4;


void fn_82E88BE8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  longlong lVar3;
  undefined4 uVar6;
  undefined8 uVar5;
  double dVar7;
  undefined4 auStack_40 [10];
  
  if (*(int *)(param_1 + 0xb08) != 0) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0xaf0),1);
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),(ulonglong)*(uint *)(param_1 + 0x5320) - 1,1
                     );
    if (*(int *)(param_1 + 0xaf0) != 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x5a4) != 0) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x5a8),1);
  }
  if (*(int *)(param_1 + 0x1eb8) != 0) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(uint *)(param_1 + 0x64c) & 1,2);
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(uint *)(param_1 + 0x1dd0) & 3,2);
  if ((*(int *)(param_1 + 4) == 6) && (*(int *)(param_1 + 0xafc) != 0)) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0xb00),1);
  }
  fn_82E86AF0(param_1);
  if ((*(int *)(param_1 + 0xaf0) == 0) || (*(int *)(param_1 + 0xaf0) == 4)) {
    dVar7 = (double)fn_82F6B2A8(((double)(longlong)
                                          (*(int *)(param_1 + 8000) - *(int *)(param_1 + 0x1f10)) /
                                 (double)(longlong)*(int *)(param_1 + 8000)) * lbl_82005708);
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),(int)dVar7,7);
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x58c),5);
  if (*(int *)(param_1 + 0x58c) < 9) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x590),1);
  }
  if (*(int *)(param_1 + 0x5a0) != 0) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x594),1);
  }
  *(undefined4 *)(param_1 + 0x614) = *(undefined4 *)(param_1 + 0x588);
  if (*(int *)(param_1 + 0xa04) != 0) {
    auStack_40[0] = 0;
    auStack_40[7] = 3;
    auStack_40[5] = 3;
    auStack_40[2] = 2;
    auStack_40[3] = 2;
    auStack_40[1] = 1;
    auStack_40[4] = 6;
    auStack_40[6] = 7;
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),auStack_40[*(int *)(param_1 + 0xa1c) * 2],
                      auStack_40[*(int *)(param_1 + 0xa1c) * 2 + 1]);
  }
  if ((((*(int *)(param_1 + 4) == 6) && (*(int *)(param_1 + 0xaf0) != 2)) &&
      (*(int *)(param_1 + 0xaf0) != 4)) && (*(int *)(param_1 + 0x64c) != 0)) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x10),2);
  }
  if ((*(int *)(param_1 + 0xaf0) == 0) || (*(int *)(param_1 + 0xaf0) == 4)) {
    if (*(int *)(param_1 + 0x62c) != 0) {
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x630),1);
    }
    if (*(int *)(param_1 + 0x630) == 0) {
      if (*(int *)(param_1 + 0x604) != 0) {
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x600),1);
      }
      if (*(int *)(param_1 + 0x600) == 0) {
        if ((ulonglong)*(uint *)(param_1 + 0x4e44) == 0) {
          uVar5 = 1;
          lVar3 = 0;
        }
        else {
          uVar5 = 2;
          lVar3 = (ulonglong)*(uint *)(param_1 + 0x4e44) + 1;
        }
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),lVar3,uVar5);
        if ((ulonglong)*(uint *)(param_1 + 0x4e48) == 0) {
          uVar5 = 1;
          lVar3 = 0;
        }
        else {
          uVar5 = 2;
          lVar3 = (ulonglong)*(uint *)(param_1 + 0x4e48) + 1;
        }
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),lVar3,uVar5);
      }
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x4e4c),1);
    }
    if ((*(int *)(param_1 + 0xa0c) == 0) || (*(int *)(param_1 + 0x978) == 0)) {
      *(undefined4 *)(param_1 + 0x97c) = 0;
      *(undefined1 *)(param_1 + 0x980) = 0;
      *(undefined4 *)(param_1 + 0x984) = 0;
      *(char *)(param_1 + 0x981) = (char)*(undefined4 *)(param_1 + 0x588);
    }
    else {
      if (*(int *)(param_1 + 0x97c) == 0) {
        *(undefined4 *)(param_1 + 0x97c) = 0;
        *(undefined1 *)(param_1 + 0x980) = 0;
        *(undefined4 *)(param_1 + 0x984) = 0;
        *(char *)(param_1 + 0x981) = (char)*(undefined4 *)(param_1 + 0x588);
      }
      fn_82E86C50(param_1,0);
    }
  }
  else {
    fn_82E838A0(param_1);
    if (*(int *)(param_1 + 0x89c) == 0) {
      fn_82F19D30(param_1,1);
    }
    if ((0 < *(int *)(param_1 + 0x84c)) && (*(int *)(param_1 + 0xaf0) == 2)) {
      fn_82F19D30(param_1,3);
    }
    fn_82F19D30(param_1,0);
    fn_82F15B18(param_1);
    if (*(int *)(param_1 + 0x978) != 0) {
      fn_82E86C50(param_1,1);
    }
    if (*(int *)(param_1 + 0x648) != 0) {
      uVar6 = 1;
      uVar2 = *(undefined4 *)(param_1 + 0x1ebc);
      if (*(int *)(param_1 + 0x61c) == 0) {
        fn_82F02410(uVar2,1,1);
        uVar2 = *(undefined4 *)(param_1 + 0x1ebc);
        iVar1 = *(int *)(param_1 + 0x620) * 8;
        uVar4 = *(undefined4 *)(&lbl_831ADEE0 + iVar1);
        uVar6 = *(undefined4 *)(&lbl_831ADEE4 + iVar1);
      }
      else {
        uVar4 = 0;
      }
      fn_82F02410(uVar2,uVar4,uVar6);
    }
    if (*(int *)(param_1 + 0x604) != 0) {
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x600),1);
    }
    if (*(int *)(param_1 + 0x600) == 0) {
      if ((ulonglong)*(uint *)(param_1 + 0x4e44) == 0) {
        uVar5 = 1;
        lVar3 = 0;
      }
      else {
        uVar5 = 2;
        lVar3 = (ulonglong)*(uint *)(param_1 + 0x4e44) + 1;
      }
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),lVar3,uVar5);
    }
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x4e4c),1);
  }
  return;
}

