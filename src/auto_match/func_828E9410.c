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
extern int fn_828A45E8();
extern int fn_828A6468();
extern int fn_828A64E0();
extern int fn_828A6938();
extern int fn_828E3AF0();
extern int fn_828E6DF8();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_828E9410(int *param_1,uint *param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char cVar4;
  undefined8 uVar3;
  ulonglong uVar5;
  int *piVar6;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (*param_2 == param_1[4]) {
    iVar1 = *param_1;
  }
  else {
    iVar1 = *(int *)(*param_2 + 0x18);
  }
  fn_828A45E8(param_1,iVar1,param_4);
  uVar5 = (ulonglong)*param_2;
  uVar2 = *(undefined4 *)(iVar1 + 4);
  if ((uVar5 != (uint)param_1[4]) &&
     (cVar4 = fn_828E6DF8(param_1,param_3,uVar5 + 0xc), cVar4 != '\0')) {
    fn_828A64E0(&uStack_40,param_1 + 3,uVar5);
  }
  piVar6 = param_1 + 3;
  uVar5 = fn_828E3AF0(piVar6,param_3);
  if (((uVar5 & 0xffffffff) == (ulonglong)(uint)param_1[4]) ||
     (cVar4 = fn_828E6DF8(param_1,uVar5 + 0xc,param_3), cVar4 == '\0')) {
    uStack_40 = *param_3;
    uStack_3c = *(char *)(param_3 + 1) != '\0';
    if ((bool)uStack_3c) {
      uStack_38 = param_3[2];
    }
    uStack_34 = uVar2;
    uVar3 = fn_828A6468(piVar6,&uStack_40);
    fn_828A6938(&uStack_40,piVar6,uVar3,0);
  }
  return;
}

