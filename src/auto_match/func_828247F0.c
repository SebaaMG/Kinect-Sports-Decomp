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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82230300();
extern int fn_8223B728();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822402F8();
extern int fn_822403C8();
extern int fn_82826120();
extern unsigned int stack0x00000000;
extern unsigned int uStack_f0;


undefined8 fn_828247F0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uStack_f0;
  
  uVar2 = ZEXT48(&stack0x00000000);
  fn_8223CFC0(uVar2 - 0xc0,2,1);
  fn_82826120(param_1,uVar2 - 0xf0);
  uVar1 = *(uint *)(param_2 + 8);
  uVar4 = (ulonglong)*(uint *)(**(int **)(uStack_f0 + 0x3bc) + *(int *)(param_2 + 0xc) * 4);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 1) == 0) {
        if (((uVar1 & 0x10) == 0) && ((uVar1 & 0x40) == 0)) goto LAB_828248b4;
        lVar3 = fn_82240158(uVar2 - 0xc0,uVar4);
        uVar4 = 0xffffffff8201eca4;
      }
      else {
        lVar3 = uVar2 - 0xc0;
      }
    }
    else {
      lVar3 = fn_82240158(uVar2 - 0xc0,uVar4);
      uVar4 = 0xffffffff8201eca0;
    }
  }
  else {
    lVar3 = fn_82240158(uVar2 - 0xc0,uVar4);
    uVar4 = 0xffffffff8201ec9c;
  }
  fn_82240158(lVar3,uVar4);
LAB_828248b4:
  fn_8223B728(uVar2 - 0xc0,param_4);
  fn_822403C8(uVar2 - 0xe0,uVar2 - 0xbc);
  fn_822402F8(param_4,uVar2 - 0xe0);
  fn_82230300(uVar2 - 0xe0,1,0);
  fn_8223DCC8(uVar2 - 0xc0);
  return 1;
}

