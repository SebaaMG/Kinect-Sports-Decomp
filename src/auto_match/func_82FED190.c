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
extern int fn_82FA5190();
extern int fn_8301BB18();
extern int fn_8301D0D8();
extern int fn_83021E70();
extern int fn_830224E8();
extern int fn_83024470();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_831BC770;
extern unsigned int lbl_832643F4;
extern unsigned int lbl_832643F8;


void fn_82FED190(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = lbl_832643F4;
  if (lbl_832643F4 != lbl_832643F8) {
    do {
      piVar1 = (int *)*puVar4;
      fn_83024470(piVar1 + 4);
      iVar2 = piVar1[2];
      while (iVar2 != 0) {
        piVar3 = (int *)*piVar1;
        if (piVar3 != (int *)0x0) {
          if (*piVar3 == 0) {
            *piVar1 = 0;
            piVar1[1] = 0;
          }
          else {
            *piVar1 = *piVar3;
          }
          piVar1[2] = piVar1[2] + -1;
        }
        fn_8301BB18(piVar3 + 2);
        fn_8301D0D8(piVar3 + 2);
        fn_83021E70(piVar3 + 0x6b);
        piVar3[0x68] = (int)&lbl_8217D040;
        fn_82FA5190(lbl_831BC770,piVar3);
        iVar2 = piVar1[2];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      fn_830224E8(piVar1 + 0x24);
      fn_82FA5190(lbl_831BC770,piVar1);
      puVar4 = puVar4 + 1;
    } while (puVar4 != lbl_832643F8);
  }
  lbl_832643F8 = lbl_832643F4;
  return;
}

