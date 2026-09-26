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
extern unsigned int *auStack_30;
extern int fn_8288F730();
extern int fn_828B5580();
extern int fn_828B57E8();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828C6B68(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar5;
  int iVar6;
  longlong lVar3;
  undefined1 uVar7;
  undefined8 uVar4;
  undefined1 auStack_30 [48];
  
  iVar5 = fn_828E9DA8(param_2);
  iVar6 = fn_828E9D90(param_2);
  if (iVar5 - iVar6 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = fn_828E9FF8(param_2,1);
  }
  *(bool *)(param_1 + 0x98) = lVar3 != 0;
  fn_828B57E8(param_1 + 0x80,*(undefined4 *)(param_1 + 0x6c),param_2);
  if (*(char *)(param_1 + 0x98) != '\0') {
    iVar5 = fn_828E9DA8(param_2);
    iVar6 = fn_828E9D90(param_2);
    if (iVar5 - iVar6 < 8) {
      uVar7 = 0;
    }
    else {
      uVar7 = fn_828E9FF8(param_2,8);
    }
    *(undefined1 *)(param_1 + 0xa0) = uVar7;
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = *(undefined4 *)(param_1 + 0x6c);
    uVar4 = fn_828B5580(auStack_30,param_1 + 0x80);
    fn_8288F730(uVar2,uVar4,uVar1,param_2,param_1 + 0x88);
  }
  return;
}

