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
extern int fn_829E37D0();
extern int fn_829E37E0();
extern int fn_829E3800();
extern int fn_829E3C40();
extern unsigned int lbl_82005748;
extern unsigned int lbl_8201EBA4;
extern unsigned int lbl_8201FBB0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83217B18;
extern unsigned int lbl_83217B30;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_829DB750(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  fn_829E37D0(0xffffffff83217b50,param_1);
  fn_829E37E0(0xffffffff83217b50,param_3);
  fn_829E3800(0xffffffff83217b50,param_6);
  *param_4 = (((U64)(lbl_83217B18) >> 0) & 0xFFFFFFFF);
  uVar1 = lbl_821AAD20;
  *param_5 = (((U64)(lbl_83217B18) >> 32) & 0xFFFFFFFF);
  *param_2 = uVar1;
  if ((((U64)(lbl_83217B30) >> 32) & 0xFFFFFFFF) != 0) {
    uStack_68 = 1;
    uStack_64 = 1;
    uStack_70 = lbl_82005748;
    uStack_60 = 4;
    uStack_6c = lbl_82005748;
    uStack_58 = 1;
    uStack_4c = lbl_8201EBA4;
    uStack_50 = 0;
    uStack_48 = lbl_8201FBB0;
    fn_829E3C40((((U64)(lbl_83217B30) >> 32) & 0xFFFFFFFF),&uStack_70);
    *param_2 = uStack_4c;
  }
  return;
}

