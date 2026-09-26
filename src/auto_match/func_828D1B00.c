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
extern int fn_8224BF30();
extern int fn_828E9DB8();
extern int fn_828EA2D8();


void fn_828D1B00(int param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  uVar3 = *(undefined4 *)(param_1 + 0x84);
  fn_8223C478(param_2,0x10,0);
  fn_828E9DB8(param_2,uVar3,0x10);
  fn_8223C478(param_2,0x40,0);
  fn_828EA2D8(param_2,param_1 + 0x98,8);
  bVar6 = 1 < *(uint *)(param_1 + 0x88);
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,bVar6,1);
  if (bVar6) {
    uVar4 = *(uint *)(param_1 + 0x88);
    fn_8223C478(param_2,2,0);
    fn_828E9DB8(param_2,(ulonglong)uVar4 - 1,2);
  }
  bVar6 = *(int *)(param_1 + 0x88) != *(int *)(param_1 + 0x8c);
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,bVar6,1);
  if (bVar6) {
    uVar4 = *(uint *)(param_1 + 0x8c);
    fn_8223C478(param_2,2,0);
    fn_828E9DB8(param_2,(ulonglong)uVar4 - 1,2);
  }
  bVar6 = *(int *)(param_1 + 0x90) != 0;
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,bVar6,1);
  if (bVar6) {
    uVar3 = *(undefined4 *)(param_1 + 0x90);
    fn_8223C478(param_2,4,0);
    fn_828E9DB8(param_2,uVar3,4);
  }
  uVar3 = *(undefined4 *)(param_1 + 0xa0);
  fn_8223C478(param_2,8,0);
  fn_828E9DB8(param_2,uVar3,8);
  uVar3 = *(undefined4 *)(param_1 + 0xa4);
  fn_8223C478(param_2,8,0);
  fn_828E9DB8(param_2,uVar3,8);
  bVar6 = *(char *)(param_1 + 0xc4) != '\0';
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,bVar6,1);
  if (bVar6) {
    uVar1 = *(undefined1 *)(param_1 + 0xc4);
    fn_8223C478(param_2,8,0);
    fn_828E9DB8(param_2,uVar1,8);
  }
  bVar6 = *(char *)(param_1 + 0xc5) != '\0';
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,bVar6,1);
  if (bVar6) {
    uVar1 = *(undefined1 *)(param_1 + 0xc5);
    fn_8223C478(param_2,8,0);
    fn_828E9DB8(param_2,uVar1,8);
  }
  bVar6 = *(int *)(param_1 + 0xb8) != 0;
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,bVar6,1);
  if (bVar6) {
    puVar5 = (undefined4 *)(param_1 + 0xa8);
    if (0xf < *(uint *)(param_1 + 0xbc)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    fn_8224BF30(param_2,puVar5,0);
  }
  cVar2 = *(char *)(param_1 + 0xc6);
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,cVar2 != '\0',1);
  return;
}

