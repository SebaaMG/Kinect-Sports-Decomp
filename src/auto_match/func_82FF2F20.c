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
extern int fn_82FECE48();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264574;
extern unsigned int lbl_83264578;
extern unsigned int lbl_8326457C;


undefined8 fn_82FF2F20(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = lbl_83264574;
  while (piVar1 != (int *)0x0) {
    if (piVar1[4] == 0) {
      lbl_83264578 = 0;
      lbl_83264574 = (int *)0x0;
    }
    else {
      lbl_83264574 = (int *)piVar1[4];
    }
    lbl_8326457C = lbl_8326457C + -1;
    (**(code **)piVar1[1])(piVar1 + 1,0,1);
    fn_82FECE48(piVar1);
    (**(code **)(*piVar1 + 8))(piVar1,0);
    uVar2 = lbl_831BC768;
    (**(code **)*piVar1)(piVar1,0);
    fn_82FA5190(uVar2,piVar1);
    piVar1 = lbl_83264574;
  }
  lbl_83264574 = piVar1;
  return 1;
}

