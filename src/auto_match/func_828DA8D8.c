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
extern int fn_8223C478();
extern int fn_828AFF88();
extern int fn_828B00A0();
extern int fn_828E9DB8();
extern int fn_828E9F18();


void fn_828DA8D8(int param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = fn_828AFF88((ulonglong)*(uint *)(param_1 + 0x6c) + 0x278);
  cVar1 = *(char *)(param_1 + 0x80);
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,cVar1 != '\0',1);
  if (*(char *)(param_1 + 0x80) == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    lVar4 = *(longlong *)(param_1 + 0x88);
    fn_8223C478(param_2,0x1e,0);
    fn_828E9F18(param_2,((int)uVar2 - (int)uVar3) + lVar4 + 100000,0x1e);
    uVar2 = fn_828B00A0((ulonglong)*(uint *)(param_1 + 0x6c) + 0x278);
    fn_8223C478(param_2,0x1e,0);
    fn_828E9F18(param_2,uVar2,0x1e);
  }
  else {
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    fn_8223C478(param_2,0x1e,0);
    fn_828E9F18(param_2,uVar2,0x1e);
  }
  return;
}

