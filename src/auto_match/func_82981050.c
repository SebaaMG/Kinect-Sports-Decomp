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
extern int fn_82930318();
extern int fn_82930430();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_8297F280();
extern int fn_8297F4D8();
extern int fn_82980C18();
extern int fn_82980D00();


uint fn_82981050(int param_1,int param_2,int param_3)

{
  int iVar2;
  int iVar3;
  ulonglong uVar1;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0) {
    fn_82980D00(param_1,0,0,0xffffffff8204dff4);
  }
  else {
    iVar4 = *(int *)(param_2 + 0x14);
    iVar8 = iVar4 + 0x10;
    for (iVar2 = fn_8297F4D8(param_1,iVar8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
      if ((*(int *)(*(int *)(iVar2 + 8) + 0x30) == 0) &&
         ((*(int *)(param_2 + 0x10) != 2 || (*(int *)(*(int *)(iVar2 + 8) + 0x10) != 2)))) {
        if ((param_3 != 0) && (iVar3 = fn_82930430(param_2), iVar3 != 0)) {
          return 0;
        }
        uVar6 = 0xbbb;
        uVar7 = 0xffffffff8204dfb4;
        goto LAB_82981158;
      }
    }
    iVar2 = *(int *)(iVar3 + 0x20);
    if ((((iVar2 == 0) || (*(int *)(iVar3 + 0x10) != 3)) || (*(int *)(iVar2 + 0x10) != 2)) ||
       (iVar3 = fn_8297F4D8(param_1,iVar8,iVar2), iVar3 == 0)) {
      uVar1 = fn_82930318(0x14);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_829304E0(uVar1,0,0,0xffffffff8204dcf4);
      }
      if (iVar3 != 0) {
        iVar4 = fn_82930458(param_2);
        *(int *)(iVar3 + 8) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14);
          *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(*(int *)(iVar3 + 8) + 0x24);
          *(undefined4 *)(*(int *)(iVar3 + 8) + 0x28) = *(undefined4 *)(param_1 + 0x58);
          *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(*(int *)(iVar3 + 8) + 0x28);
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18);
          *(int *)(*(int *)(param_1 + 0x14) + 0x18) = iVar3;
          uVar5 = fn_8297F280(param_1,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(iVar3 + 8));
          return (int)uVar5 >> 0x1f & uVar5;
        }
      }
      return 0x8007000e;
    }
    uVar6 = 0xbdc;
    uVar7 = 0xffffffff8204dfcc;
LAB_82981158:
    fn_82980C18(param_1,iVar8,uVar6,uVar7,*(undefined4 *)(iVar4 + 0x18));
  }
  return 0x80004005;
}

