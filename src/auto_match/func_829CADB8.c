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
extern int fn_8265C990();
extern int iRam83217168;
extern int iRam8321716c;
extern unsigned int lbl_83217170;


void fn_829CADB8(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  RtlEnterCriticalSection(0xffffffff8315c428);
  if (iRam83217168 != 0) {
    fn_8265C990(iRam83217168,0x209c0000);
    iRam83217168 = 0;
  }
  if (iRam8321716c != 0) {
    fn_8265C990(*(undefined4 *)(iRam8321716c + 100),0xffffffffac9c0000);
    fn_8265C990(iRam8321716c,0x209c0000);
    iRam8321716c = 0;
  }
  if (lbl_83217170 != 0) {
    fn_8265C990(*(undefined4 *)(lbl_83217170 + 100),0xffffffffac9c0000);
    fn_8265C990(lbl_83217170,0x209c0000);
    lbl_83217170 = 0;
  }
  puVar1 = (undefined4 *)0x83217158;
  lVar2 = 7;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  RtlLeaveCriticalSection(0xffffffff8315c428);
  return;
}

