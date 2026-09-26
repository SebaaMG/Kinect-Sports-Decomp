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
extern int fn_82F64538();
extern int fn_82F68CC0();


void fn_823F75E0(int *param_1,undefined8 param_2,uint *param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_b0 [176];
  
  if (param_3 != (uint *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar1 = 0xffffffff831d7088;
    }
    else {
      uVar1 = (**(code **)(*(int *)*param_3 + 4))();
    }
    cVar2 = fn_82F64538(uVar1,0xffffffff831dfa18);
    if (cVar2 != '\0') {
      lVar3 = (ulonglong)*param_3 + 0x10;
      goto LAB_823f764c;
    }
  }
  lVar3 = 0;
LAB_823f764c:
  fn_82F68CC0(auStack_b0,lVar3,0x90);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,auStack_b0);
  return;
}

