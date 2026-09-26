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
extern unsigned int *auStack_40;
extern int fn_826F0278();
extern int fn_826F06A8();
extern int fn_826F0768();
extern int fn_826F1018();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_826F19F8(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [48];
  
  uStack_48 = 0;
  uStack_4c = 1;
  uStack_50 = 0;
  fn_826F0278(auStack_40,param_1,&uStack_50);
  cVar1 = fn_826F06A8(param_1);
  if (cVar1 != '\0') {
    fn_826F0768(param_1,auStack_40,0);
  }
  sVar2 = *(short *)(param_1 + 6) + -1;
  *(short *)(param_1 + 6) = sVar2;
  if (sVar2 == 0) {
    fn_826F1018(param_1);
  }
  else {
    ((int (*)())fn_826F19F8)();
  }
  return;
}

