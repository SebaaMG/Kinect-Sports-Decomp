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
extern unsigned int *auStack_38;
extern unsigned int *auStack_50;
extern int fn_8265CA20();
extern int fn_82886720();
extern int fn_8288C2E0();
extern int fn_828B22F0();
extern int fn_828BDB28();
extern int fn_828CEEB0();
extern unsigned int iStack_44;
extern unsigned int stack0x00000000;


void fn_828BE070(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_50 [8];
  undefined4 *puStack_48;
  int iStack_44;
  undefined4 auStack_38 [14];
  
  fn_8288C2E0(&stack0x00000000 + -0x48,&stack0x00000000 + -0x50);
  puVar1 = (undefined4 *)
           fn_828CEEB0(&stack0x00000000 + -0x38,(ulonglong)*(uint *)(param_1 + 0x6c) + 0xc,
                             param_1,param_2);
  if (((undefined4 *)(&stack0x00000000 + -0x48) != puVar1) &&
     (fn_828B22F0(&stack0x00000000 + -0x48), puVar1[1] != 0)) {
    fn_828BDB28(&stack0x00000000 + -0x48,*puStack_48,puVar1,*(undefined4 *)*puVar1);
  }
  fn_828B22F0(&stack0x00000000 + -0x38);
  fn_8265CA20(auStack_38[0]);
  if (iStack_44 == 0) {
    fn_82886720(param_1,param_2);
  }
  else {
    for (puVar1 = (undefined4 *)*puStack_48; puVar1 != puStack_48; puVar1 = (undefined4 *)*puVar1) {
      fn_82886720(puVar1[2],param_2);
    }
  }
  fn_828B22F0(&stack0x00000000 + -0x48);
  fn_8265CA20(puStack_48);
  return;
}

