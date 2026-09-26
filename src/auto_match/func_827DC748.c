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
extern unsigned int *auStack_50;
extern int fn_827D9DF0();
extern int fn_827E0658();
extern int fn_827E1220();


int * fn_827DC748(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 auStack_50 [2];
  undefined4 *puStack_48;
  int *piStack_44;
  
  if (param_2 == (int *)0x0) {
    param_2 = (int *)0x0;
  }
  else {
    iVar3 = param_1 + 0xbfc;
    RtlEnterCriticalSection(iVar3);
    auStack_50[0] = (**(code **)(*param_2 + 0x10))(param_2);
    fn_827E0658(&puStack_48,param_1 + 0xb5c,auStack_50);
    for (; puStack_48 != *(undefined4 **)(param_1 + 0xb60); puStack_48 = (undefined4 *)*puStack_48)
    {
      piVar1 = (int *)puStack_48[3];
      iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
      if (iVar2 != 0) {
        fn_827D9DF0(piVar1);
        RtlLeaveCriticalSection(iVar3);
        (**(code **)*param_2)(param_2,1);
        return piVar1;
      }
    }
    fn_827D9DF0(param_2);
    puStack_48 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2);
    piStack_44 = param_2;
    fn_827E1220(auStack_50,param_1 + 0xb5c,&puStack_48);
    RtlLeaveCriticalSection(iVar3);
  }
  return param_2;
}

