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
extern unsigned int *auStack_60;
extern int fn_82811080();
extern int fn_82811400();
extern int fn_82871A08();
extern int fn_82871E70();
extern unsigned int lbl_8201DFF0;
extern unsigned int lbl_820221FC;


ulonglong fn_828723E8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 auStack_60 [96];
  
  uVar1 = fn_82811400(auStack_60,4);
  uVar2 = fn_82811080(0xffffffff832116f8,0x110,uVar1);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    fn_82871A08(uVar2,param_3,param_4,param_5,param_6,param_7);
    dVar4 = (double)lbl_8201DFF0;
    *(undefined4 *)uVar2 = &lbl_820221FC;
    ((undefined4 *)uVar2)[0x43] = (float)(param_1 * dVar4);
  }
  (**(code **)(*(int *)uVar2 + 0x40))(uVar2);
  uVar3 = fn_82871E70(param_2,uVar2);
  return ((uVar3 & 0xffffffff) >> 0x1f) - 1 & uVar2;
}

