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


bool fn_828E5EE0(int param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  ulonglong uVar9;
  int aiStack_40 [2];
  int iStack_38;
  int iStack_34;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  lVar8 = (ulonglong)*(uint *)(param_1 + 8) + (ulonglong)uVar2;
  if ((int)uVar2 < 0) {
    fVar3 = lbl_82002AE0 / (float)(longlong)(1 << (-uVar2 & 0x3f));
  }
  else {
    fVar3 = (float)(longlong)(1 << (uVar2 & 0x3f));
  }
  uVar9 = (ulonglong)ABS(fVar3 * *param_3);
  iStack_34 = (int)uVar9;
  uVar9 = uVar9 & 0xffffffff;
  _iStack_38 = CONCAT44(iStack_34,iStack_34);
  if ((lbl_821AAD20 <= *param_3) || (uVar4 = 0, iStack_34 == 0)) {
    uVar4 = 1;
  }
  uVar6 = (ulonglong)(uint)(1 << ((uint)lVar8 & 0x3f));
  uVar5 = uVar6 - 1;
  aiStack_40[0] = (int)uVar5;
  piVar7 = aiStack_40;
  if (uVar9 <= (uVar5 & 0xffffffff)) {
    piVar7 = &iStack_38;
  }
  iVar1 = *piVar7;
  if (0 < (int)(uint)lVar8) {
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,uVar4,1);
    fn_8223C478(param_2,lVar8,0);
    fn_828E9DB8(param_2,iVar1,lVar8);
  }
  return uVar9 < uVar6;
}

