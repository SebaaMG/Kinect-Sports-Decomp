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
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8266F628();
extern int fn_8266F6B8();
extern int fn_826728E8();
extern unsigned int iStack_2c;
extern unsigned int lbl_831CEE78;
extern unsigned int lbl_831CEE7C;
extern unsigned int lbl_831CEE80;
extern unsigned int lbl_831CEE84;
extern unsigned int uStack_30;


void fn_8228B6A8(int *param_1)

{
  undefined8 uVar1;
  undefined4 uStack_30;
  int iStack_2c;
  
  if (*param_1 != 0) {
    fn_8266F628(*param_1,1);
    uStack_30 = 0;
    iStack_2c = 0;
    fn_82517978(&uStack_30,*param_1,param_1[1],0);
    uVar1 = fn_8266F6B8();
    fn_826728E8(uStack_30,lbl_831CEE78,uVar1);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
    uStack_30 = 0;
    iStack_2c = 0;
    fn_82517978(&uStack_30,*param_1,param_1[1],0);
    uVar1 = fn_8266F6B8();
    fn_826728E8(uStack_30,lbl_831CEE7C,uVar1);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
    uStack_30 = 0;
    iStack_2c = 0;
    fn_82517978(&uStack_30,*param_1,param_1[1],0);
    uVar1 = fn_8266F6B8();
    fn_826728E8(uStack_30,lbl_831CEE80,uVar1);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
    uStack_30 = 0;
    iStack_2c = 0;
    fn_82517978(&uStack_30,*param_1,param_1[1],0);
    uVar1 = fn_8266F6B8();
    fn_826728E8(uStack_30,lbl_831CEE84,uVar1);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

