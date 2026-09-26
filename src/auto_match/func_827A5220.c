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
extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_8278FBA0();
extern int fn_82794B38();
extern int fn_8279C588();
extern int fn_827B0050();
extern unsigned int lbl_82015C34;


void fn_827A5220(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  *param_1 = &lbl_82015C34;
  uVar1 = fn_8279C588(*(undefined4 *)(param_1[3] + 8));
  puVar2 = param_1 + 0x25;
  lVar3 = 10;
  do {
    puVar2 = puVar2 + 1;
    fn_827B0050(uVar1,*puVar2);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fn_8278FBA0(param_1 + 5,param_1[4]);
  fn_82794B38(param_1 + 5);
  if (param_1[4] != 0) {
    fn_8267C498();
  }
  if (param_1[2] != 0) {
    fn_8267C4F0();
  }
  fn_8267C488(param_1);
  return;
}

