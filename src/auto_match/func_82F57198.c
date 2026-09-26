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
extern unsigned int *auStack_ab0;
extern unsigned int *auStack_ae0;
extern int fn_8256E1D8();
extern int fn_8265C9E0();
extern int fn_82A1DD38();
extern int fn_82F56E40();
extern int fn_82F5B1D0();
extern int fn_82F5B3C8();
extern int fn_82F5B5A8();
extern unsigned int lbl_821AAD20;


undefined4 * fn_82F57198(undefined4 *param_1,undefined4 *param_2)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 *puVar3;
  undefined1 auStack_ae0 [48];
  undefined1 auStack_ab0 [2736];
  
  puVar3 = param_2 + 0x74;
  if (param_2[0x74] == 0) {
    iVar2 = fn_8265C9E0(0x28);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_82F5B1D0();
    }
    fn_82F56E40(puVar3,uVar1);
    (**(code **)(*(int *)*param_2 + 8))((int *)*param_2,auStack_ae0);
    fn_82A1DD38(auStack_ab0,param_2 + 4,0x1c0);
    fn_82F5B3C8(*puVar3,auStack_ae0,0);
    fn_82F5B5A8((double)lbl_821AAD20,*puVar3);
  }
  *param_1 = 0;
  param_1[1] = 0;
  fn_8256E1D8(param_1,*puVar3,param_2[0x75]);
  return param_1;
}

