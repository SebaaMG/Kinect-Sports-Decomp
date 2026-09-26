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
extern unsigned int *auStack_30;
extern int fn_829C9BB0();
extern unsigned int iStack_3c;
extern unsigned int lbl_8315C3E8;
extern unsigned int lbl_8321505C;
extern unsigned int uStack_40;


void fn_829CD010(void)

{
  int iVar1;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 auStack_30 [8];
  
  uStack_40 = 0;
  iStack_3c = 0;
  iVar1 = (*(code *)lbl_8315C3E8)(&uStack_40);
  if ((((-1 < iVar1) && (iStack_3c != 0)) && (iStack_3c != 1)) &&
     (((iStack_3c == 2 || (iStack_3c == 3)) ||
      (((iStack_3c != 4 && (iStack_3c != 5)) && ((iStack_3c == 6 || (iStack_3c == 7)))))))) {
    auStack_30[0] = 2;
    lbl_8321505C = 0;
    fn_829C9BB0(auStack_30);
  }
  return;
}

