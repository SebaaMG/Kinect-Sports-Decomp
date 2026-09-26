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
extern int fn_8288CDC8();
extern int fn_8288DDF8();
extern int fn_8288E040();
extern int fn_8288F9F8();
extern int fn_8288FA78();
extern int fn_82890FF0();
extern int fn_828910B8();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


void fn_82891FE0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iStack_20;
  int iStack_1c;
  
  fn_82890FF0();
  fn_8288F9F8(param_1,param_2);
  if ((*(int *)(param_2 + 0x34) == 0) ||
     (iVar1 = *(int *)(*(int *)(param_2 + 0x34) + 0x38), iVar1 == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)(iVar1 + 0x26);
  }
  if (cVar2 != '\0') {
    fn_828910B8(param_1,param_2);
    fn_8288DDF8(param_1,param_2);
  }
  fn_8288FA78(param_1,param_2);
  iStack_20 = param_2;
  fn_8288E040(&iStack_1c,param_1 + 0x5c,&iStack_20);
  if (iStack_1c != *(int *)(param_1 + 0x60)) {
    fn_8288CDC8(&iStack_1c,param_1 + 0x5c);
  }
  return;
}

