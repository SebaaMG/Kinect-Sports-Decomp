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
extern unsigned int *auStack_400;
extern unsigned int *auStack_40c;
extern unsigned int *auStack_410;
extern int fn_82289408();
extern int fn_8228A728();
extern int fn_8229E090();
extern int fn_8234F338();
extern int fn_82484768();


void fn_82289930(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_410 [4];
  undefined1 auStack_40c [12];
  undefined1 auStack_400 [1008];
  
  if (param_1 == 0) {
    fn_82289408(param_2,2,0,0);
    uVar1 = fn_82484768(*(undefined4 *)(param_2 + 0x11f0));
    fn_8234F338((ulonglong)*(uint *)(param_2 + 0x11f0) + 0x234,uVar1,auStack_40c,auStack_410);
    uVar1 = fn_82484768(*(undefined4 *)(param_2 + 0x11f0));
    fn_8228A728(auStack_400,param_2,2,uVar1,auStack_40c,auStack_410);
    uVar2 = 7;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    uVar2 = 1;
  }
  *(undefined4 *)(param_2 + 0x604) = uVar2;
  if (*(int *)(param_2 + 0x11f8) != 0) {
    fn_8229E090(*(int *)(param_2 + 0x11f8),0,1);
    *(undefined4 *)(param_2 + 0x11f8) = 0;
  }
  return;
}

