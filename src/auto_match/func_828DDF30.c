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
extern int fn_828E9DB8();
extern int fn_828EA2D8();
extern unsigned int lbl_82002C5C;
extern float lbl_82027070;


void fn_828DDF30(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,uVar1,1);
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x84);
    fn_8223C478(param_2,0x20,0);
    fn_828E9DB8(param_2,uVar1,0x20);
    fn_8223C478(param_2,0x120,0);
    fn_828EA2D8(param_2,param_1 + 0x8c,0x24);
    fn_8223C478(param_2,0x40,0);
    fn_828EA2D8(param_2,param_1 + 0xb0,8);
    fn_8223C478(param_2,0x80,0);
    fn_828EA2D8(param_2,param_1 + 0xb8,0x10);
  }
  else if (*(int *)(param_1 + 0x80) == 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x84);
    fn_8223C478(param_2,0x20,0);
    fn_828E9DB8(param_2,uVar1,0x20);
    fVar2 = *(float *)(param_1 + 0x88) * lbl_82027070 + lbl_82002C5C;
    fn_8223C478(param_2,4,0);
    fn_828E9DB8(param_2,(int)fVar2,4);
  }
  return;
}

