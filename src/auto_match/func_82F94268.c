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
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_44;
extern unsigned int *auStack_50;
extern int fn_82F90628();
extern int fn_82F90680();
extern int fn_82F94750();
extern int fn_82F949D0();
extern int fn_82F95200();
extern int fn_82F952E8();


void fn_82F94268(int *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int *piStack00000014;
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [4];
  undefined8 auStack_40 [2];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [24];
  
  piStack00000014 = param_1;
  fn_82F90628(auStack_50,0xffffffff832641cc);
  if (piStack00000014[2] == 0) {
    if (piStack00000014 != (int *)0x0) {
      (**(code **)(*piStack00000014 + 0x2c))(piStack00000014,1);
    }
    fn_82F95200(auStack_40,0xffffffff832641f0,auStack_44);
    uVar1 = fn_82F94750(auStack_30,0xffffffff832641f0);
    cVar2 = fn_82F952E8(auStack_40,uVar1);
    if (cVar2 != '\0') {
      fn_82F949D0(auStack_28,0xffffffff832641f0,auStack_40[0]);
    }
  }
  fn_82F90680(auStack_50);
  return;
}

