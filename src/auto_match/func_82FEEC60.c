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
extern int fn_82FEE7F8();
extern int fn_82FF4DD8();
extern int fn_83023568();
extern int fn_830235F0();
extern int fn_83023618();
extern int fn_830236D8();
extern int fn_83023780();
extern int fn_83023D40();
extern unsigned int lbl_83264304;
extern unsigned int lbl_832643B0;
extern unsigned int lbl_832643D4;
extern unsigned int lbl_83264436;


void fn_82FEEC60(void)

{
  char cVar1;
  
  lbl_83264436 = 0;
  fn_82FEE7F8();
  if (lbl_83264436 == 0) {
    RtlEnterCriticalSection((ulonglong)lbl_832643B0 + 8);
    fn_83023780(lbl_832643B0,0x400);
    RtlLeaveCriticalSection((ulonglong)lbl_832643B0 + 8);
  }
  else {
    RtlEnterCriticalSection((ulonglong)lbl_832643B0 + 8);
    fn_830236D8(lbl_832643B0,0xffffffff83264428);
    RtlLeaveCriticalSection((ulonglong)lbl_832643B0 + 8);
    fn_83023D40(lbl_832643D4);
  }
  RtlEnterCriticalSection((ulonglong)lbl_832643B0 + 8);
  cVar1 = fn_83023568(lbl_832643B0);
  if ((cVar1 != '\0') && (cVar1 = fn_830235F0(lbl_832643B0), cVar1 != '\0')) {
    fn_83023618(lbl_832643B0);
  }
  RtlLeaveCriticalSection((ulonglong)lbl_832643B0 + 8);
  fn_82FF4DD8(lbl_83264304,0xffffffff832643ec,0xffffffff832643e8);
  return;
}

