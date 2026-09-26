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
extern int fn_823AB478();
extern int fn_825269D0();
extern int fn_82599418();
extern int fn_827D81A8();
extern int fn_828EA610();
extern unsigned int lbl_83265988;
extern unsigned int lbl_8326599C;
extern unsigned int lbl_832659AC;
extern unsigned int lbl_832659B0;
extern unsigned int lbl_832659C8;
extern unsigned int lbl_832659CC;
extern unsigned int lbl_83265A24;
extern unsigned int lbl_8327F794;


void fn_825126F0(int param_1,char param_2)

{
  int iVar1;
  char cVar2;
  
  if ((&lbl_83265988)[param_1] != 0) {
    lbl_832659C8 = fn_823AB478();
    (&lbl_8326599C)[param_1] = (undefined4 *)(&lbl_83265988)[param_1];
    (*(code *)**(undefined4 **)(&lbl_83265988)[param_1])();
  }
  (&lbl_83265988)[param_1] = 0;
  lbl_832659CC = 1;
  lbl_832659B0 = lbl_832659B0 + -1;
  lbl_832659AC = lbl_832659AC + -1;
  if (param_2 == '\0') {
    iVar1 = (&lbl_8326599C)[param_1];
    cVar2 = fn_828EA610(iVar1);
    if (((cVar2 == '\0') && (*(char *)(iVar1 + 0xd8) == '\0')) && (*(int *)(iVar1 + 0x124) != -1)) {
      *(undefined4 *)(iVar1 + 0x124) = 0xffffffff;
      fn_827D81A8(lbl_83265A24);
      fn_82599418();
    }
    if (lbl_8327F794 != 0) {
      fn_825269D0(0x45,0);
    }
  }
  return;
}

