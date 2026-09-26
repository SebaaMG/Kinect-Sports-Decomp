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
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern int fn_829DC6C0();
extern int fn_829DCB28();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_821AAD20;
extern unsigned int *lbl_83217A00;
extern unsigned int uStack_40;


void fn_829DCBE8(int param_1,int param_2,undefined4 *param_3,float *param_4,undefined1 *param_5)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float afStack_30 [12];
  
  fVar2 = lbl_8200133C;
  *param_3 = 4;
  *param_4 = fVar2;
  *param_5 = 0;
  uStack_40 = 0;
  if (*(int *)(param_1 + 0x9c90) != 0) {
    fn_829DCB28((((*(int *)(param_1 + 0x9c94) + *(int *)(param_1 + 0x9c90)) - 1U) % 0x14) * 0x7d4
                  + param_1,1,param_2,*(undefined4 *)(param_2 + 0x9c90),param_4,&uStack_40);
    fn_829DC6C0(uStack_40,&fStack_38,&fStack_34,afStack_30,&fStack_3c);
    fVar2 = lbl_821AAD20;
    if (lbl_821AAD20 <= *param_4) {
      uVar3 = 1;
      if (*param_4 < fStack_3c) {
        *param_5 = 1;
      }
      fVar1 = *param_4;
      if (fStack_38 <= fVar1) {
        if (fVar2 <= fVar1) {
          if (fStack_34 < fVar1) {
            if (afStack_30[0] <= fVar1) {
              uVar3 = 2;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 4;
        }
      }
      else {
        uVar3 = 3;
      }
      *param_3 = uVar3;
    }
  }
  if (lbl_83217A00 != (int *)0x0) {
    (**(code **)(*lbl_83217A00 + 0x14))((double)*param_4,lbl_83217A00,*param_3);
  }
  return;
}

