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
#define _iStack_38 ((*(U64*)&iStack_38))
extern int fn_8223C478();
extern int fn_828E9DB8();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


bool fn_828E5660(double param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piVar7;
  double dVar8;
  int aiStack_40 [2];
  int iStack_38;
  int iStack_34;
  
  uVar3 = (uint)param_5;
  param_4 = param_4 + param_5;
  if ((int)uVar3 < 0) {
    dVar8 = (double)(lbl_82002AE0 / (float)(longlong)(1 << (-uVar3 & 0x3f)));
  }
  else {
    dVar8 = (double)(longlong)(1 << (uVar3 & 0x3f));
  }
  iStack_34 = (int)(longlong)ABS((float)(dVar8 * param_1));
  uVar4 = (longlong)ABS((float)(dVar8 * param_1)) & 0xffffffff;
  _iStack_38 = CONCAT44(iStack_34,iStack_34);
  if (((double)lbl_821AAD20 <= param_1) || (uVar2 = 0, iStack_34 == 0)) {
    uVar2 = 1;
  }
  uVar6 = (ulonglong)(uint)(1 << ((uint)param_4 & 0x3f));
  uVar5 = uVar6 - 1;
  aiStack_40[0] = (int)uVar5;
  piVar7 = aiStack_40;
  if (uVar4 <= (uVar5 & 0xffffffff)) {
    piVar7 = &iStack_38;
  }
  iVar1 = *piVar7;
  if (0 < (int)(uint)param_4) {
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,uVar2,1);
    fn_8223C478(param_2,param_4,0);
    fn_828E9DB8(param_2,iVar1,param_4);
  }
  return uVar4 < uVar6;
}

