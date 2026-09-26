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
extern int fn_828223C8();
extern int fn_82827750();
extern int fn_82827980();
extern int fn_828283F0();
extern int fn_8282A570();
extern int fn_8282B450();
extern int fn_8282B8C0();
extern int fn_8282D858();
extern int fn_8282DD18();
extern int fn_8282DF40();
extern int fn_8282E2D8();
extern int fn_8282E5D8();
extern int fn_8282E888();
extern int fn_8282F2B0();
extern int fn_8282F380();
extern int fn_828326A8();


void fn_8282E950(int param_1)

{
  int iVar1;
  char cVar2;
  int aiStack_20 [4];
  
  fn_82827980(param_1,0xffffffff8201ed5c,0);
  fn_828283F0(param_1,1);
  iVar1 = param_1 + 0x2fc;
  do {
    fn_828223C8(iVar1,aiStack_20);
    iVar1 = aiStack_20[0];
  } while (aiStack_20[0] != 0);
  fn_8282B450(param_1);
  cVar2 = fn_82827750(param_1);
  if (cVar2 != '\0') {
    fn_8282B8C0(param_1);
  }
  fn_8282D858(param_1);
  fn_8282E5D8(param_1);
  fn_8282A570(param_1);
  cVar2 = fn_82827750(param_1);
  if (cVar2 != '\0') {
    fn_828326A8(param_1);
  }
  if (*(int *)(param_1 + 0x3dc) != 0) {
    fn_8282E2D8(param_1);
    fn_8282F380(param_1);
  }
  fn_8282DF40(param_1);
  fn_8282DD18(param_1);
  if (*(int *)(param_1 + 0x3dc) != 0) {
    fn_8282F2B0();
  }
  fn_8282E888(param_1);
  return;
}

