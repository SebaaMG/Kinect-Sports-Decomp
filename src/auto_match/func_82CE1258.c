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
extern unsigned int *auStack_90;
extern int fn_82A1E658();
extern int fn_82A2B798();
extern int fn_8314346C();
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


ulonglong fn_82CE1258(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,
                       int param_6,ulonglong param_7,undefined4 *param_8)

{
  ulonglong uVar1;
  int iVar3;
  longlong lVar2;
  undefined4 auStack_90 [4];
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  int iStack_6c;
  int iStack_68;
  
  if (((((((3 < param_2) || (param_6 == 0)) || (param_5 == 0)) ||
        (((param_8 == (undefined4 *)0x0 ||
          (*param_8 = 0xffffffff, (param_1 & 0xffffffc0) != 0 || (param_1 & 0xffffe0c0) != 0)) ||
         (((param_1 & 8) != 0 && ((param_1 & 0x20) == 0)))))) ||
       (((param_1 & 0x10) != 0 && ((param_1 & 4) == 0)))) ||
      (((param_1 & 0x10) != 0 && ((param_1 & 0x20) == 0)))) ||
     ((((param_1 & 1) != 0 && ((param_1 & 0x2c) == 0)) ||
      (((param_1 & 0xf00) != 0 &&
       (((param_1 & 10) == 0 ||
        (((((param_1 & 2) == 0 && ((param_1 & 8) != 0)) && ((param_1 & 0xf00) != (param_1 & 0x400)))
         || (((param_1 & 0x200) != 0 && ((param_1 & 0x800) != 0)))))))))))) {
    return 0x57;
  }
  uVar1 = fn_8314346C(param_8);
  if (uVar1 != 0) {
    return uVar1;
  }
  auStack_90[0] = 0;
  uVar1 = XamSessionRefObjByHandle(*param_8,auStack_90);
  if (uVar1 != 0) {
    return uVar1;
  }
  uStack_80 = auStack_90[0];
  uStack_7c = param_1;
  uStack_78 = param_3;
  uStack_74 = param_4;
  uStack_70 = param_2;
  iStack_6c = param_6;
  iStack_68 = param_5;
  iVar3 = XMsgStartIORequest(0xfb,0xb0010,param_7,&uStack_80,0x1c);
  if (iVar3 < 0) {
    uVar1 = 0x65b;
  }
  else {
    if ((param_7 & 0xffffffff) == 0) {
      lVar2 = fn_82A2B798();
      uVar1 = -(ulonglong)(lVar2 != 0) & 0x65b;
    }
    else {
      uVar1 = 0x3e5;
    }
    if (uVar1 == 0x3e5) {
      return 0x3e5;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  fn_82A1E658(*param_8);
  *param_8 = 0;
  return uVar1;
}

