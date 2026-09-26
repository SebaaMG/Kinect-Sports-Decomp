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
extern int fn_823B4790();
extern int fn_825150E8();
extern int fn_828B02D0();
extern int fn_828BF798();
extern unsigned int uStack_23;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_82231BB8(void)

{
  undefined4 uStack_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_23;
  char *pcStack_20;
  
  fn_825150E8();
  fn_828B02D0(&uStack_30);
  uStack_23 = 0;
  pcStack_20 = "Replay Frame message";
  pcStack_2c = fn_823B4790;
  uStack_28 = 0;
  uStack_30 = 0x1d;
  fn_828BF798(&uStack_30);
  return;
}

