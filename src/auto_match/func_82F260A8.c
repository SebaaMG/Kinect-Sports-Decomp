extern char *pcRam8325f86c;
extern char *pcRam8325f870;
extern char *pcRam8325f87c;
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
extern int fn_82F24A58();
extern int fn_82F24B68();
extern int fn_82F25038();
extern int fn_82F25510();
extern int fn_82F25920();
extern int fn_82F25D98();
extern unsigned int lbl_8325F874;
extern unsigned int lbl_8325F878;
extern unsigned int lbl_8325F880;


void fn_82F260A8(void)

{
  lbl_8325F880 = fn_82F25D98;
  pcRam8325f87c = fn_82F25920;
  lbl_8325F878 = fn_82F24B68;
  lbl_8325F874 = fn_82F25510;
  pcRam8325f870 = fn_82F25038;
  pcRam8325f86c = fn_82F24A58;
  return;
}
