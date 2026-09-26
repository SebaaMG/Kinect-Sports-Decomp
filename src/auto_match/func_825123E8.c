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
extern int fn_825269D0();
extern int fn_82599418();
extern int fn_827D81A8();
extern int fn_828EA610();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659AC;
extern unsigned int lbl_832659B0;
extern unsigned int lbl_832659B4;
extern unsigned int lbl_832659C4;
extern unsigned int lbl_832659C8;
extern unsigned int lbl_832659CC;
extern unsigned int lbl_832659CD;
extern unsigned int lbl_83265A24;
extern unsigned int lbl_8326C2A8;
extern unsigned int lbl_8327F668;


void fn_825123E8(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  fn_825269D0(0x3f,0);
  piVar3 = &lbl_83265988;
  lbl_832659AC = 0;
  lbl_832659B0 = 0;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      cVar2 = fn_828EA610(iVar1);
      if (((cVar2 == '\0') && (*(char *)(iVar1 + 0xd8) == '\0')) && (*(int *)(iVar1 + 0x124) != -1))
      {
        *(undefined4 *)(iVar1 + 0x124) = 0xffffffff;
        fn_827D81A8(lbl_83265A24);
        fn_82599418();
      }
      piVar3[5] = *piVar3;
    }
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < -0x7cd9a668);
  lbl_832659CC = 0;
  lbl_832659CD = 0;
  lbl_832659C4 = 0xfe;
  lbl_832659C8 = 0xfe;
  piVar3 = &lbl_832659B4;
  lbl_8327F668 = 0xff;
  do {
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)();
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
  } while ((int)piVar3 < -0x7cd9a63c);
  lbl_8326C2A8 = 0xffffffff;
  return;
}

