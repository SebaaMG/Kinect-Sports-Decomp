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
extern int fn_82668DC0();
extern int fn_82669C68();
extern int fn_8266A4A8();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;


undefined4 fn_8266A420(undefined4 param_1,int param_2,uint param_3)

{
  undefined4 uStack00000014;
  int iStack0000001c;
  uint uStack00000024;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  fn_82669C68((ulonglong)param_3 + 4,*(undefined4 *)(param_2 + 4),param_3);
  fn_82668DC0(iStack0000001c,(ulonglong)*(uint *)(iStack0000001c + 4) - 4,
                *(undefined4 *)(iStack0000001c + 4));
  *(int *)(iStack0000001c + 4) = *(int *)(iStack0000001c + 4) + -4;
  fn_8266A4A8(uStack00000014,iStack0000001c,uStack00000024);
  return uStack00000014;
}

