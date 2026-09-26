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
extern int fn_82FA5190();
extern int fn_82FFFB38();
extern unsigned int lbl_8217C364;
extern unsigned int lbl_831BC768;


void fn_830145F8(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *param_1 = &lbl_8217C364;
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    fn_82FA5190(lbl_831BC768);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  puVar1 = (undefined4 *)param_1[0xf];
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = puVar1[0x17];
    puVar1[0x17] = (int)((ulonglong)uVar2 - 1);
    uVar3 = lbl_831BC768;
    if ((longlong)((ulonglong)uVar2 - 1) < 1) {
      (**(code **)*puVar1)(puVar1,0);
      fn_82FA5190(uVar3,puVar1);
    }
  }
  fn_82FFFB38(param_1);
  return;
}

