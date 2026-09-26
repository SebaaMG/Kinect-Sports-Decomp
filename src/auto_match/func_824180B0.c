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
extern int fn_822C18B8();
extern int fn_82417FC0();
extern int fn_825354B8();
extern int fn_82536288();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_824180B0(int *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 auStack_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  fn_82417FC0(param_1,&uStack_40);
  auStack_50[0] = *param_2;
  auStack_50[0] =
       fn_825354B8(auStack_50,param_3,0,**(undefined4 **)(*param_1 + 0x2b58),param_4,
                         &uStack_40);
  fn_82536288(auStack_50);
  fn_822C18B8(&uStack_40);
  return;
}

