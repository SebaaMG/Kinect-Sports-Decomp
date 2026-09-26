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
extern int fn_828B5D48();
extern int fn_828E9DB8();
extern int fn_828EA2D8();


void fn_828DC268(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x94);
  fn_8223C478(param_2,4,0);
  fn_828E9DB8(param_2,uVar1,4);
  fn_8223C478(param_2,0x40,0);
  fn_828EA2D8(param_2,param_1 + 0x98,8);
  if (*(int *)(param_1 + 0x94) == 0) {
    bVar4 = *(int *)(param_1 + 0xa0) != 0;
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,bVar4,1);
    if (bVar4) {
      uVar1 = *(undefined4 *)(param_1 + 0xa0);
      fn_8223C478(param_2,4,0);
      fn_828E9DB8(param_2,uVar1,4);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    fn_8223C478(param_2,2,0);
    fn_828E9DB8(param_2,uVar1,2);
    uVar1 = *(undefined4 *)(param_1 + 0x84);
    fn_8223C478(param_2,0x10,0);
    fn_828E9DB8(param_2,uVar1,0x10);
    bVar4 = 1 < *(uint *)(param_1 + 0x88);
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,bVar4,1);
    if (bVar4) {
      uVar2 = *(uint *)(param_1 + 0x88);
      fn_8223C478(param_2,2,0);
      fn_828E9DB8(param_2,(ulonglong)uVar2 - 1,2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x8c);
    fn_8223C478(param_2,2,0);
    fn_828E9DB8(param_2,uVar1,2);
    uVar1 = *(undefined4 *)(param_1 + 0x90);
    fn_8223C478(param_2,0x10,0);
    fn_828E9DB8(param_2,uVar1,0x10);
    fn_828B5D48(param_1 + 0xc0,*(undefined4 *)(param_1 + 0x6c),param_2);
  }
  bVar4 = *(int *)(param_1 + 0xb4) != 0;
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,bVar4,1);
  if (bVar4) {
    puVar3 = (undefined4 *)(param_1 + 0xa4);
    if (0xf < *(uint *)(param_1 + 0xb8)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    fn_8224BF30(param_2,puVar3,0);
  }
  return;
}

