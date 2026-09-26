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
extern unsigned int lbl_832961DC;


void fn_82520890(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = lbl_832961DC;
  uVar1 = *(undefined4 *)(param_1 + 0x7d8);
  fn_8223C478(param_3,lbl_832961DC,0);
  fn_828E9DB8(param_3,uVar1,uVar3);
  iVar2 = *(int *)(param_1 + 0x7d8);
  if (iVar2 != 0) {
    fn_8223C478(param_3,iVar2 << 3,0);
    fn_828EA2D8(param_3,param_1 + 0x3f0,iVar2);
  }
  return;
}

