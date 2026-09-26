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
extern int fn_82AA66A8();
extern int fn_82AC8B10();
extern int fn_82AC8CE8();
extern int fn_82ACB458();
extern int fn_82ACBE00();
extern int fn_82ACC5D8();
extern int fn_82ACCBB8();
extern int fn_82ACD310();


undefined8 fn_82ACD3D8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar6;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar7;
  
  if (*(char *)(param_1 + 0x48) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*(undefined4 *)(param_1 + 0x30),0x12c0);
  }
  uVar1 = *(uint *)(param_1 + 0x3c);
  cVar6 = fn_82AC8B10(param_1 + 4,uVar1);
  if (cVar6 == '\0') {
    uVar3 = 1;
  }
  else {
    uVar2 = *(undefined4 *)(uVar1 + 0x1c);
    uVar4 = fn_82ACBE00(*(undefined4 *)(param_1 + 0x30),uVar1,uVar2,
                          *(undefined4 *)(param_1 + 0x38));
    fn_82AC8CE8(param_1 + 4,uVar1);
    if (((((uVar4 & 2) == 0) &&
         ((*(char *)(param_1 + 0x4a) != '\0' ||
          (*(uint *)(*(int *)(param_1 + 0x38) + 0x10) < *(uint *)(param_1 + 0x40))))) ||
        (uVar5 = fn_82ACD310(param_1,uVar2,uVar1), uVar5 == uVar1)) &&
       ((fn_82ACCBB8(*(undefined4 *)(param_1 + 0x30),uVar1,uVar2,*(undefined4 *)(param_1 + 0x38),
                       uVar1), *(char *)(param_1 + 0x4a) != '\0' ||
        (*(uint *)(*(int *)(param_1 + 0x38) + 0x10) < *(uint *)(param_1 + 0x40))))) {
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 0x24);
      if ((uVar1 & 1) == 0) {
        iVar7 = (uVar1 & 0xfffffffe) - 0x28;
      }
      else {
        iVar7 = 0;
      }
      *(int *)(param_1 + 0x3c) = iVar7;
      return 0;
    }
    fn_82ACC5D8(param_1,uVar1,0);
    fn_82ACB458(*(undefined4 *)(param_1 + 0x30),uVar2,1);
    uVar3 = 2;
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return uVar3;
}

