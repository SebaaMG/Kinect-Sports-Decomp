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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_822315A0();
extern int fn_8223B610();
extern int fn_8223C610();
extern int fn_823B4800();
extern int fn_823B4970();
extern int fn_828E9D28();
extern int fn_828E9D40();
extern unsigned int iStack_ec;
extern unsigned int stack0x00000000;


/* WARNING: Removing unreachable block (ram,0x823bb7a4) */

void fn_823BB688(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_f0 [4];
  int iStack_ec;
  undefined1 auStack_e0 [40];
  int aiStack_b8 [2];
  undefined1 auStack_b0 [176];
  
  uVar2 = fn_8223C610(param_2,7,0,0);
  lVar3 = fn_8223C610(param_2,3,0,0);
  fn_8223B610(param_2,&stack0x00000000 + -0xb0,uVar2,0,0);
  if (param_3 != (int *)0x0) {
    if (*param_3 == 0) {
      piVar4 = (int *)fn_823B4800(&stack0x00000000 + -0xf0);
      iVar5 = 0;
      iVar6 = 0;
      if ((int *)(&stack0x00000000 + -0xb8) != piVar4) {
        iVar6 = piVar4[1];
        piVar4[1] = 0;
        iVar5 = *piVar4;
        *piVar4 = 0;
      }
      iVar1 = param_3[1];
      param_3[1] = iVar6;
      *param_3 = iVar5;
      if (iVar1 != 0) {
        fn_822315A0();
      }
      if (iStack_ec != 0) {
        fn_822315A0();
      }
    }
    fn_828E9D28(&stack0x00000000 + -0xe0,&stack0x00000000 + -0xb0,uVar2);
    fn_823B4970(*param_3,&stack0x00000000 + -0xe0,(uVar2 & 0x1fffffff) * 8 - lVar3,0);
    fn_828E9D40(*param_3);
  }
  return;
}

