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
extern int fn_825200A8();
extern int fn_82523148();
extern int fn_825269D0();
extern int fn_82527168();
extern int fn_82558A18();
extern int fn_825CFEA0();
extern unsigned int lbl_83266104;


void fn_825CFDF0(undefined8 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  param_2[1] = 0;
  param_2[2] = 0;
  fn_82558A18();
  uVar1 = lbl_83266104;
  if (*param_2 != 0) {
    fn_82527168(param_2,param_2);
    uVar1 = lbl_83266104;
  }
  do {
    uVar3 = (ulonglong)uVar1;
    if (uVar3 == 0) {
LAB_825cfe6c:
      fn_825CFEA0(param_1,param_2);
      if (param_2[0x351] != 0) {
        fn_82523148();
        param_2[0x351] = 0;
      }
      fn_825269D0(0x18,param_2);
      return;
    }
    iVar2 = fn_825200A8(uVar3 + 8);
    if (iVar2 != 0) {
      param_2[0x351] = (int)uVar3;
      goto LAB_825cfe6c;
    }
    uVar1 = *(uint *)((int)uVar3 + 4);
  } while( true );
}

