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
extern int fn_8267D608();
extern int fn_8267EA40();
extern unsigned int lbl_82002ACC;
extern unsigned int lbl_8200565C;
extern unsigned int lbl_82005670;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined4 * fn_8267DA58(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  fn_8267EA40(param_1,1);
  param_1[3] = &lbl_82002ACC;
  uStack_40 = 0;
  *param_1 = &lbl_82005670;
  param_1[3] = &lbl_8200565C;
  uStack_3c = 0;
  uStack_30 = 0;
  uStack_2c = 3;
  uStack_38 = param_2;
  uStack_34 = param_3;
  fn_8267D608(param_1,&uStack_40);
  return param_1;
}

