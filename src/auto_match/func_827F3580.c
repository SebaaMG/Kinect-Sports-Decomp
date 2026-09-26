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
extern int fn_827F2278();
extern int fn_827F22D0();
extern int fn_827F2D60();
extern int fn_827F2E40();
extern int fn_827F58A8();
extern int fn_827FA468();
extern int fn_827FA5E8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_827F3580(undefined8 param_1,double param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  double dVar4;
  double extraout_f1;
  
  uVar2 = param_6;
  cVar3 = fn_827F22D0();
  if (cVar3 == '\0') {
    cVar3 = fn_827F2278(param_3);
    dVar4 = (double)lbl_821AAD20;
    if (cVar3 == '\0') {
      if (extraout_f1 <= dVar4) {
        if (*(int *)(param_3 + 0x104) == 0) {
          uVar1 = fn_827FA468(0xb4);
          if ((uVar1 & 0xffffffff) == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = fn_827FA5E8(uVar1,param_3,*(undefined4 *)(param_3 + 4));
          }
          fn_827F2D60(param_2,param_3,uVar2);
          *(int *)(param_3 + 0x108) = (int)uVar2;
        }
        else {
          fn_827F2E40(param_2,param_3);
        }
      }
      else if (((double)*(float *)(param_3 + 0xf8) <= dVar4) ||
              (extraout_f1 <= (double)*(float *)(param_3 + 0xf8))) {
        *(float *)(param_3 + 0xf4) = lbl_821AAD20;
        *(int *)(param_3 + 0x100) = (int)param_6;
        *(float *)(param_3 + 0xf8) = (float)extraout_f1;
        *(float *)(param_3 + 0xfc) = (float)param_2;
      }
    }
    else if (extraout_f1 <= dVar4) {
      fn_827F58A8((double)lbl_82002AE0,
                      *(undefined4 *)(((*(byte *)(param_3 + 0x53) - 1 & 3) + 0xc) * 4 + param_3),
                      uVar2);
    }
  }
  return;
}

