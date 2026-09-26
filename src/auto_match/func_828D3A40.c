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
extern int fn_825089A0();
extern int fn_828D3430();
extern int fn_828D36C8();
extern int fn_828D3770();
extern int fn_828D3860();
extern int fn_828D38C0();
extern unsigned int uStack_30;


uint * fn_828D3A40(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int *piVar6;
  char cVar7;
  ulonglong uVar8;
  undefined1 uStack_30;
  
  if (param_1 != param_2) {
    uVar4 = (ulonglong)*param_2;
    uVar2 = (int)(param_2[1] - *param_2) / 0x50;
    if (uVar2 == 0) {
      fn_828D38C0(param_1);
    }
    else {
      uVar3 = *param_1;
      uVar1 = (int)(param_1[1] - uVar3) / 0x50;
      if (uVar1 < uVar2) {
        if ((uint)((int)(param_1[2] - uVar3) / 0x50) < uVar2) {
          if (uVar3 != 0) {
            fn_828D3860(uVar3,param_1[1],param_1 + 3,uStack_30);
            uVar2 = *param_1;
            piVar6 = (int *)fn_825089A0();
            (**(code **)(*piVar6 + 0x28))(piVar6,uVar2);
          }
          cVar7 = fn_828D3430(param_1,(int)(param_2[1] - *param_2) / 0x50);
          if (cVar7 != '\0') {
            uVar2 = param_2[1];
            uVar8 = (ulonglong)*param_2;
            uVar4 = (ulonglong)*param_1;
            if (uVar8 != uVar2) {
              do {
                if ((uVar4 & 0xffffffff) != 0) {
                  fn_828D36C8(uVar4,uVar8);
                }
                uVar8 = uVar8 + 0x50;
                uVar4 = uVar4 + 0x50;
              } while ((uVar8 & 0xffffffff) != (ulonglong)uVar2);
            }
            param_1[1] = (uint)uVar4;
          }
        }
        else {
          uVar8 = ((longlong)(int)uVar1 + ((ulonglong)uVar1 & 0x3fffffff) * 4 & 0xfffffff) * 0x10 +
                  uVar4;
          fn_828D3770(uVar4,uVar8,uVar3,uStack_30);
          uVar2 = param_2[1];
          uVar4 = (ulonglong)param_1[1];
          if ((uVar8 & 0xffffffff) != (ulonglong)uVar2) {
            do {
              if ((uVar4 & 0xffffffff) != 0) {
                fn_828D36C8(uVar4,uVar8);
              }
              uVar8 = uVar8 + 0x50;
              uVar4 = uVar4 + 0x50;
            } while ((uVar8 & 0xffffffff) != (ulonglong)uVar2);
          }
          param_1[1] = (uint)uVar4;
        }
      }
      else {
        uVar5 = fn_828D3770(uVar4,param_2[1],uVar3,uStack_30);
        fn_828D3860(uVar5,param_1[1],param_1 + 3,uStack_30);
        param_1[1] = ((int)(param_2[1] - *param_2) / 0x50) * 0x50 + *param_1;
      }
    }
  }
  return param_1;
}

