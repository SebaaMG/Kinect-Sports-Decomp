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
extern int fn_82A1F2B8();
extern int fn_82B64678();
extern int fn_82B64808();
extern int fn_82B64950();
extern int fn_82B64BB8();
extern int fn_82B64DF0();
extern int fn_82B652E0();
extern int fn_82B658E0();
extern int fn_82B65C78();
extern int fn_82B66550();
extern int fn_82B66D38();
extern int fn_82B8FA18();
extern int fn_82B99908();


longlong fn_82B67470(int *param_1,int param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar4;
  longlong lVar2;
  undefined8 uVar3;
  
  param_1[2] = param_4;
  *param_1 = 0;
  param_1[1] = 0;
  if ((((param_4 & 0xffff) == 0) || (5 < (param_4 & 0xffff))) || ((param_4 & 0xff800000) != 0)) {
    fn_82A1F2B8(0xffffffff820d8c98);
    fn_82A1F2B8(0xffffffff821bab90);
    return -0x7789f794;
  }
  *(uint *)(param_3 + 0x48) = param_4 & 0x200000;
  *(uint *)(param_2 + 0x48) = param_4 & 0x400000;
  *(uint *)(param_2 + 0x40) = param_4 & 0x80000;
  *(uint *)(param_2 + 0x44) = param_4 & 0x100000;
  iVar4 = fn_82B99908(param_2);
  param_1[1] = iVar4;
  if (iVar4 == 0) {
LAB_82b675b8:
    uVar3 = 0xffffffff820d8cb0;
  }
  else {
    lVar2 = fn_82B99908(param_3);
    *param_1 = (int)lVar2;
    if (lVar2 == 0) goto LAB_82b675b8;
    lVar2 = fn_82B8FA18(param_1[1]);
    if (lVar2 < 0) goto LAB_82b675d8;
    iVar4 = fn_82B64678(param_1);
    if ((((-1 < iVar4) || (iVar4 = fn_82B64808(param_1), -1 < iVar4)) ||
        ((iVar4 = fn_82B64950(param_1), -1 < iVar4 ||
         ((iVar4 = fn_82B64BB8(param_1), -1 < iVar4 ||
          (iVar4 = fn_82B64DF0(param_1), -1 < iVar4)))))) ||
       ((iVar4 = fn_82B652E0(param_1), -1 < iVar4 ||
        ((((iVar4 = fn_82B658E0(param_1), -1 < iVar4 ||
           (iVar4 = fn_82B65C78(param_1), -1 < iVar4)) ||
          (iVar4 = fn_82B66D38(param_1), -1 < iVar4)) ||
         (iVar4 = fn_82B66550(param_1), -1 < iVar4)))))) {
      lVar2 = 0;
      goto LAB_82b675d8;
    }
    uVar3 = 0xffffffff820d8ccc;
  }
  fn_82A1F2B8(uVar3);
  fn_82A1F2B8(0xffffffff821bab90);
  lVar2 = -0x7fffbffb;
LAB_82b675d8:
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[1] = 0;
  }
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return lVar2;
}

