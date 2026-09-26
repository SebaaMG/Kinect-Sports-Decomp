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
extern int fn_8267BE38();
extern int fn_826A8E58();
extern int fn_827A58A8();
extern int fn_827A5B10();
extern int fn_827A7148();
extern int fn_827A71A0();
extern unsigned int iStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_827A7AC8(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  
  fn_827A5B10(&piStack_28,param_1);
  uStack_30 = 0;
  uStack_2c = 0;
  cVar2 = fn_826A8E58(&piStack_28,&uStack_30);
  if (cVar2 == '\0') {
    uStack_30 = 0;
    uStack_2c = 0;
    do {
      iVar1 = *(int *)(iStack_24 * 0x14 + *piStack_28 + 0x18);
      if (iVar1 != 0) {
        fn_827A7148(iVar1);
        fn_8267BE38(iVar1);
      }
      fn_827A58A8(&piStack_28);
      cVar2 = fn_826A8E58(&piStack_28,&uStack_30);
    } while (cVar2 == '\0');
  }
  fn_827A71A0(param_1);
  return;
}

