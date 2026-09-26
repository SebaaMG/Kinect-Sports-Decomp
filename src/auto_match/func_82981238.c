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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82930318();
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_82930FC0();
extern int fn_82980C18();
extern int fn_82981050();


int fn_82981238(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined8 param_6)

{
  undefined4 uVar2;
  ulonglong uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (param_3 != 0) {
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    if ((CONCAT44(uVar2,uVar2) & 0xfffffffffffffff7) != 0) {
      if ((int)param_2 == 7) {
        uVar6 = 0xffffffff8204e048;
      }
      else {
        if ((int)param_2 != 8) {
          return 0;
        }
        uVar6 = 0xffffffff8204e01c;
      }
      fn_82980C18(param_1,0,0xbe8,uVar6);
      return 0;
    }
    *(undefined4 *)(param_4 + 0x20) = uVar2;
    uVar2 = fn_82930458(*(undefined4 *)(param_3 + 0x1c));
    *(undefined4 *)(param_4 + 0x24) = uVar2;
  }
  uVar1 = fn_82930318(0x14);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_829304E0(uVar1,0,0,0xffffffff8204e014);
  }
  if (iVar3 != 0) {
    uVar1 = fn_82930318(0x34);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_82930FC0(uVar1,param_2,*(undefined4 *)(param_4 + 0x14),param_6,0,param_4);
    }
    if ((iVar4 != 0) && (iVar5 = fn_82981050(param_1,iVar4,0), -1 < iVar5)) {
      *(int *)(iVar3 + 8) = iVar4;
      *(int *)(iVar4 + 0x20) = param_4;
      *(undefined4 *)(iVar4 + 0x1c) = param_5;
      return iVar3;
    }
  }
  return 0;
}

