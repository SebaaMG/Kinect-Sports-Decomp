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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82F68CC0();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FFA6E8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642F0;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


undefined8
fn_82FE7320(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4,int param_5,
             char param_6)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 uStack_48;
  uint uStack_40;
  
  if (param_5 == 0) {
    uVar1 = 0x1f;
  }
  else {
    if (param_5 == 1) {
      param_4 = (undefined4 *)*param_4;
    }
    else if (param_6 != '\0') {
      puVar2 = (undefined4 *)fn_82FA5060(lbl_831BC768,param_5 << 2);
      if (puVar2 == (undefined4 *)0x0) {
        return 0x34;
      }
      fn_82F68CC0(puVar2,param_4,param_5 << 2);
      param_4 = puVar2;
    }
    uVar1 = fn_82FFA6E8(lbl_832642F0,CONCAT44((param_1 == 0 ^ 1) + 2,param_2),
                              (ulonglong)param_3 << 0x20,CONCAT44(param_5,param_4),uStack_48,
                              (ulonglong)uStack_40 << 0x20);
    if (((int)uVar1 != 1) && (param_5 != 1)) {
      fn_82FA5190(lbl_831BC768,param_4);
    }
  }
  return uVar1;
}

