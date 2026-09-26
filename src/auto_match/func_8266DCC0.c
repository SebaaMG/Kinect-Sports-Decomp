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
extern int fn_8266CBF0();
extern int fn_8266D210();
extern int fn_8266D3E0();
extern int fn_8266D440();
extern int fn_8266D840();
extern int fn_8266D998();
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


longlong fn_8266DCC0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                      longlong param_5,int param_6)

{
  int iVar2;
  longlong lVar1;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_50 [80];
  
  if ((param_4 <= (int)param_5) && (iVar2 = fn_8266CBF0(param_6), param_4 <= iVar2)) {
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    (*(undefined4 **)(param_6 + 0x10))[1] = **(undefined4 **)(param_6 + 0x10);
    uStack_60 = *(undefined4 *)(param_6 + 0x10);
    fn_8266D840(auStack_50,param_1,param_2,&uStack_70);
    fn_8266D440(auStack_50);
    fn_8266D3E0(param_2,param_3,param_1);
    lVar1 = fn_8266D210(**(undefined4 **)(param_6 + 0x10),(*(undefined4 **)(param_6 + 0x10))[1],
                          param_3);
    return lVar1;
  }
  iVar2 = fn_8266CBF0(param_6);
  if (iVar2 < (int)param_5) {
    fn_8266D998(param_1,param_2,param_3);
    param_1 = param_5 * 0xc + param_1;
  }
  else {
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    (*(undefined4 **)(param_6 + 0x10))[1] = **(undefined4 **)(param_6 + 0x10);
    uStack_60 = *(undefined4 *)(param_6 + 0x10);
    fn_8266D840(auStack_50,param_2,param_3,&uStack_70);
    fn_8266D440(auStack_50);
    fn_8266D210(param_1,param_2,param_3);
    param_1 = fn_8266D3E0(**(undefined4 **)(param_6 + 0x10),(*(undefined4 **)(param_6 + 0x10))[1],
                            param_1);
  }
  return param_1;
}

