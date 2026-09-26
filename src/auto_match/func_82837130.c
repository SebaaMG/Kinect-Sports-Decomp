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
extern int fn_82647308();
extern int fn_82836D68();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8320A7F0;
extern unsigned int lbl_8320A87C;
extern unsigned int lbl_8320A880;
extern unsigned int lbl_8320A884;
extern unsigned int lbl_8320A888;
extern unsigned int lbl_8320A88C;
extern unsigned int lbl_8320A890;
extern unsigned int lbl_8320A8B4;
extern unsigned int uRam8320a7f4;
extern unsigned int uRam8320a7f8;
extern unsigned int uRam8320a7fc;
extern unsigned int uRam8320a894;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82837130(undefined4 *param_1)

{
  undefined4 auStack_30 [12];
  
  uRam8320a894 = 1;
  fn_82836D68(param_1,auStack_30);
  fn_82647308(0,1,0,auStack_30[0],0xffffffff8320a800,0xffffffff8320a898);
  lbl_8320A888 = 0;
  lbl_8320A884 = 1;
  lbl_8320A87C = 0;
  uRam8320a7fc = lbl_821AAD20;
  uRam8320a7f8 = lbl_821AAD20;
  uRam8320a7f4 = lbl_821AAD20;
  lbl_8320A7F0 = lbl_821AAD20;
  lbl_8320A890 = *param_1;
  lbl_8320A88C = param_1[1];
  lbl_8320A8B4 = param_1[9];
  lbl_8320A880 = *(undefined1 *)((int)param_1 + 0x1d);
  return;
}

