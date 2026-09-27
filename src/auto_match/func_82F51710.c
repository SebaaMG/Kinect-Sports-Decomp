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
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8256E1D8();
extern int fn_8265C9E0();
extern int fn_82F515F0();
extern int fn_82F541C8();
extern unsigned int iStack_3c;
extern unsigned int lbl_82165B20;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


undefined4 * fn_82F51710(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  struct { undefined4 first; int second; } stack_pair_40;

  struct { undefined4 first; undefined4 second; } stack_pair_38;


  puVar3 = (undefined4 *)fn_8265C9E0(4);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &lbl_82165B20;
  }
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  fn_82F515F0(&stack_pair_40.first,puVar3);
  iVar2 = stack_pair_40.second;
  uVar1 = stack_pair_40.first;
  stack_pair_38.first = 0;
  stack_pair_38.second = 0;
  fn_82517978(&stack_pair_38.first,stack_pair_40.first,stack_pair_40.second,0);
  fn_82F541C8(param_2,&stack_pair_38.first);
  *param_1 = 0;
  param_1[1] = 0;
  fn_8256E1D8(param_1,uVar1,iVar2);
  if (iVar2 != 0) {
    fn_822315A0(iVar2);
  }
  return param_1;
}
