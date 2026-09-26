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
extern int fn_822D5340();
extern int fn_8240D930();
extern int fn_8289D8D0();
extern int fn_828B2360();
extern int fn_828B4718();
extern int fn_828D7760();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_828B2500(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar5;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar6;
  undefined8 uVar4;
  undefined4 auStack_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  piVar5 = (int *)fn_828B2360(param_1,param_3);
  if ((piVar5 != (int *)0x0) && (uVar2 = (**(code **)(*piVar5 + 4))(), (uVar2 & 0xffffffff) != 0)) {
    fn_8240D930(param_2);
    uVar3 = fn_8289D8D0();
    if ((uVar3 & 0xffffffff) != 0) {
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      cVar6 = fn_828B4718(uVar2,&uStack_40,auStack_50);
      uVar1 = uStack_40;
      if (cVar6 != '\0') {
        uVar4 = (**(code **)(*param_3 + 0x44))(param_3);
        fn_828D7760(param_2,uVar3,uVar4,uVar1,auStack_50[0]);
      }
      fn_822D5340(&uStack_40);
    }
  }
  return;
}

