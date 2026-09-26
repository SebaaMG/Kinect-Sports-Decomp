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
extern int fn_82EDBD48();
extern int fn_82EDC118();
extern int fn_82EDD388();


undefined8
fn_82EDD518(int param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,ulonglong param_5,
             undefined8 param_6,undefined4 *param_7,undefined8 param_8)

{
  int iVar2;
  undefined8 uVar1;
  ulonglong uVar3;
  
  iVar2 = (int)param_8;
  if (((((param_4 & 0xffffffff) == 0) || (param_7 == (undefined4 *)0x0)) || (param_1 == 0)) ||
     (((param_2 & 0xffffffff) == 0 || ((param_5 & 0xffffffff) == 0)))) {
LAB_82edd5a8:
    uVar1 = 1;
  }
  else {
    if ((-1 < iVar2) && (iVar2 < 2)) {
      uVar3 = (ulonglong)*(uint *)(*(int *)(param_1 + 4) + 0x10);
      *(int *)(param_1 + 0x158) = iVar2;
      iVar2 = fn_82EDBD48(uVar3,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                           param_8);
      if ((((iVar2 != 0) ||
           (iVar2 = fn_82EDBD48(uVar3,*(undefined4 *)(param_1 + 0x30),
                                 *(undefined4 *)(param_1 + 0x34)), iVar2 != 0)) ||
          (iVar2 = fn_82EDBD48(uVar3,*(undefined4 *)(param_1 + 0x10),
                                *(undefined4 *)(param_1 + 0x14)), iVar2 != 0)) ||
         (((iVar2 = fn_82EDBD48(uVar3,*(undefined4 *)(param_1 + 0x20),
                                 *(undefined4 *)(param_1 + 0x24)), iVar2 != 0 ||
           (iVar2 = fn_82EDBD48(uVar3,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc)),
           iVar2 != 0)) ||
          (iVar2 = fn_82EDBD48(uVar3,*(undefined4 *)(param_1 + 0x18),
                                *(undefined4 *)(param_1 + 0x1c)), iVar2 != 0)))) {
        *param_7 = 0;
        goto LAB_82edd5a8;
      }
      iVar2 = fn_82EDC118(param_1);
      if (iVar2 == 0) {
        return 0xffffffff80004005;
      }
    }
    uVar1 = fn_82EDD388(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return uVar1;
}

