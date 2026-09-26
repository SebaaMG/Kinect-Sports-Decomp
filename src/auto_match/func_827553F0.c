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
extern unsigned int *auStack_c0;
extern int fn_82755020();
extern int fn_82F66368();
extern int fn_82F66570();
extern unsigned int stack0x00000000;


longlong fn_827553F0(undefined8 param_1,undefined1 *param_2,undefined8 param_3,char param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 auStack_c0 [192];
  
  if (param_4 == '\0') {
    lVar1 = fn_82755020();
  }
  else {
    lVar1 = 0;
    do {
      iVar2 = fn_82F66570(param_2,0x2c);
      puVar3 = param_2;
      if (iVar2 == 0) {
LAB_82755478:
        lVar1 = fn_82755020(param_1,puVar3,param_3,param_5);
        if (lVar1 != 0) {
          return lVar1;
        }
      }
      else {
        uVar4 = iVar2 - (int)param_2;
        if (uVar4 < 0x80) {
          fn_82F66368(&stack0x00000000 + -0xc0,0x7f,param_2,uVar4);
          param_2 = param_2 + uVar4 + 1;
          auStack_c0[uVar4] = 0;
          puVar3 = &stack0x00000000 + -0xc0;
          goto LAB_82755478;
        }
      }
    } while (iVar2 != 0);
  }
  return lVar1;
}

