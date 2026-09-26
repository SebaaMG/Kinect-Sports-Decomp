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
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826A73F8();
extern int fn_826ADE60();
extern int fn_826B3798();
extern int fn_826B3E08();
extern unsigned int uStack_2c;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined8 fn_826AE0C0(undefined8 param_1,undefined4 *param_2)

{
  bool bVar1;
  char cVar3;
  undefined8 uVar2;
  char acStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  undefined4 uStack_2c;
  
  if (((*(uint *)(*(int *)*param_2 + 0xc) >> 0x19 & 1) == 0) &&
     (cVar3 = fn_826A73F8(), cVar3 != '\0')) {
    uStack_40 = *param_2;
    pcStack_30 = acStack_50;
    uStack_3c = param_2[1];
    uStack_38 = param_2[2];
    uStack_34 = param_2[3];
    uStack_2c = param_2[5];
    acStack_50[0] = '\0';
    uVar2 = fn_826B3E08(param_1,&uStack_40,0,0);
    if ((acStack_50[0] == '\0') || (bVar1 = false, acStack_50[0] == '\n')) {
      bVar1 = true;
    }
    if (bVar1) {
      if ((param_2[5] & 4) == 0) {
        fn_826ADE60(param_1,0xffffffff82007570,**(undefined4 **)*param_2);
      }
      uVar2 = 0;
    }
    else if (param_2[4] != 0) {
      fn_82695FA0(param_2[4],acStack_50);
    }
    fn_82696330(acStack_50);
    return uVar2;
  }
  uVar2 = fn_826B3798(param_1,param_2);
  return uVar2;
}

