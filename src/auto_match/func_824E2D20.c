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
extern int fn_824B4300();
extern int fn_82F4DA50();
extern int fn_82F4DDD8();
extern int fn_82F51AC0();
extern int fn_82F528E0();
extern unsigned int lbl_83262350;
extern unsigned int lbl_83262360;


void fn_824E2D20(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = fn_824B4300();
  puVar2 = &lbl_83262350;
  if (lbl_83262360 != 0) {
    fn_82F528E0();
  }
  cVar1 = fn_82F4DA50(0x10);
  if (cVar1 != '\0') {
    fn_82F4DDD8(0xc);
  }
  do {
    fn_82F51AC0(uVar3,*puVar2,param_2,0,2);
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < -0x7cd9dca8);
  return;
}

