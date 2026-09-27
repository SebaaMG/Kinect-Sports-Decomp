extern char *pcRam832656d0;
extern char *pcRam832656d4;
extern char *pcRam832656d8;
extern char *pcRam832656dc;
extern char *pcRam832656e0;
extern char *pcRam832656e4;
extern char *pcRam832656e8;
extern char *pcRam832656ec;
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
extern int fn_82CE8268();
extern int fn_83097850();
extern int fn_83097978();
extern int fn_83097A58();
extern int fn_83097E18();
extern int fn_83097F78();
extern int fn_830981B8();
extern int fn_83098A18();
extern int fn_83099190();


void fn_83088FB0(undefined8 param_1)

{
  pcRam832656d0 = fn_83099190;
  pcRam832656d4 = fn_83098A18;
  pcRam832656e0 = fn_83097E18;
  pcRam832656dc = fn_83097A58;
  pcRam832656d8 = fn_83097978;
  pcRam832656e4 = fn_830981B8;
  pcRam832656e8 = fn_83097F78;
  pcRam832656ec = fn_83097850;
  fn_82CE8268(param_1,3,0x832656d000000008,0x83088b0083088be0);
  return;
}
