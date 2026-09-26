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
extern int fn_823AA2A8();
extern int fn_823AA970();
extern int fn_8240D928();
extern int fn_82610EF0();
extern int fn_828E9DB8();


void fn_828D0300(int param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar2 = *(undefined2 *)(param_1 + 4);
  fn_8223C478(param_2,0x10,0);
  fn_828E9DB8(param_2,uVar2,0x10);
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  fn_8223C478(param_2,8,0);
  fn_828E9DB8(param_2,uVar1,8);
  bVar4 = *(char *)(param_1 + 1) != '\0';
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,bVar4,1);
  if (bVar4) {
    uVar1 = *(undefined1 *)(param_1 + 1);
    fn_8223C478(param_2,8,0);
    fn_828E9DB8(param_2,uVar1,8);
  }
  bVar4 = *(char *)(param_1 + 2) != '\0';
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,bVar4,1);
  if (bVar4) {
    uVar1 = *(undefined1 *)(param_1 + 2);
    fn_8223C478(param_2,8,0);
    fn_828E9DB8(param_2,uVar1,8);
  }
  param_1 = param_1 + 8;
  uVar3 = fn_823AA2A8(param_1);
  fn_8223C478(param_2,6,0);
  fn_828E9DB8(param_2,uVar3,6);
  uVar3 = fn_82610EF0(param_1);
  fn_8223C478(param_2,6,0);
  fn_828E9DB8(param_2,uVar3,6);
  uVar3 = fn_8240D928(param_1);
  fn_8223C478(param_2,6,0);
  fn_828E9DB8(param_2,uVar3,6);
  uVar3 = fn_823AA970(param_1);
  fn_8223C478(param_2,6,0);
  fn_828E9DB8(param_2,uVar3,6);
  return;
}

