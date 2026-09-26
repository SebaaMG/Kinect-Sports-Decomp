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
extern int fn_8225F670();
extern int fn_8225FDE0();
extern int fn_82279AF0();
extern int fn_822848B8();
extern int fn_8229E090();
extern int fn_82359C18();
extern int fn_8265CA20();
extern int fn_82E1CAD0();
extern int fn_82E1CB88();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();
extern unsigned int lbl_821A9D60;


undefined4 * fn_82291120(undefined4 *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  double dVar5;
  
  *param_1 = &lbl_821A9D60;
  if (param_1[0x5a] != 0) {
    fn_822848B8();
    param_1[0x5a] = 0;
  }
  if (param_1[0x59] != 0) {
    fn_8229E090(param_1[0x59],0,1);
    param_1[0x59] = 0;
  }
  uVar1 = param_1[0x5c];
  dVar5 = (double)(float)param_1[0x5b];
  pcVar2 = (char *)fn_8225F670();
  if (*pcVar2 != '\0') {
    iVar3 = fn_8225FDE0(0x68,1);
    if (iVar3 == 0) {
      cVar4 = fn_82E1CAD0(0x68);
      if (cVar4 != '\0') {
        fn_82E1CC60(dVar5,0xffffffff821a6d44);
        fn_82E1CB88(0xffffffff821a79ec,uVar1);
        fn_82E1CCA8();
      }
    }
  }
  fn_82359C18(param_1 + 0x52);
  fn_82279AF0(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

