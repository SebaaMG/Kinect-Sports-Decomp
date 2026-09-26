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
extern unsigned int *auStack_220;
extern unsigned int *auStack_230;
extern int fn_82CEB1A8();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82CFD5A8();
extern int fn_82CFD5C0();
extern int fn_82CFD5F0();
extern unsigned int *lbl_8323B464;


longlong fn_82E19DD8(int param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 in_r0;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [520];
  
  lVar4 = 0;
  switch(param_3) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x18:
  case 0x1f:
  case 0x20:
    lVar4 = fn_82CFD5F0(param_1);
    break;
  case 0x13:
    lVar4 = fn_82E19DD8(param_1,param_2,*(undefined1 *)(param_1 + 0xd));
    break;
  case 0x14:
  case 0x15:
  case 0x1d:
  case 0x1e:
  case 0x21:
    bVar1 = *param_2;
    uVar2 = (uint)bVar1;
    iVar3 = fn_82CFD5C0(param_1);
    if (iVar3 != 0) {
      iVar3 = fn_82CFD5C0(param_1);
      return (longlong)iVar3 * (longlong)(int)(uint)bVar1;
    }
    goto LAB_82e19ed0;
  case 0x16:
    lVar4 = 4;
  case 0x1a:
    lVar4 = (ulonglong)*param_2 + lVar4 + 4;
    break;
  case 0x17:
    break;
  case 0x19:
    fn_82CFD5A8(param_1);
    uVar2 = fn_82CEB1A8();
    iVar3 = fn_82CFD5C0(param_1);
    if (iVar3 != 0) {
      iVar3 = fn_82CFD5C0(param_1);
      return (longlong)iVar3 * (longlong)(int)uVar2;
    }
LAB_82e19ed0:
    lVar4 = (longlong)(int)uVar2;
    break;
  case 0x1b:
    lVar4 = ((ulonglong)*param_2 + 2) * 2;
    break;
  case 0x1c:
    lVar4 = (ulonglong)*param_2 << 1;
    break;
  default:
    fn_82CEE578(auStack_230,auStack_220,0x200);
    fn_82CEDB38(auStack_230,0xffffffff8214b668);
    iVar3 = (**(code **)(*lbl_8323B464 + 0xc))
                      (lbl_8323B464,3,0x50a18b58,auStack_220,0xffffffff8214b648,0xc5);
    if (iVar3 != 0) {
      trapWord(0x1f,in_r0,0x16);
    }
                    /* WARNING: Subroutine does not return */
    fn_82CED958(auStack_230);
  }
  return lVar4;
}

