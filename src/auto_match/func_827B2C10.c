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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern int fn_827B18F8();
extern int fn_827B1968();
extern int fn_827B28D0();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_827B2C10(int param_1,short param_2,undefined2 param_3)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_827B28D0();
  }
  uStack_30 = *(undefined4 *)(param_1 + 0x18);
  uStack_2c = 1;
  fn_827B1968(param_1 + 0x28,&uStack_30);
  uStack_30 = CONCAT22(param_2 << 1,param_3);
  fn_827B18F8(param_1 + 0x18,&uStack_30);
  return;
}

