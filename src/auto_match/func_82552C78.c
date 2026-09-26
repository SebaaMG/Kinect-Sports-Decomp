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
extern unsigned int *auStack_30;
extern int fn_822CD140();
extern int fn_82535298();
extern int fn_825354B8();
extern int fn_82536288();
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82552C78(int param_1,undefined4 *param_2,ulonglong param_3,ulonglong param_4,
                  undefined8 param_5)

{
  undefined4 auStack_30 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = 0;
  uStack_1c = 0;
  auStack_30[0] = *param_2;
  uStack_18 = 0;
  if ((param_3 & 0xffffffff) == 0) {
    auStack_30[0] =
         fn_82535298(auStack_30,*(undefined4 *)(param_1 + 0x84c),&uStack_20,param_5);
  }
  else {
    if ((param_4 & 0xffffffff) == 0) {
      param_4 = 0;
    }
    auStack_30[0] =
         fn_825354B8(auStack_30,param_3,param_4,*(undefined4 *)(param_1 + 0x84c),&uStack_20);
  }
  fn_82536288(auStack_30);
  fn_822CD140(&uStack_20);
  return;
}

