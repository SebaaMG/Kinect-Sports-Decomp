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
extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_8266C678();
extern int fn_8266ECF0();
extern unsigned int iStack_7c;
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_80;


undefined4 *
fn_8266EE08(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  uStack_70 = 0;
  uStack_44 = lbl_82002AE0;
  uStack_48 = lbl_82002AE0;
  uStack_6c = 0;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_5c = 1;
  uStack_60 = 1;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  iVar2 = fn_8266C678(param_2,param_4,&uStack_70);
  if (iVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    fn_82266D28(param_1,0);
  }
  else {
    fn_8266ECF0(&uStack_80,param_2,param_3,param_5,param_6,0xffffffffffffffff,&uStack_70,
                  0x18280143);
    iVar2 = iStack_7c;
    *param_1 = 0;
    param_1[1] = 0;
    if (param_1 != &uStack_80) {
      iStack_7c = 0;
      param_1[1] = iVar2;
      uVar1 = *param_1;
      *param_1 = uStack_80;
      uStack_80 = uVar1;
    }
    if (iStack_7c != 0) {
      fn_822315A0(iStack_7c);
    }
  }
  return param_1;
}

