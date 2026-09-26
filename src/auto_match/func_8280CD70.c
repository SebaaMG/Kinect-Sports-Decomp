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
extern unsigned int fStack_24;
extern unsigned int fStack_38;
extern unsigned int fStack_4c;
extern unsigned int fStack_60;
extern int fn_8280BBD8();
extern int fn_8280CB70();
extern int fn_828105C8();
extern int fn_8281E1F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


void fn_8280CD70(int param_1,undefined8 param_2,float *param_3,undefined8 param_4)

{
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  
  fn_828105C8((double)*(float *)(param_1 + 0x30),(double)*(float *)(param_1 + 0x34),
               (double)*(float *)(param_1 + 0x38),param_2);
  fn_8280BBD8(param_1,param_3);
  uStack_50 = lbl_821AAD20;
  uStack_40 = lbl_821AAD20;
  uStack_30 = lbl_821AAD20;
  uStack_5c = lbl_821AAD20;
  uStack_3c = lbl_821AAD20;
  uStack_2c = lbl_821AAD20;
  uStack_58 = lbl_821AAD20;
  uStack_48 = lbl_821AAD20;
  uStack_28 = lbl_821AAD20;
  uStack_54 = lbl_821AAD20;
  uStack_44 = lbl_821AAD20;
  uStack_34 = lbl_821AAD20;
  fStack_24 = lbl_82002AE0;
  fStack_4c = lbl_82002AE0 / param_3[1];
  fStack_60 = lbl_82002AE0 / *param_3;
  fStack_38 = lbl_82002AE0 / param_3[2];
  fn_8280CB70(param_1,&fStack_60,&fStack_60);
  fn_8281E1F0(param_4,&fStack_60);
  return;
}

