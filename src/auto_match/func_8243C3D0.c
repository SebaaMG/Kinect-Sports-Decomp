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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8223C610();
extern int fn_823B4900();
extern int fn_8265CA20();
extern int fn_828E9D28();
extern unsigned int iStack_38;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


bool fn_8243C3D0(int *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  (**(code **)(*param_1 + 0x40))(param_1,auStack_60);
  puStack_40 = auStack_60;
  iStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_3c = 4;
  fn_828E9D28(auStack_50,auStack_60,4);
  lVar1 = fn_8223C610(auStack_50,1,0,0);
  if (param_2 != (undefined8 *)0x0) {
    if (lVar1 != 0) {
      uVar2 = fn_823B4900(auStack_50,0x1e,0,0);
      *param_2 = uVar2;
    }
    else {
      *param_2 = 0;
    }
  }
  if (iStack_38 != 0) {
    fn_8265CA20();
  }
  return lVar1 != 0;
}

