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
extern int fn_82AA66A8();
extern int fn_82B466F8();
extern int fn_82B47730();
extern int fn_82F6DCE0();
extern unsigned int lbl_83160F7C;


void fn_82B4A328(undefined8 param_1,uint param_2,ulonglong param_3)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (param_2 < 0xf) {
    pcVar2 = (&lbl_83160F7C)[param_2];
    if ((pcVar2 != (char *)0x0) && (pcVar4 = pcVar2, (param_3 & 0xffffffff) < 10)) {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar3 = fn_82B47730(param_1,pcVar4 + (1 - (int)pcVar2),0);
      fn_82F6DCE0(uVar3,pcVar4 + (1 - (int)pcVar2),0xffffffff820d7c44,
                        (&lbl_83160F7C)[param_2],param_3);
      fn_82B466F8(param_1,uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c1);
}

