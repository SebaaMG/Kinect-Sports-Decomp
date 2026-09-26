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
extern int fn_827E0250();
extern int fn_827E02A8();
extern int fn_827E0438();
extern int fn_827E0C38();
extern int fn_827E8720();


undefined4 * fn_827E1118(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_40 [64];
  
  puVar3 = (undefined4 *)(param_2 + 4);
  if ((param_3 == (int *)**(int **)(param_2 + 4)) && (param_4 == *(int **)(param_2 + 4))) {
    fn_827E02A8(puVar3);
    fn_827E0C38(param_2,8);
    *param_1 = *(undefined4 *)*puVar3;
  }
  else {
    while (param_3 != param_4) {
      piVar1 = (int *)*param_3;
      uVar2 = fn_827E0250(param_2,param_3 + 2);
      fn_827E0438(param_2,param_3,uVar2);
      fn_827E8720(auStack_40,puVar3,param_3);
      param_3 = piVar1;
    }
    *param_1 = param_3;
  }
  return param_1;
}

