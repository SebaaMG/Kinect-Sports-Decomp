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
extern unsigned int fStack_38;
extern unsigned int fStack_48;
extern int fn_82809CB0();
extern int fn_82810240();
extern int fn_82810280();
extern int fn_82810B78();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DFF4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8280C6F8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  
  uVar3 = 0xffffffff82196090;
  fn_82810280(param_2,0xffffffff82196090);
  dVar4 = (double)fn_82809CB0();
  dVar5 = (double)lbl_8201DFF4;
  if (dVar5 <= dVar4) {
    uVar3 = 0xffffffff82196084;
    fn_82810280(param_2,0xffffffff82196084);
    dVar4 = (double)fn_82809CB0();
    if (dVar5 <= dVar4) {
      uVar3 = 0xffffffff8219609c;
    }
  }
  fn_82810240(param_2,uVar3,&uStack_50);
  fn_82810B78(&uStack_50,&uStack_50);
  fn_82810240(&uStack_50,param_2,&uStack_40);
  fn_82810B78(&uStack_40,&uStack_40);
  uVar2 = lbl_821AAD20;
  param_1[8] = -fStack_48;
  param_1[9] = -fStack_38;
  *param_1 = uStack_50;
  param_1[4] = uStack_4c;
  param_1[0xc] = uVar2;
  param_1[1] = uStack_40;
  param_1[5] = uStack_3c;
  param_1[0xd] = uVar2;
  param_1[2] = *param_2;
  param_1[6] = param_2[1];
  uVar1 = lbl_82002AE0;
  param_1[10] = -(float)param_2[2];
  param_1[0xe] = uVar2;
  param_1[3] = uVar2;
  param_1[7] = uVar2;
  param_1[0xb] = uVar2;
  param_1[0xf] = uVar1;
  return;
}

