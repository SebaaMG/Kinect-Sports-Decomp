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
extern unsigned int *auStack_50;
extern int fn_82930318();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82932B38();
extern int fn_8297FBF0();
extern int fn_8297FD50();
extern int fn_82980C18();
extern int fn_82981668();
extern int fn_829846B0();
extern int fn_829860E0();
extern int fn_829885C0();
extern unsigned int lbl_82005710;


ulonglong fn_82989BD8(int param_1,int *param_2,int param_3,int *param_4,int *param_5)

{
  int iVar2;
  ulonglong uVar1;
  int iVar3;
  double adStack_60 [2];
  undefined1 auStack_50 [80];
  
  if (param_3 != 0) {
    if ((*(int *)(param_3 + 0x18) * *(int *)(param_3 + 0x14) == 1) &&
       (iVar2 = fn_82981668(param_1,*(undefined4 *)(param_3 + 0x10)), iVar2 != 0)) {
      uVar1 = fn_82930318(0x28);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = fn_82931D88(uVar1,2,0,0,1,1,0x200);
      }
      if ((uVar1 & 0xffffffff) != 0) {
        iVar2 = fn_829846B0(param_1,uVar1,*(undefined4 *)(param_3 + 0x10),0);
        if (iVar2 == 0) {
          fn_82980C18(param_1,param_3 + 0x30,0xbcc,0xffffffff8204ea4c);
        }
        iVar2 = fn_8297FD50(param_1,param_3,1);
        if (((iVar2 != 0) && (iVar2 = fn_829860E0(param_1,param_3,auStack_50), -1 < iVar2)) &&
           (iVar2 = fn_8297FBF0(param_1,adStack_60,auStack_50,param_3 + 0x30), -1 < iVar2)) {
          if (adStack_60[0] == lbl_82005710) {
            param_4 = param_5;
          }
          uVar1 = fn_82930458(param_4);
          return uVar1;
        }
        iVar2 = fn_82930318(0x34);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = fn_82932B38();
        }
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x10) = 2;
          *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(param_1 + 0x70);
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          iVar3 = fn_829885C0(param_1,uVar1,param_3,0,0);
          *(int *)(iVar2 + 0x18) = iVar3;
          if (iVar3 != 0) {
            if (param_4 != (int *)0x0) {
              iVar3 = (**(code **)(*param_4 + 4))(param_4);
              *(int *)(iVar2 + 0x1c) = iVar3;
              if (iVar3 == 0) {
                return 0;
              }
            }
            if (param_5 != (int *)0x0) {
              iVar3 = (**(code **)(*param_5 + 4))(param_5);
              *(int *)(iVar2 + 0x20) = iVar3;
              if (iVar3 == 0) {
                return 0;
              }
            }
            if (param_2 != (int *)0x0) {
              iVar3 = (**(code **)(*param_2 + 4))(param_2);
              *(int *)(iVar2 + 0x2c) = iVar3;
              if (iVar3 == 0) {
                return 0;
              }
            }
            uVar1 = fn_82930318(0x14);
            if ((uVar1 & 0xffffffff) == 0) {
              uVar1 = 0;
            }
            else {
              uVar1 = fn_829304E0(uVar1,iVar2,0,0xffffffff8202df2c);
            }
            if ((uVar1 & 0xffffffff) != 0) {
              return uVar1;
            }
          }
        }
      }
    }
    else {
      fn_82980C18(param_1,param_3 + 0x30,0xbcb,0xffffffff8204ea0c);
    }
  }
  return 0;
}

